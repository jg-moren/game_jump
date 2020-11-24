#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <GL/gl.h>
#include <math.h>
#define PI 3.1415

#include "obj_personagem.cpp"
#include "obj_sala1.cpp"
#include "obj_luz.cpp"

bool keyStates [256] ; 


float coo_personagem [3]={1,0,1};



float impulso;

float camera=0;

float angulo=0;

float time_move;
bool dire_move;

bool pulos =1;

void keyOperations (void) {

if (keyStates['e']) { 
camera+=1;
}

if (keyStates['q']) { 
camera-=1;
}

if (keyStates['a']) { 
coo_personagem[0]-=(cos(camera*PI/180)/8);
coo_personagem[2]+=(sin(camera*PI/180)/8);

if(dire_move){
	time_move+=4;
}else{
	time_move-=4;
}
if(time_move> 40)dire_move=false;
if(time_move<-40)dire_move=true;

if(angulo <= camera+270 && angulo > 90){
	angulo-=10;
}
if(angulo > camera+270 || angulo < camera +90){
	angulo+=10;
}	

}

if (keyStates['d']) { 
coo_personagem[0]+=(cos(camera*PI/180)/8);
coo_personagem[2]-=(sin(camera*PI/180)/8);

if(dire_move){
	time_move+=4;
}else{
	time_move-=4;
}
if(time_move> 40)dire_move=false;
if(time_move<-40)dire_move=true;

if(angulo < camera+270 && angulo >= 90){
	angulo+=10;
}
if(angulo > camera+270 || angulo < camera +90){
	angulo-=10;
}	



}	

if (keyStates['w']) { 
coo_personagem[0]-=(sin(camera*PI/180)/8);
coo_personagem[2]-=(cos(camera*PI/180)/8);

if(dire_move){
	time_move+=4;
}else{
	time_move-=4;
}
if(time_move> 40)dire_move=false;
if(time_move<-40)dire_move=true;

if(camera+180>angulo && angulo > camera+0){
	angulo-=10;
}
if(camera+180<=angulo && angulo < camera+360){
	angulo+=10;
}

}

if (keyStates['s']) { 
coo_personagem[0]+=(sin(camera*PI/180)/8);
coo_personagem[2]+=(cos(camera*PI/180)/8);

if(dire_move){
	time_move+=4;
}else{
	time_move-=4;
}
if(time_move> 40)dire_move=false;
if(time_move<-40)dire_move=true;

if(angulo <= camera+180){
	angulo+=10;
}
if(angulo > camera+180){
	angulo-=10;
}

}

if (keyStates[32]) { 
if(pulos)impulso=0.5,pulos=false;

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

//-----------------------------------------------------------------------------------------------------------------
	
GLfloat lmodelo_ambiente[] = { 0.0, 0.0, 0.0, 1.0 };
glLightModelfv(GL_LIGHT_MODEL_AMBIENT,lmodelo_ambiente);

gluLookAt(coo_personagem[0]+(sin(camera*PI/180))*5,coo_personagem[1]/2+3,coo_personagem[2]+(cos(camera*PI/180))*5,coo_personagem[0],coo_personagem[1],coo_personagem[2],0,1,0);
//gluLookAt(0,10,20,0,0,0,0,1,0);

	obj_luz luz;
	luz.luz1();
	
	obj_personagem personagem;
	personagem.personagem(coo_personagem,angulo,time_move);
	
	obj_sala1 sala1;
	sala1.sala();
	coo_personagem[1] = sala1.colisao1(coo_personagem);
	coo_personagem[0] = sala1.colisao0(coo_personagem);
	coo_personagem[2] = sala1.colisao2(coo_personagem);


	//rodar+=1;
	coo_personagem[1]+=impulso;
	impulso-=0.05;
	impulso=sala1.pulo(coo_personagem,impulso);
	pulos = sala1.contpulo(coo_personagem,pulos);
	
	if (angulo > 360)angulo =0;
	if (angulo < 0)angulo = 360;
	if (camera > 360)camera =0;
	if (camera < 0)camera = 360;
	
	time_move=time_move/1.02;
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
gluPerspective(60.0, (GLfloat) w/(GLfloat) h, 3.1, 100.0);

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
