#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <GL/gl.h>


#include "obj_personagem.cpp"
#include "obj_sala1.cpp"
#include "obj_luz.cpp"

bool keyStates [256] ; 


float coo_personagem [3]={0,0,0};

float camera [3]={0,0,0};

float impulso;

void keyOperations (void) {

if (keyStates['a']) { 
coo_personagem[0]-=0.1;
}

if (keyStates['d']) { 
coo_personagem[0]+=0.1;
}	

if (keyStates['w']) { 
coo_personagem[2]-=0.1;
}

if (keyStates['s']) { 
coo_personagem[2]+=0.1;
}

if (keyStates[32]) { 
if(impulso == 0)impulso=0.5;

}

}

void display(){
keyOperations();
glClearColor(0.2, 0.5, 0.8, 1.0);

glEnable(GL_DEPTH_TEST);
glShadeModel(GL_SMOOTH);
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

glEnable(GL_LIGHTING);
glEnable(GL_COLOR_MATERIAL);

/* Define a Texturizacao */
glEnable ( GL_TEXTURE_2D );
glPixelStorei ( GL_UNPACK_ALIGNMENT, 1 );


glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluLookAt(coo_personagem[0],coo_personagem[1]/2+5,coo_personagem[2]+10,coo_personagem[0],coo_personagem[1],coo_personagem[2],0,1,0);
//gluLookAt(0,10,20,0,0,0,0,1,0);
//-----------------------------------------------------------------------------------------------------------------
	
	


	
GLfloat lmodelo_ambiente[] = { 0.0, 0.0, 0.0, 1.0 };
glLightModelfv(GL_LIGHT_MODEL_AMBIENT,lmodelo_ambiente);

	obj_luz luz;
	luz.luz1();

	

	
	obj_personagem personagem;
	personagem.personagem(coo_personagem);
	
	obj_sala1 sala1;
	sala1.sala();
	coo_personagem[0] = sala1.colisao0(coo_personagem);
	coo_personagem[1] = sala1.colisao1(coo_personagem);
	coo_personagem[2] = sala1.colisao2(coo_personagem);


	//rodar+=1;
	coo_personagem[1]+=impulso;
	impulso-=0.05;
	if(sala1.pulo(coo_personagem))impulso=0;
	
//--------------------------------------------------------------------------------------------------------------------	
	glutSwapBuffers();
}

void Timer(int value) {
	glutPostRedisplay();
	glutTimerFunc(0, Timer, 0);
}





void keyPressed (unsigned char key, int x, int y) {
keyStates[key] = true;
}

void keyUp (unsigned char key, int x, int y) {
keyStates[key] = false; 
}




void reshape (int w, int h)
{
glViewport (0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode (GL_PROJECTION);
glLoadIdentity ();
gluPerspective(60.0, (GLfloat) w/(GLfloat) h, 0.1, 100.0);

}

int main(int argc,char** argv){
	glutInit(&argc,argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1000,1000);
	glutInitWindowPosition(100,100);
	glutCreateWindow("desenho: linha");
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyPressed); // Tell GLUT to use the method "keyPressed" for key presses
	glutKeyboardUpFunc(keyUp); // Tell GLUT to use the method "keyUp" for key up events
	glutTimerFunc(0, Timer, 0);
	glutMainLoop();
	return 0;
}
