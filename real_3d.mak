.AUTODEPEND

#		*Translator Definitions*
CC = tcc +\BATLZONE\REAL_3D.CFG
TASM = TASM
TLINK = tlink


#		*Implicit Rules*
.c.obj:
  $(CC) -c {$< }

.cpp.obj:
  $(CC) -c {$< }

.asm.obj:
  $(TASM) {$< }


#		*List Macros*


EXE_dependencies =  \
  ..\bgi\egavga.obj \
  newgame.obj

#		*Explicit Rules*
real_3d.exe: \batlzone\real_3d.cfg $(EXE_dependencies)
  $(TLINK) /v/x/c @&&|
c:\tc\lib\c0m.obj+
..\bgi\egavga.obj+
newgame.obj
real_3d,
c:\tc\lib\graphics.lib+
c:\tc\lib\emu.lib+
c:\tc\lib\mathm.lib+
c:\tc\lib\cm.lib
|


#		*Individual File Dependencies*
newgame.obj: newgame.c 

#		*Compiler Configuration File*
\batlzone\real_3d.cfg: \batlzone\real_3d.mak
  copy &&|
-mm
-2
-a
-C
-G
-O
-Z
-V
-vi-
-IC:\TC\INCLUDE
-LC:\TC\LIB
| \batlzone\real_3d.cfg


