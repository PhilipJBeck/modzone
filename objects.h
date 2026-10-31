/***************************************************************
**								   										     **
**	Y def is inverse so -300 is 300 above belly button level **
**                 +300 is on the ground			              **
**							   									           **
***************************************************************/

/******************************************************
**                                                    **
**                      OBJECT 1                      **
**                                                    **
*******************************************************/
 

  object[0].colour = BROWN;
  object[0].no_of_points = 4;
  object[0].no_of_lines = 2;
  object[0].x_position = -3000;
  object[0].z_position = 200;
  object[0].visible = TRUE;

  object[0].points[0][0] = -3000 + object[0].x_position;
  object[0].points[0][1] =  300;
  object[0].points[0][2] =  0     + object[0].z_position;

  object[0].points[1][0] =  0     + object[0].x_position;
  object[0].points[1][1] = -7300;
  object[0].points[1][2] =  0     + object[0].z_position;
  object[0].points[2][0] =  0     + object[0].x_position;
  object[0].points[2][1] = -7300;
  object[0].points[2][2] =  0     + object[0].z_position;

  object[0].points[3][0] =  3000 + object[0].x_position;
  object[0].points[3][1] =  300;
  object[0].points[3][2] =  0     + object[0].z_position;

  object[0].lines[0][0] = 0;     // Line A
  object[0].lines[0][1] = 1;
  object[0].lines[1][0] = 2;     // Line B
  object[0].lines[1][1] = 3;

/******************************************************
**                                                    **
**                      OBJECT 2                      **
**                                                    **
*******************************************************/

  object[1].colour = WHITE;
  object[1].no_of_points = 16;
  object[1].no_of_lines = 8;
  object[1].x_position = 2500;
  object[1].z_position = -3250;
  object[1].visible = TRUE;

  /************* Top of pyramid : 4 dots to 4 lines ************/
  object[1].points[0][0] =   0 + object[1].x_position;
  object[1].points[0][1] = -1000;
  object[1].points[0][2] =   0 + object[1].z_position;
  object[1].points[1][0] =   0 + object[1].x_position;
  object[1].points[1][1] = -1000;
  object[1].points[1][2] =   0 + object[1].z_position;
  object[1].points[2][0] =   0 + object[1].x_position;
  object[1].points[2][1] = -1000;
  object[1].points[2][2] =   0 + object[1].z_position;
  object[1].points[3][0] =   0 + object[1].x_position;
  object[1].points[3][1] = -1000;
  object[1].points[3][2] =   0 + object[1].z_position;

  /************* Left Forward of pyramid : 3 dots to 3 lines ************/
  object[1].points[4][0] = -300 + object[1].x_position;
  object[1].points[4][1] =  300;
  object[1].points[4][2] =  300 + object[1].z_position;
  object[1].points[5][0] = -300 + object[1].x_position;
  object[1].points[5][1] =  300;
  object[1].points[5][2] =  300 + object[1].z_position;
  object[1].points[6][0] = -300 + object[1].x_position;
  object[1].points[6][1] =  300;
  object[1].points[6][2] =  300 + object[1].z_position;

  /************* Right Forward of pyramid : 3 dots to 3 lines ************/
  object[1].points[7][0] =  300 + object[1].x_position;
  object[1].points[7][1] =  300;
  object[1].points[7][2] =  300 + object[1].z_position;
  object[1].points[8][0] =  300 + object[1].x_position;
  object[1].points[8][1] =  300;
  object[1].points[8][2] =  300 + object[1].z_position;
  object[1].points[9][0] =  300 + object[1].x_position;
  object[1].points[9][1] =  300;
  object[1].points[9][2] =  300 + object[1].z_position;

  /************* Right Backward of pyramid : 3 dots to 3 lines ************/
  object[1].points[10][0] =  300 + object[1].x_position;
  object[1].points[10][1] =  300;
  object[1].points[10][2] = -300 + object[1].z_position;
  object[1].points[11][0] =  300 + object[1].x_position;
  object[1].points[11][1] =  300;
  object[1].points[11][2] = -300 + object[1].z_position;
  object[1].points[12][0] =  300 + object[1].x_position;
  object[1].points[12][1] =  300;
  object[1].points[12][2] = -300 + object[1].z_position;

  /************* Left Backward of pyramid : 3 dots to 3 lines ************/
  object[1].points[13][0] = -300 + object[1].x_position;
  object[1].points[13][1] =  300;
  object[1].points[13][2] = -300 + object[1].z_position;
  object[1].points[14][0] = -300 + object[1].x_position;
  object[1].points[14][1] =  300;
  object[1].points[14][2] = -300+ object[1].z_position;
  object[1].points[15][0] = -300 + object[1].x_position;
  object[1].points[15][1] =  300;
  object[1].points[15][2] = -300 + object[1].z_position;

  object[1].lines[0][0] = 0;     // Line A
  object[1].lines[0][1] = 4;
  object[1].lines[1][0] = 1;     // Line B
  object[1].lines[1][1] = 7;
  object[1].lines[2][0] = 2;		// Line C
  object[1].lines[2][1] = 10;
  object[1].lines[3][0] = 3;		// Line D
  object[1].lines[3][1] = 13;
  object[1].lines[4][0] = 5;		// Line E
  object[1].lines[4][1] = 8;
  object[1].lines[5][0] = 9;		// Line F
  object[1].lines[5][1] = 11;
  object[1].lines[6][0] = 12;		// Line G
  object[1].lines[6][1] = 14;
  object[1].lines[7][0] = 15;     // Line H
  object[1].lines[7][1] = 6;

/******************************************************
**                                                    **
**                      OBJECT 3                      **
**                                                    **
*******************************************************/

  object[2].colour = YELLOW;
  object[2].no_of_points = 24;
  object[2].no_of_lines = 12;
  object[2].x_position = -1340;
  object[2].z_position = 5000;
  object[2].visible = TRUE;

  /************* Top Back Left of cube ************/
  object[2].points[0][0] = -300 + object[2].x_position;
  object[2].points[0][1] = -300;
  object[2].points[0][2] = -300 + object[2].z_position;
  object[2].points[1][0] = -300 + object[2].x_position;
  object[2].points[1][1] = -300;
  object[2].points[1][2] = -300 + object[2].z_position;
  object[2].points[2][0] = -300 + object[2].x_position;
  object[2].points[2][1] = -300;
  object[2].points[2][2] = -300 + object[2].z_position;

  /************* Top Back Right of cube ************/
  object[2].points[3][0] =  300 + object[2].x_position;
  object[2].points[3][1] = -300;
  object[2].points[3][2] = -300 + object[2].z_position;
  object[2].points[4][0] =  300 + object[2].x_position;
  object[2].points[4][1] = -300;
  object[2].points[4][2] = -300 + object[2].z_position;
  object[2].points[5][0] =  300 + object[2].x_position;
  object[2].points[5][1] = -300;
  object[2].points[5][2] = -300 + object[2].z_position;

  /************* Bottom Back Right of cube ************/
  object[2].points[6][0] =  300 + object[2].x_position;
  object[2].points[6][1] =  300;
  object[2].points[6][2] = -300 + object[2].z_position;
  object[2].points[7][0] =  300 + object[2].x_position;
  object[2].points[7][1] =  300;
  object[2].points[7][2] = -300 + object[2].z_position;
  object[2].points[8][0] =  300 + object[2].x_position;
  object[2].points[8][1] =  300;
  object[2].points[8][2] = -300 + object[2].z_position;

  /************* Bottom Back Left of cube ************/
  object[2].points[9][0] = -300 + object[2].x_position;
  object[2].points[9][1] =  300;
  object[2].points[9][2] = -300 + object[2].z_position;
  object[2].points[10][0] = -300 + object[2].x_position;
  object[2].points[10][1] =  300;
  object[2].points[10][2] = -300 + object[2].z_position;
  object[2].points[11][0] = -300 + object[2].x_position;
  object[2].points[11][1] =  300;
  object[2].points[11][2] = -300 + object[2].z_position;

  /************* Top Forward Left of cube ************/
  object[2].points[12][0] = -300 + object[2].x_position;
  object[2].points[12][1] = -300;
  object[2].points[12][2] =  300 + object[2].z_position;
  object[2].points[13][0] = -300 + object[2].x_position;
  object[2].points[13][1] = -300;
  object[2].points[13][2] =  300 + object[2].z_position;
  object[2].points[14][0] = -300 + object[2].x_position;
  object[2].points[14][1] = -300;
  object[2].points[14][2] =  300 + object[2].z_position;

  /************* Top Forward Right of cube ************/
  object[2].points[15][0] =  300 + object[2].x_position;
  object[2].points[15][1] = -300;
  object[2].points[15][2] =  300 + object[2].z_position;
  object[2].points[16][0] =  300 + object[2].x_position;
  object[2].points[16][1] = -300;
  object[2].points[16][2] =  300 + object[2].z_position;
  object[2].points[17][0] =  300 + object[2].x_position;
  object[2].points[17][1] = -300;
  object[2].points[17][2] =  300 + object[2].z_position;

  /************* Bottom Forward Right of cube ************/
  object[2].points[18][0] =  300 + object[2].x_position;
  object[2].points[18][1] =  300;
  object[2].points[18][2] =  300 + object[2].z_position;
  object[2].points[19][0] =  300 + object[2].x_position;
  object[2].points[19][1] =  300;
  object[2].points[19][2] =  300 + object[2].z_position;
  object[2].points[20][0] =  300 + object[2].x_position;
  object[2].points[20][1] =  300;
  object[2].points[20][2] =  300 + object[2].z_position;

  /************* Bottom Forward Left of cube ************/
  object[2].points[21][0] = -300 + object[2].x_position;
  object[2].points[21][1] =  300;
  object[2].points[21][2] =  300 + object[2].z_position;
  object[2].points[22][0] = -300 + object[2].x_position;
  object[2].points[22][1] =  300;
  object[2].points[22][2] =  300 + object[2].z_position;
  object[2].points[23][0] = -300 + object[2].x_position;
  object[2].points[23][1] =  300;
  object[2].points[23][2] =  300 + object[2].z_position;

  object[2].lines[0][0] = 0;    // Line A
  object[2].lines[0][1] = 3;

  object[2].lines[1][0] = 4;    // Line B
  object[2].lines[1][1] = 6;

  object[2].lines[2][0] = 7;    // Line C
  object[2].lines[2][1] = 9;

  object[2].lines[3][0] = 1;    // Line D
  object[2].lines[3][1] = 10;

  object[2].lines[4][0] = 12;    // Line E
  object[2].lines[4][1] = 15;

  object[2].lines[5][0] = 16;    // Line F
  object[2].lines[5][1] = 18;

  object[2].lines[6][0] = 19;    // Line G
  object[2].lines[6][1] = 21;

  object[2].lines[7][0] = 22;    // Line H
  object[2].lines[7][1] = 13;

  object[2].lines[8][0] = 14;    // Line I
  object[2].lines[8][1] = 2;

  object[2].lines[9][0] = 17;    // Line J
  object[2].lines[9][1] = 5;

  object[2].lines[10][0] = 20;   // Line K
  object[2].lines[10][1] = 8;

  object[2].lines[11][0] = 23;   // Line L
  object[2].lines[11][1] = 11;


/******************************************************
**                                                    **
**                      OBJECT 4                      **
**                                                    **
*******************************************************/

  object[3].colour = LIGHTBLUE;
  object[3].no_of_points = 8;
  object[3].no_of_lines = 4;
  object[3].x_position = -1500;
  object[3].z_position = 4000;
  object[3].visible = TRUE;

  object[3].points[0][0] =   -500 + object[3].x_position;
  object[3].points[0][1] = 300;
  object[3].points[0][2] = -500 + object[3].z_position;
  object[3].points[1][0] = -500 + object[3].x_position;
  object[3].points[1][1] =  300;
  object[3].points[1][2] = 500 + object[3].z_position;
  object[3].points[2][0] = 500 + object[3].x_position;
  object[3].points[2][1] =  300;
  object[3].points[2][2] = 500 + object[3].z_position;
  object[3].points[3][0] = 500 + object[3].x_position;
  object[3].points[3][1] =  300;
  object[3].points[3][2] = -500 + object[3].z_position;
  object[3].points[4][0] =   -500 + object[3].x_position;
  object[3].points[4][1] = 300;
  object[3].points[4][2] = -500 + object[3].z_position;
  object[3].points[5][0] = -500 + object[3].x_position;
  object[3].points[5][1] =  300;
  object[3].points[5][2] = 500 + object[3].z_position;
  object[3].points[6][0] = 500 + object[3].x_position;
  object[3].points[6][1] =  300;
  object[3].points[6][2] = 500 + object[3].z_position;
  object[3].points[7][0] = 500 + object[3].x_position;
  object[3].points[7][1] =  300;
  object[3].points[7][2] = -500 + object[3].z_position;

  object[3].lines[0][0] = 0;
  object[3].lines[0][1] = 1;
  object[3].lines[1][0] = 5;
  object[3].lines[1][1] = 2;
  object[3].lines[2][0] = 6;
  object[3].lines[2][1] = 3;
  object[3].lines[3][0] = 7;
  object[3].lines[3][1] = 4;

/*   ALL OTHER OBJECTS ARE REMMED OFF    

	MAKE SURE 'NESTED  COMMENTS' IS ON : OPTIONS/COMPILER/SOURCE...*/
/******************************************************
**                                                    **
**                      OBJECT 5           P          **
**                                                    **
*******************************************************/

  object[4].colour = LIGHTMAGENTA;
  object[4].no_of_points = 5;
  object[4].no_of_lines = 4;
  object[4].x_position = 130;
  object[4].z_position = 200;
  object[4].visible = TRUE;

  object[4].points[0][0] = -2 + object[4].x_position;
  object[4].points[0][1] =  -1;
  object[4].points[0][2] =  0 + object[4].z_position;
  object[4].points[1][0] = -2 + object[4].x_position;
  object[4].points[1][1] = -10;
  object[4].points[1][2] =  0 + object[4].z_position;
  object[4].points[2][0] =  2 + object[4].x_position;
  object[4].points[2][1] = -10;
  object[4].points[2][2] =  0 + object[4].z_position;
  object[4].points[3][0] =  2 + object[4].x_position;
  object[4].points[3][1] = -6;
  object[4].points[3][2] =  0 + object[4].z_position;
  object[4].points[4][0] = -2 + object[4].x_position;
  object[4].points[4][1] = -6;
  object[4].points[4][2] =  0 + object[4].z_position;

  object[4].lines[0][0] = 0;
  object[4].lines[0][1] = 1;
  object[4].lines[1][0] = 1;
  object[4].lines[1][1] = 2;
  object[4].lines[2][0] = 2;
  object[4].lines[2][1] = 3;
  object[4].lines[3][0] = 3;
  object[4].lines[3][1] = 4;

/******************************************************
**                                                    **
**                      OBJECT 6           H          **
**                                                    **
*******************************************************/

  object[5].colour = LIGHTMAGENTA;
  object[5].no_of_points = 6;
  object[5].no_of_lines = 3;
  object[5].x_position = 137;
  object[5].z_position = 200;
  object[5].visible = TRUE;

  object[5].points[0][0] = -2 + object[5].x_position;
  object[5].points[0][1] =  -1;
  object[5].points[0][2] =  0 + object[5].z_position;
  object[5].points[1][0] = -2 + object[5].x_position;
  object[5].points[1][1] = -10;
  object[5].points[1][2] =  0 + object[5].z_position;
  object[5].points[2][0] =  2 + object[5].x_position;
  object[5].points[2][1] = -10;
  object[5].points[2][2] =  0 + object[5].z_position;
  object[5].points[3][0] =  2 + object[5].x_position;
  object[5].points[3][1] =  -1;
  object[5].points[3][2] =  0 + object[5].z_position;
  object[5].points[4][0] =  2 + object[5].x_position;
  object[5].points[4][1] = -6;
  object[5].points[4][2] =  0 + object[5].z_position;
  object[5].points[5][0] = -2 + object[5].x_position;
  object[5].points[5][1] = -6;
  object[5].points[5][2] =  0 + object[5].z_position;
	

  object[5].lines[0][0] = 0;
  object[5].lines[0][1] = 1;
  object[5].lines[1][0] = 2;
  object[5].lines[1][1] = 3;
  object[5].lines[2][0] = 4;
  object[5].lines[2][1] = 5;
			
/******************************************************
**                                                    **
**                      OBJECT 7           I          **
**                                                    **
*******************************************************/

  object[6].colour = LIGHTMAGENTA;
  object[6].no_of_points = 6;
  object[6].no_of_lines = 3;
  object[6].x_position = 144;
  object[6].z_position = 200;
  object[6].visible = TRUE;

  object[6].points[0][0] = -2 + object[6].x_position;
  object[6].points[0][1] =  -1;
  object[6].points[0][2] =  0 + object[6].z_position;
  object[6].points[1][0] = -2 + object[6].x_position;
  object[6].points[1][1] = -10;
  object[6].points[1][2] =  0 + object[6].z_position;
  object[6].points[2][0] =  2 + object[6].x_position;
  object[6].points[2][1] = -10;
  object[6].points[2][2] =  0 + object[6].z_position;
  object[6].points[3][0] =  2 + object[6].x_position;
  object[6].points[3][1] =  -1;
  object[6].points[3][2] =  0 + object[6].z_position;
  object[6].points[4][0] =  0 + object[6].x_position;
  object[6].points[4][1] =  -1;
  object[6].points[4][2] =  0 + object[6].z_position;
  object[6].points[5][0] =  0 + object[6].x_position;
  object[6].points[5][1] = -10;
  object[6].points[5][2] =  0 + object[6].z_position;
			
  object[6].lines[0][0] = 0;
  object[6].lines[0][1] = 3;
  object[6].lines[1][0] = 1;
  object[6].lines[1][1] = 2;
  object[6].lines[2][0] = 4;
  object[6].lines[2][1] = 5;

/******************************************************
**                                                    **
**                      OBJECT 8           L          **
**                                                    **
*******************************************************/

  object[7].colour = LIGHTMAGENTA;
  object[7].no_of_points = 3;
  object[7].no_of_lines = 2;
  object[7].x_position = 151;
  object[7].z_position = 200;
  object[7].visible = TRUE;

  object[7].points[0][0] = -2 + object[7].x_position;
  object[7].points[0][1] = -10;
  object[7].points[0][2] =  0 + object[7].z_position;
  object[7].points[1][0] = -2 + object[7].x_position;
  object[7].points[1][1] =  -1;
  object[7].points[1][2] =  0 + object[7].z_position;
  object[7].points[2][0] =  2 + object[7].x_position;
  object[7].points[2][1] =  -1;
  object[7].points[2][2] =  0 + object[7].z_position;
			

  object[7].lines[0][0] = 0;
  object[7].lines[0][1] = 1;
  object[7].lines[1][0] = 1;
  object[7].lines[1][1] = 2;

/******************************************************
**                                                    **
**                      OBJECT 9                      **
**                                                    **
*******************************************************/
 

  object[8].colour = WHITE;
  object[8].no_of_points = 16;
  object[8].no_of_lines = 8;
  object[8].x_position = -3000;
  object[8].z_position = 250;
  object[8].visible = TRUE;

  /************* Top of pyramid : 4 dots to 4 lines ************/
  object[8].points[0][0] =   0 + object[8].x_position;
  object[8].points[0][1] = -800;
  object[8].points[0][2] =   0 + object[8].z_position;
  object[8].points[1][0] =   0 + object[8].x_position;
  object[8].points[1][1] = -800;
  object[8].points[1][2] =   0 + object[8].z_position;
  object[8].points[2][0] =   0 + object[8].x_position;
  object[8].points[2][1] = -800;
  object[8].points[2][2] =   0 + object[8].z_position;
  object[8].points[3][0] =   0 + object[8].x_position;
  object[8].points[3][1] = -800;
  object[8].points[3][2] =   0 + object[8].z_position;

  /************* Left Forward of pyramid : 3 dots to 3 lines ************/
  object[8].points[4][0] = -300 + object[8].x_position;
  object[8].points[4][1] =  300;
  object[8].points[4][2] =  300 + object[8].z_position;
  object[8].points[5][0] = -300 + object[8].x_position;
  object[8].points[5][1] =  300;
  object[8].points[5][2] =  300 + object[8].z_position;
  object[8].points[6][0] = -300 + object[8].x_position;
  object[8].points[6][1] =  300;
  object[8].points[6][2] =  300 + object[8].z_position;

  /************* Right Forward of pyramid : 3 dots to 3 lines ************/
  object[8].points[7][0] =  300 + object[8].x_position;
  object[8].points[7][1] =  300;
  object[8].points[7][2] =  300 + object[8].z_position;
  object[8].points[8][0] =  300 + object[8].x_position;
  object[8].points[8][1] =  300;
  object[8].points[8][2] =  300 + object[8].z_position;
  object[8].points[9][0] =  300 + object[8].x_position;
  object[8].points[9][1] =  300;
  object[8].points[9][2] =  300 + object[8].z_position;

  /************* Right Backward of pyramid : 3 dots to 3 lines ************/
  object[8].points[10][0] =  300 + object[8].x_position;
  object[8].points[10][1] =  300;
  object[8].points[10][2] = -300 + object[8].z_position;
  object[8].points[11][0] =  300 + object[8].x_position;
  object[8].points[11][1] =  300;
  object[8].points[11][2] = -300 + object[8].z_position;
  object[8].points[12][0] =  300 + object[8].x_position;
  object[8].points[12][1] =  300;
  object[8].points[12][2] = -300 + object[8].z_position;

  /************* Left Backward of pyramid : 3 dots to 3 lines ************/
  object[8].points[13][0] = -300 + object[8].x_position;
  object[8].points[13][1] =  300;
  object[8].points[13][2] = -300 + object[8].z_position;
  object[8].points[14][0] = -300 + object[8].x_position;
  object[8].points[14][1] =  300;
  object[8].points[14][2] = -300 + object[8].z_position;
  object[8].points[15][0] = -300 + object[8].x_position;
  object[8].points[15][1] =  300;
  object[8].points[15][2] = -300 + object[8].z_position;

  object[8].lines[0][0] = 0;     // Line A
  object[8].lines[0][1] = 4;
  object[8].lines[1][0] = 1;     // Line B
  object[8].lines[1][1] = 7;
  object[8].lines[2][0] = 2;		// Line C
  object[8].lines[2][1] = 10;
  object[8].lines[3][0] = 3;		// Line D
  object[8].lines[3][1] = 13;
  object[8].lines[4][0] = 5;		// Line E
  object[8].lines[4][1] = 8;
  object[8].lines[5][0] = 9;		// Line F
  object[8].lines[5][1] = 11;
  object[8].lines[6][0] = 12;		// Line G
  object[8].lines[6][1] = 14;
  object[8].lines[7][0] = 15;    // Line H
  object[8].lines[7][1] = 6;

/******************************************************
**                                                    **
**                      OBJECT 10                     **
**                                                    **
*******************************************************/
  object[9].colour = WHITE;
  object[9].no_of_points = 24;
  object[9].no_of_lines = 12;
  object[9].x_position = -154;
  object[9].z_position = 200;
  object[9].visible = TRUE;

  /************* Top Back Left of cube ************/
  object[9].points[0][0] = -300 + object[9].x_position;
  object[9].points[0][1] = -300;
  object[9].points[0][2] = -300 + object[9].z_position;
  object[9].points[1][0] = -300 + object[9].x_position;
  object[9].points[1][1] = -300;
  object[9].points[1][2] = -300 + object[9].z_position;
  object[9].points[2][0] = -300 + object[9].x_position;
  object[9].points[2][1] = -300;
  object[9].points[2][2] = -300 + object[9].z_position;

  /************* Top Back Right of cube ************/
  object[9].points[3][0] =  300 + object[9].x_position;
  object[9].points[3][1] = -300;
  object[9].points[3][2] = -300 + object[9].z_position;
  object[9].points[4][0] =  300 + object[9].x_position;
  object[9].points[4][1] = -300;
  object[9].points[4][2] = -300 + object[9].z_position;
  object[9].points[5][0] =  300 + object[9].x_position;
  object[9].points[5][1] = -300;
  object[9].points[5][2] = -300 + object[9].z_position;

  /************* Bottom Back Right of cube ************/
  object[9].points[6][0] =  300 + object[9].x_position;
  object[9].points[6][1] =  300;
  object[9].points[6][2] = -300 + object[9].z_position;
  object[9].points[7][0] =  300 + object[9].x_position;
  object[9].points[7][1] =  300;
  object[9].points[7][2] = -300 + object[9].z_position;
  object[9].points[8][0] =  300 + object[9].x_position;
  object[9].points[8][1] =  300;
  object[9].points[8][2] = -300 + object[9].z_position;

  /************* Bottom Back Left of cube ************/
  object[9].points[9][0] = -300 + object[9].x_position;
  object[9].points[9][1] =  300;
  object[9].points[9][2] = -300 + object[9].z_position;
  object[9].points[10][0] = -300 + object[9].x_position;
  object[9].points[10][1] =  300;
  object[9].points[10][2] = -300 + object[9].z_position;
  object[9].points[11][0] = -300 + object[9].x_position;
  object[9].points[11][1] =  300;
  object[9].points[11][2] = -300 + object[9].z_position;

  /************* Top Forward Left of cube ************/
  object[9].points[12][0] = -300 + object[9].x_position;
  object[9].points[12][1] = -300;
  object[9].points[12][2] =  300 + object[9].z_position;
  object[9].points[13][0] = -300 + object[9].x_position;
  object[9].points[13][1] = -300;
  object[9].points[13][2] =  300 + object[9].z_position;
  object[9].points[14][0] = -300 + object[9].x_position;
  object[9].points[14][1] = -300;
  object[9].points[14][2] =  300 + object[9].z_position;

  /************* Top Forward Right of cube ************/
  object[9].points[15][0] =  300 + object[9].x_position;
  object[9].points[15][1] = -300;
  object[9].points[15][2] =  300 + object[9].z_position;
  object[9].points[16][0] =  300 + object[9].x_position;
  object[9].points[16][1] = -300;
  object[9].points[16][2] =  300 + object[9].z_position;
  object[9].points[17][0] =  300 + object[9].x_position;
  object[9].points[17][1] = -300;
  object[9].points[17][2] =  300 + object[9].z_position;

  /************* Bottom Forward Right of cube ************/
  object[9].points[18][0] =  300 + object[9].x_position;
  object[9].points[18][1] =  300;
  object[9].points[18][2] =  300 + object[9].z_position;
  object[9].points[19][0] =  300 + object[9].x_position;
  object[9].points[19][1] =  300;
  object[9].points[19][2] =  300 + object[9].z_position;
  object[9].points[20][0] =  300 + object[9].x_position;
  object[9].points[20][1] =  300;
  object[9].points[20][2] =  300 + object[9].z_position;

  /************* Bottom Forward Left of cube ************/
  object[9].points[21][0] = -300 + object[9].x_position;
  object[9].points[21][1] =  300;
  object[9].points[21][2] =  300 + object[9].z_position;
  object[9].points[22][0] = -300 + object[9].x_position;
  object[9].points[22][1] =  300;
  object[9].points[22][2] =  300 + object[9].z_position;
  object[9].points[23][0] = -300 + object[9].x_position;
  object[9].points[23][1] =  300;
  object[9].points[23][2] =  300 + object[9].z_position;

  object[9].lines[0][0] = 0;    // Line A
  object[9].lines[0][1] = 3;

  object[9].lines[1][0] = 4;    // Line B
  object[9].lines[1][1] = 6;

  object[9].lines[2][0] = 7;    // Line C
  object[9].lines[2][1] = 9;

  object[9].lines[3][0] = 1;    // Line D
  object[9].lines[3][1] = 10;

  object[9].lines[4][0] = 12;    // Line E
  object[9].lines[4][1] = 15;

  object[9].lines[5][0] = 16;    // Line F
  object[9].lines[5][1] = 18;

  object[9].lines[6][0] = 19;    // Line G
  object[9].lines[6][1] = 21;

  object[9].lines[7][0] = 22;    // Line H
  object[9].lines[7][1] = 13;

  object[9].lines[8][0] = 14;    // Line I
  object[9].lines[8][1] = 2;

  object[9].lines[9][0] = 17;    // Line J
  object[9].lines[9][1] = 5;

  object[9].lines[10][0] = 20;   // Line K
  object[9].lines[10][1] = 8;

  object[9].lines[11][0] = 23;   // Line L
  object[9].lines[11][1] = 11;

/******************************************************
**                                                    **
**                      OBJECT 11                     **
**                                                    **
*******************************************************/
  object[10].colour = GREEN;
  object[10].no_of_points = 56;
  object[10].no_of_lines = 28;
  object[10].x_position = -6154;
  object[10].z_position = 4200;
  object[10].visible = TRUE;

  /************* Point A ************/
  object[10].points[0][0] = -235 + object[10].x_position;
  object[10].points[0][1] =  300;
  object[10].points[0][2] = -135 + object[10].z_position;
  object[10].points[1][0] = -235 + object[10].x_position;
  object[10].points[1][1] =  300;
  object[10].points[1][2] = -135 + object[10].z_position;
  object[10].points[2][0] = -235 + object[10].x_position;
  object[10].points[2][1] =  300;
  object[10].points[2][2] = -135 + object[10].z_position;

  /************* Point B ************/
  object[10].points[3][0] = -235 + object[10].x_position;
  object[10].points[3][1] =  300;
  object[10].points[3][2] =  135 + object[10].z_position;
  object[10].points[4][0] = -235 + object[10].x_position;
  object[10].points[4][1] =  300;
  object[10].points[4][2] =  135 + object[10].z_position;
  object[10].points[5][0] = -235 + object[10].x_position;
  object[10].points[5][1] =  300;
  object[10].points[5][2] =  135 + object[10].z_position;

  /************* Point C ************/
  object[10].points[6][0] =  235 + object[10].x_position;
  object[10].points[6][1] =  300;
  object[10].points[6][2] =  135 + object[10].z_position;
  object[10].points[7][0] =  235 + object[10].x_position;
  object[10].points[7][1] =  300;
  object[10].points[7][2] =  135 + object[10].z_position;
  object[10].points[8][0] =  235 + object[10].x_position;
  object[10].points[8][1] =  300;
  object[10].points[8][2] =  135 + object[10].z_position;

  /************* Point D ************/
  object[10].points[9][0] =  235 + object[10].x_position;
  object[10].points[9][1] =  300;
  object[10].points[9][2] = -135 + object[10].z_position;
  object[10].points[10][0] =  235 + object[10].x_position;
  object[10].points[10][1] =  300;
  object[10].points[10][2] = -135 + object[10].z_position;
  object[10].points[11][0] =  235 + object[10].x_position;
  object[10].points[11][1] =  300;
  object[10].points[11][2] = -135 + object[10].z_position;

  /************* Point E ************/
  object[10].points[12][0] = -250 + object[10].x_position;
  object[10].points[12][1] =  250;
  object[10].points[12][2] = -150 + object[10].z_position;
  object[10].points[13][0] = -250 + object[10].x_position;
  object[10].points[13][1] =  250;
  object[10].points[13][2] = -150 + object[10].z_position;
  object[10].points[14][0] = -250 + object[10].x_position;
  object[10].points[14][1] =  250;
  object[10].points[14][2] = -150 + object[10].z_position;
  object[10].points[15][0] = -250 + object[10].x_position;
  object[10].points[15][1] =  250;
  object[10].points[15][2] = -150 + object[10].z_position;

  /************* Point F ************/
  object[10].points[16][0] = -250 + object[10].x_position;
  object[10].points[16][1] =  250;
  object[10].points[16][2] =  150 + object[10].z_position;
  object[10].points[17][0] = -250 + object[10].x_position;
  object[10].points[17][1] =  250;
  object[10].points[17][2] =  150 + object[10].z_position;
  object[10].points[18][0] = -250 + object[10].x_position;
  object[10].points[18][1] =  250;
  object[10].points[18][2] =  150 + object[10].z_position;
  object[10].points[19][0] = -250 + object[10].x_position;
  object[10].points[19][1] =  250;
  object[10].points[19][2] =  150 + object[10].z_position;

  /************* Point G ************/
  object[10].points[20][0] =  250 + object[10].x_position;
  object[10].points[20][1] =  250;
  object[10].points[20][2] =  150 + object[10].z_position;
  object[10].points[21][0] =  250 + object[10].x_position;
  object[10].points[21][1] =  250;
  object[10].points[21][2] =  150 + object[10].z_position;
  object[10].points[22][0] =  250 + object[10].x_position;
  object[10].points[22][1] =  250;
  object[10].points[22][2] =  150 + object[10].z_position;
  object[10].points[23][0] =  250 + object[10].x_position;
  object[10].points[23][1] =  250;
  object[10].points[23][2] =  150 + object[10].z_position;

  /************* Point H ************/
  object[10].points[24][0] =  250 + object[10].x_position;
  object[10].points[24][1] =  250;
  object[10].points[24][2] = -150 + object[10].z_position;
  object[10].points[25][0] =  250 + object[10].x_position;
  object[10].points[25][1] =  250;
  object[10].points[25][2] = -150 + object[10].z_position;
  object[10].points[26][0] =  250 + object[10].x_position;
  object[10].points[26][1] =  250;
  object[10].points[26][2] = -150 + object[10].z_position;
  object[10].points[27][0] =  250 + object[10].x_position;
  object[10].points[27][1] =  250;
  object[10].points[27][2] = -150 + object[10].z_position;

  /************* Point I ************/
  object[10].points[28][0] =  0    + object[10].x_position;
  object[10].points[28][1] =  -100;
  object[10].points[28][2] = -135 + object[10].z_position;
  object[10].points[29][0] =  0    + object[10].x_position;
  object[10].points[29][1] =  -100;
  object[10].points[29][2] = -135 + object[10].z_position;
  object[10].points[30][0] =  0    + object[10].x_position;
  object[10].points[30][1] =  -100;
  object[10].points[30][2] = -135 + object[10].z_position;

  /************* Point J ************/
  object[10].points[31][0] =  0    + object[10].x_position;
  object[10].points[31][1] =  -100;
  object[10].points[31][2] =  135 + object[10].z_position;
  object[10].points[32][0] =  0    + object[10].x_position;
  object[10].points[32][1] =  -100;
  object[10].points[32][2] =  135 + object[10].z_position;
  object[10].points[33][0] =   0   + object[10].x_position;
  object[10].points[33][1] =  -100;
  object[10].points[33][2] =  135 + object[10].z_position;

  /************* Point K ************/
  object[10].points[34][0] =  235 + object[10].x_position;
  object[10].points[34][1] =  -100;
  object[10].points[34][2] =  135 + object[10].z_position;
  object[10].points[35][0] =  235 + object[10].x_position;
  object[10].points[35][1] =  -100;
  object[10].points[35][2] =  135 + object[10].z_position;
  object[10].points[36][0] =  235 + object[10].x_position;
  object[10].points[36][1] =  -100;
  object[10].points[36][2] =  135 + object[10].z_position;

  /************* Point L ************/
  object[10].points[37][0] =  235 + object[10].x_position;
  object[10].points[37][1] =  -100;
  object[10].points[37][2] = -135 + object[10].z_position;
  object[10].points[38][0] =  235 + object[10].x_position;
  object[10].points[38][1] =  -100;
  object[10].points[38][2] = -135 + object[10].z_position;
  object[10].points[39][0] =  235 + object[10].x_position;
  object[10].points[39][1] =  -100;
  object[10].points[39][2] = -135 + object[10].z_position;

  /************* Point M ************/
  object[10].points[40][0] = -80 + object[10].x_position;
  object[10].points[40][1] =  10;
  object[10].points[40][2] = -25 + object[10].z_position;

  /************* Point N ************/
  object[10].points[41][0] = -240 + object[10].x_position;
  object[10].points[41][1] =  10;
  object[10].points[41][2] = -25 + object[10].z_position;
  object[10].points[42][0] = -240 + object[10].x_position;
  object[10].points[42][1] =  10;
  object[10].points[42][2] = -25 + object[10].z_position;
  object[10].points[43][0] = -240 + object[10].x_position;
  object[10].points[43][1] =  10;
  object[10].points[43][2] = -25 + object[10].z_position;

  /************* Point O ************/
  object[10].points[44][0] = -240 + object[10].x_position;
  object[10].points[44][1] =  10;
  object[10].points[44][2] =  25 + object[10].z_position;
  object[10].points[45][0] = -240 + object[10].x_position;
  object[10].points[45][1] =  10;
  object[10].points[45][2] =  25 + object[10].z_position;
  object[10].points[46][0] = -240 + object[10].x_position;
  object[10].points[46][1] =  10;
  object[10].points[46][2] =  25 + object[10].z_position;

  /************* Point P ************/
  object[10].points[47][0] = -80 + object[10].x_position;
  object[10].points[47][1] =  10;
  object[10].points[47][2] =  25 + object[10].z_position;

  /************* Point Q ************/
  object[10].points[48][0] = -45 + object[10].x_position;
  object[10].points[48][1] =  -50;
  object[10].points[48][2] =  -25 + object[10].z_position;

  /************* Point R ************/
  object[10].points[49][0] = -240 + object[10].x_position;
  object[10].points[49][1] =  -50;
  object[10].points[49][2] =  -25 + object[10].z_position;
  object[10].points[50][0] = -240 + object[10].x_position;
  object[10].points[50][1] =  -50;
  object[10].points[50][2] =  -25 + object[10].z_position;
  object[10].points[51][0] = -240 + object[10].x_position;
  object[10].points[51][1] =  -50;
  object[10].points[51][2] =  -25 + object[10].z_position;

  /************* Point S ************/
  object[10].points[52][0] = -240 + object[10].x_position;
  object[10].points[52][1] =  -50;
  object[10].points[52][2] =  25 + object[10].z_position;
  object[10].points[53][0] = -240 + object[10].x_position;
  object[10].points[53][1] =  -50;
  object[10].points[53][2] =  25 + object[10].z_position;
  object[10].points[54][0] = -240 + object[10].x_position;
  object[10].points[54][1] =  -50;
  object[10].points[54][2] =  25 + object[10].z_position;

  /************* Point T ************/
  object[10].points[55][0] =  -45 + object[10].x_position;
  object[10].points[55][1] =  -50;
  object[10].points[55][2] =  25 + object[10].z_position;



  object[10].lines[0][0] = 0;    // Line A
  object[10].lines[0][1] = 3;

  object[10].lines[1][0] = 4;    // Line B
  object[10].lines[1][1] = 6;

  object[10].lines[2][0] = 7;    // Line C
  object[10].lines[2][1] = 9;

  object[10].lines[3][0] = 10;    // Line D
  object[10].lines[3][1] = 1;

  object[10].lines[4][0] = 12;    // Line E
  object[10].lines[4][1] = 16;

  object[10].lines[5][0] = 17;   // Line F
  object[10].lines[5][1] = 20;

  object[10].lines[6][0] = 21;    // Line G
  object[10].lines[6][1] = 24;

  object[10].lines[7][0] = 25;    // Line H
  object[10].lines[7][1] = 13;

  object[10].lines[8][0] = 28;    // Line I
  object[10].lines[8][1] = 31;

  object[10].lines[9][0] = 32;    // Line J
  object[10].lines[9][1] = 34;

  object[10].lines[10][0] = 35;   // Line K
  object[10].lines[10][1] = 37;

  object[10].lines[11][0] = 38;   // Line L
  object[10].lines[11][1] = 29;
													 ////////////////////////

  object[10].lines[12][0] = 2;    // Line M
  object[10].lines[12][1] = 14;             //      VERTICAL  LINES
															 //  MAKING
  object[10].lines[13][0] = 5;    // Line N     //      SKIRTING
  object[10].lines[13][1] = 18;

  object[10].lines[14][0] = 8;    // Line O
  object[10].lines[14][1] = 22;

  object[10].lines[15][0] = 11;    // Line P
  object[10].lines[15][1] = 26;
													///////////////////////////
  object[10].lines[16][0] = 15;    // Line Q
  object[10].lines[16][1] = 30;
																  // VERTICAL LINES
  object[10].lines[17][0] = 19;    // Line R        //  MAKING TURRET
  object[10].lines[17][1] = 33;

  object[10].lines[18][0] = 23;    // Line S
  object[10].lines[18][1] = 36;

  object[10].lines[19][0] = 27;    // Line T
  object[10].lines[19][1] = 39;
														////////////////////////
  object[10].lines[20][0] = 40;    // Line U
  object[10].lines[20][1] = 41;

  object[10].lines[21][0] = 42;    // Line V
  object[10].lines[21][1] = 44;

  object[10].lines[22][0] = 45;    // Line W
  object[10].lines[22][1] = 47;

  object[10].lines[23][0] = 48;    // Line X
  object[10].lines[23][1] = 49;

  object[10].lines[24][0] = 50;    // Line Y
  object[10].lines[24][1] = 52;

  object[10].lines[25][0] = 53;    // Line Z
  object[10].lines[25][1] = 55;

  object[10].lines[26][0] = 43;    // Line AA
  object[10].lines[26][1] = 51;

  object[10].lines[27][0] = 46;    // Line AB
  object[10].lines[27][1] = 54;
