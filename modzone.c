#include <stdio.h>
#include <stdlib.h>
#include <graphics.h>
#include <SDL2/SDL.h>

#include <time.h>

#define NUMBER_OF_OBJECTS 11  	// OTHERS ARE REMMED OFF
#define LEFTCLIP 0           // 20
#define TOPCLIP 0            // 15              
#define RIGHTCLIP 639         // 620        CHANGE AND VIEW !!!
#define BOTTOMCLIP 349        // 335

#define TRUE  1
#define FALSE 0

void updateMovement(void);

#include "trigdata.inc"            // NOW GLOBAL
char freezemove, freezerotate, rotate, move, fire,u,d,l,r;   // FREEZE### SOLVED REAL-TIME PROBLEM
int doo, k;     // DOO USED IN DECELARATION  - TIMER INT
int i,ti,tm, speed, tempint, secs = 0;
long viewer_x, viewer_z = 0;
long *tsin_y, *tcos_y, *sin_y, *cos_y;
int	oldq,qtim,totfrm,frmsec,frame = 0;

void main(void)
{

  int g_driver = EGA;
  int g_mode = EGAHI;
  int j = 0, k = 0;
  int line_clip[30];
  int x1, y1, z1, x2, y2, z2;
  long phil1, phil2, dif;
  char zstr[] = {0,0,0,0,0};
  int zclip = 0;
  float t;
  int page = 0, errorcode;
  int exit_flag = 0;


  struct obj {
	int colour;
	long x_position;
	long z_position;
	int visible;
	int no_of_points;
	int no_of_lines;
	long points[60][3];
	long plot[60][3];
	int lines[30][2];
	} object[NUMBER_OF_OBJECTS];

	printf("\n500 will allow you to view the glorious zclip in action\n");
	printf("\nINPUT zclip value ...");
	scanf("%s",zstr);
	zclip = atoi(zstr);
	printf("%d\n", zclip);

  #include "objects.h"

  doo = 0;
  speed = 5;
  i = 0;
  viewer_x = 0;
  viewer_z = -10100;

  initgraph(&g_driver, &g_mode, "c:\\TC\\BGI");
  sdlbgifast();

  errorcode = graphresult();
  if (errorcode < 0)
  {
	  printf("Graphics error: %s\n", grapherrormsg(errorcode));
	  printf("Press any key to halt:");
	  getch();
	  exit(1); /* terminate with an error code */
  }

  setviewport(LEFTCLIP, TOPCLIP, RIGHTCLIP, BOTTOMCLIP, 1);

  setactivepage(1);
  clearviewport();
  
  setactivepage(0);
  clearviewport();

  setbkcolor(0);
  setcolor(GREEN);

  tsin_y = sin_y = trig;
  tcos_y = cos_y = sin_y + 64;


	do
	{
/***************************/
		frame++;
		totfrm++;
/***************************/
		// Handle keyboard input via SDL events
		move = 0;
		rotate = 0;
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				exit_flag = 1;
			}
			else if (event.type == SDL_KEYDOWN) {
				switch (event.key.keysym.sym) {
					case SDLK_UP: move = 1; break;
					case SDLK_DOWN: move = -1; break;
					case SDLK_LEFT: rotate = -1; break;
					case SDLK_RIGHT: rotate = 1; break;
					case SDLK_ESCAPE: exit_flag = 1; break;
				}
			}
		}
		updateMovement();		i = ti;     		// freeze degrees var so timer int doesn't change 
		sin_y = tsin_y;	// values half way through rendering a screen.
		cos_y = tcos_y;

		page = !page;
		setactivepage(page);
		cleardevice();
		setcolor(GREEN);
		line(LEFTCLIP,175,RIGHTCLIP,175);                   // HORIZON AND CLIP BOX
		line(0,TOPCLIP,640,TOPCLIP);
		line(RIGHTCLIP,0,RIGHTCLIP,350);
		line(0,BOTTOMCLIP,640,BOTTOMCLIP);
		line(LEFTCLIP,0,LEFTCLIP,350);

		for ( k=0; k < NUMBER_OF_OBJECTS; k++ )
			{

			object[k].visible = TRUE;



			for( j=0; j < object[k].no_of_points; j++ )
				{


				/* Perform required translation on each vertex */
				object[k].plot[j][0] = object[k].points[j][0] - viewer_x;
				object[k].plot[j][1] = object[k].points[j][1];
				object[k].plot[j][2] = object[k].points[j][2] - viewer_z;

				/* Perform required rotation on each vertex */
				phil1 = object[k].plot[j][0];      // USE IN SECOND CALC AS FIRST CALC SLIGHTLY ALTERS DATA
				phil2 = object[k].plot[j][2];
				object[k].plot[j][0] = ((object[k].plot[j][0] * *cos_y)
										- (object[k].plot[j][2] * *sin_y)) >> 9;
				object[k].plot[j][2] = ((phil1 * *sin_y)
										+ (phil2 * *cos_y)) >> 9;
									

								  
				/* Check whether a z-point is less than -100 or greater */
				/* than 1000. If so, the whole object can be ignored   */
				if (object[k].plot[j][2] < -500 || object[k].plot[j][2] > 155000) object[k].visible = FALSE;
				if (object[k].visible == FALSE) break;

				}


			if (object[k].visible == TRUE)
				{

				for( j=0; j < object[k].no_of_lines; j++ )


					{
					/* Z-clip routine                                              */
					/* Assume two points which describe a line are passed to the   */
					/* z-clip routine, p1 and p2, each of which have co-ordinates  */
					/* (x1,y1,z1) and (x2,y2,z2) respectively                      */

					/* The first thing we do is determine whether the line is			*/
					/* completely in front of the plane z=1, completely behind the	*/ 
					/*	plane z=1, or whether it cuts through it.							*/

					z1 = object[k].plot [object[k].lines[j][0]] [2];
					z2 = object[k].plot [object[k].lines[j][1]] [2];

					/* Set line_clip to 0 for each line, i.e., all lines are    */
					/* assumed at the beginning to be in front of the plane z=1 */
					line_clip[j] = 0;
					
					if (z1<zclip && z2<zclip)
						{
						/* Line is completely behind plane z=1, hence it is not		*/	
						/* drawn at all															*/

							line_clip[j] = 1;
						}

					if (z1<zclip && z2>=zclip)
						{
						/* Line is entering view volume, hence calculate new z	*/
						/* co-ordinate of p1 using the parametric description 	*/
						/* of a line															*/
						x1 = object[k].plot  [object[k].lines[j][0]] [0];
						y1 = object[k].plot  [object[k].lines[j][0]] [1];
						x2 = object[k].plot  [object[k].lines[j][1]] [0];
						y2 = object[k].plot  [object[k].lines[j][1]] [1];
						dif = z2-z1;
						if(!dif) dif++;       // Prevent difference between z2 and z1 being 0
						t = (float) (zclip-z1) / (dif);		/* zclip=1						*/
																/* Finds value of t        */

						/* Finds new value of x1   */
						object[k].plot [object[k].lines[j][0]] [0] = x1 + (x2-x1) * t;

						/* Finds new value of y1   */
						object[k].plot [object[k].lines[j][0]] [1] = y1 + (y2-y1) * t;

						/* z1=1                    */
						object[k].plot [object[k].lines[j][0]] [2] = zclip;
						}


					if (z1>=zclip && z2<zclip)
					{
						/* Line is leaving view volume, hence calculate new z		*/
						/* co-ordinate of p2 using the parametric description		*/
						/* of a line															*/

						x1 = object[k].plot [object[k].lines[j][0]] [0];
						y1 = object[k].plot [object[k].lines[j][0]] [1];
						x2 = object[k].plot [object[k].lines[j][1]] [0];
						y2 = object[k].plot [object[k].lines[j][1]] [1];
						dif = z2-z1;
						if(!dif) dif++;       // Prevent difference between z2 and z1 being 0
						t = (float) (zclip-z1) / (dif);	 	/* zclip=1						*/
																/* Finds value of t        */

						/* Finds new value of x2   */
						object[k].plot [object[k].lines[j][1]] [0] = x1 + (x2-x1) * t;

						/* Finds new value of y2   */
						object[k].plot [object[k].lines[j][1]] [1] = y1 + (y2-y1) * t;

						/* z2=1                    */
						object[k].plot [object[k].lines[j][1]] [2] = zclip;
						}
					}
				  

				for( j=0; j < object[k].no_of_points; j++ )
					{

					/*** Add perspective ***/                   

					dif = (object[k].plot[j][2]);
					if(!dif) dif++;           // removes chance of divide by zero

					object[k].plot[j][0] = ((long)
			(object[k].plot[j][0]*220) / dif<<1) // (object[k].plot[j][2]<<1)  // 216
				+ 320;

					object[k].plot[j][1] = ((long)
			(object[k].plot[j][1]*120) / dif) // object[k].plot[j][2])     //120
				+ 175;
					}
				setcolor(object[k].colour);
				for( j=0; j < object[k].no_of_lines; j++ )
					{

					if(
						(object[k].plot [object[k].lines[j][0]] [0] < LEFTCLIP && object[k].plot [object[k].lines[j][1]] [0] < LEFTCLIP) ||
						(object[k].plot [object[k].lines[j][0]] [0] > RIGHTCLIP && object[k].plot [object[k].lines[j][1]] [0] > RIGHTCLIP) ||
						(object[k].plot [object[k].lines[j][0]] [1] < TOPCLIP && object[k].plot [object[k].lines[j][1]] [1] < TOPCLIP) ||
						(object[k].plot [object[k].lines[j][0]] [1] > BOTTOMCLIP && object[k].plot [object[k].lines[j][1]] [1] > BOTTOMCLIP)
						 ) line_clip[j] = 1;
					if (!line_clip[j])
						{
						line(
						object[k].plot [object[k].lines[j][0]] [0],
						object[k].plot [object[k].lines[j][0]] [1],
						object[k].plot [object[k].lines[j][1]] [0],
						object[k].plot [object[k].lines[j][1]] [1]);
						}
					}

				}
			}
		setcolor(LIGHTGREEN);
		line(320,100,320,150);
		line(320,200,320,250);
		moveto(290,155);
		lineto(290,150);
		lineto(350,150);
		lineto(350,155);
		moveto(290,195);
		lineto(290,200);
		lineto(350,200);
		lineto(350,195);
		line(30,175,30,175 - speed);
		sprintf(zstr,"%d",i);
		outtextxy(300,3,zstr);
		sprintf(zstr,"%ld",viewer_x);						//  Long to a string !!
		outtextxy(300,10,zstr);
		sprintf(zstr,"%ld",viewer_z);
		outtextxy(300,17,zstr);
		tm = 0;
/***********************************************************/
		qtim=time(NULL);
		if(qtim!=oldq)
		{
			frmsec = frame;
			frame=0;
		}
		oldq=qtim;
		sprintf(zstr,"%d",totfrm);
		outtextxy(5,10,"Total frames      = ");              // frm / sec
		outtextxy(165,10,zstr);                                 // routine
	
		sprintf(zstr,"%d",qtim);
		outtextxy(5,30,"Real time counter = ");   // Int to a string !!
		outtextxy(165,30,zstr);
	
		sprintf(zstr,"%d",frmsec);
		outtextxy(5,50,"Frames per second = ");
		outtextxy(165,50,zstr);
/***********************************************************/
/*
		ltoa(viewer_x,zstr,10);						//  Long to a string !!
		outtextxy(300,10,zstr);
*/
		setvisualpage(page);
		refresh();

	} while (!exit_flag);

	closegraph();
	exit(0);
}

void updateMovement(void)
{
	freezemove = move;                     // snapshot current input state
	freezerotate = rotate;

	if (speed >= -100 && speed <= 100)
	{
		if (freezemove == 1) speed += 5;
		if (freezemove == -1) speed -= 5;
	}
	else if (speed < -100)
	{
		speed = -100;
	}
	else
	{
		speed = 100;
	}

	if (freezerotate == 1)
	{
		if (speed < 0)
		{
			ti--;
			tsin_y--;
			tcos_y--;
		}
		else
		{
			ti++;
			tsin_y++;
			tcos_y++;
		}
	}
	if (freezerotate == -1)
	{
		if (speed < 0)
		{
			ti++;
			tsin_y++;
			tcos_y++;
		}
		else
		{
			ti--;
			tsin_y--;
			tcos_y--;
		}
	}

	if (ti == 256)
	{
		ti = 0;
		tsin_y = trig;
		tcos_y = tsin_y + 64;
	}
	if (ti == -1)
	{
		ti = 255;
		tsin_y = trig + 255;
		tcos_y = tsin_y + 64;
	}

	viewer_x += (speed * *sin_y) >> 9;
	viewer_z += (speed * *cos_y) >> 9;

	doo = !doo;
	if (doo)
	{
		if (speed > 0 && freezemove == 0) speed -= 1;
		if (speed < 0 && freezemove == 0) speed += 1;
	}
}

