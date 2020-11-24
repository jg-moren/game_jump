#include <GL/glut.h>
#include <stdlib.h>
#include "LoadPer.cpp"

class obj_personagem{

	public:
		
		void personagem(float coo[3], float angulo,float move){	

		
		glPushMatrix();	
		loadPer load;
		load.LoadBMP("ter.bmp");
		GLfloat semespecular[4]={0.0,0.0,0.0,1.0};
		glMaterialfv(GL_FRONT,GL_SPECULAR, semespecular);
		glMateriali(GL_FRONT,GL_SHININESS,20);
		glTranslatef(coo[0],coo[1],coo[2]);
		glRotatef(angulo,0,1,0);
		glScalef(0.1,0.1,0.1);
			glColor3f(1,1,1);
			//glutSolidSphere(1.5,100,100);
			//glutSolidCube(1.5);

//---------------------------------------cabeca---------------------------------------------------------------------------------------------------------------------			
glPushMatrix();	
glTranslatef(0,12,0);
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//traz
glTexCoord2f(0.0f, 0.0f);glNormal3f(-1,-1, 1);glVertex3f(-2.0, 0.0, 2.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1, 1);glVertex3f(-2.0, 4.0, 2.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f( 1, 1, 1);glVertex3f( 2.0, 4.0, 2.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1, 1);glVertex3f( 2.0, 0.0, 2.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// frente
glTexCoord2f(0.0f, 0.0f);glNormal3f(-1,-1,-1);glVertex3f(-2.0, 0.0,-2.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1,-1);glVertex3f( 2.0, 0.0,-2.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f( 1, 1,-1);glVertex3f( 2.0, 4.0,-2.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1,-1);glVertex3f(-2.0, 4.0,-2.0);
glEnd();
glDisable(GL_TEXTURE_2D);



glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1,-1);glVertex3f(-2.0, 4.0,-2.0);
glTexCoord2f(0.0f, 0.0f);glNormal3f( 1, 1,-1);glVertex3f( 2.0, 4.0,-2.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1, 1, 1);glVertex3f( 2.0, 4.0, 2.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f(-1, 1, 1);glVertex3f(-2.0, 4.0, 2.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// baixo:
glTexCoord2f(1.0f, 1.0f);glNormal3f(-1,-1,-1);glVertex3f(-2.0,-0.0,-2.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1,-1, 1);glVertex3f(-2.0,-0.0, 2.0);
glTexCoord2f(0.0f, 0.0f);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-0.0, 2.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-0.0,-2.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Esquerda
glTexCoord2f(1.0,0.0);glNormal3f(-1,-1,-1);glVertex3f(-2.0,-0.0,-2.0);
glTexCoord2f(1.0,1.0);glNormal3f(-1, 1,-1);glVertex3f(-2.0, 4.0,-2.0);
glTexCoord2f(0.0,1.0);glNormal3f(-1, 1, 1);glVertex3f(-2.0, 4.0, 2.0);
glTexCoord2f(0.0,0.0);glNormal3f(-1,-1, 1);glVertex3f(-2.0,-0.0, 2.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Direita
glTexCoord2f(0.0,0.0);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-0.0,-2.0);
glTexCoord2f(1.0,0.0);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-0.0, 2.0);
glTexCoord2f(1.0,1.0);glNormal3f( 1, 1, 1);glVertex3f( 2.0, 4.0, 2.0);
glTexCoord2f(0.0,1.0);glNormal3f( 1, 1,-1);glVertex3f( 2.0, 4.0,-2.0);
glEnd();
glDisable(GL_TEXTURE_2D);
glPopMatrix();
//-----------------------------------------------------------------------------------------------------------------------------------------------------------			


//---------------------------------------tronco---------------------------------------------------------------------------------------------------------------------			
glPushMatrix();	
glTranslatef(0,6,0);
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//traz
glTexCoord2f(0.0f, 0.0f);glNormal3f(-1,-1, 1);glVertex3f(-2.0, 0.0, 1.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1, 1);glVertex3f(-2.0, 6.0, 1.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f( 1, 1, 1);glVertex3f( 2.0, 6.0, 1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1, 1);glVertex3f( 2.0, 0.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// frente
glTexCoord2f(0.0f, 0.0f);glNormal3f(-1,-1,-1);glVertex3f(-2.0, 0.0,-1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1,-1);glVertex3f( 2.0, 0.0,-1.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f( 1, 1,-1);glVertex3f( 2.0, 6.0,-1.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1,-1);glVertex3f(-2.0, 6.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);



glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1,-1);glVertex3f(-2.0, 6.0,-1.0);
glTexCoord2f(0.0f, 0.0f);glNormal3f( 1, 1,-1);glVertex3f( 2.0, 6.0,-1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1, 1, 1);glVertex3f( 2.0, 6.0, 1.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f(-1, 1, 1);glVertex3f(-2.0, 6.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// baixo:
glTexCoord2f(1.0f, 1.0f);glNormal3f(-1,-1,-1);glVertex3f(-2.0,-0.0,-1.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1,-1, 1);glVertex3f(-2.0,-0.0, 1.0);
glTexCoord2f(0.0f, 0.0f);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-0.0, 1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-0.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Esquerda
glTexCoord2f(1.0,0.0);glNormal3f(-1,-1,-1);glVertex3f(-2.0,-0.0,-1.0);
glTexCoord2f(1.0,1.0);glNormal3f(-1, 1,-1);glVertex3f(-2.0, 6.0,-1.0);
glTexCoord2f(0.0,1.0);glNormal3f(-1, 1, 1);glVertex3f(-2.0, 6.0, 1.0);
glTexCoord2f(0.0,0.0);glNormal3f(-1,-1, 1);glVertex3f(-2.0,-0.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Direita
glTexCoord2f(0.0,0.0);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-0.0,-1.0);
glTexCoord2f(1.0,0.0);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-0.0, 1.0);
glTexCoord2f(1.0,1.0);glNormal3f( 1, 1, 1);glVertex3f( 2.0, 6.0, 1.0);
glTexCoord2f(0.0,1.0);glNormal3f( 1, 1,-1);glVertex3f( 2.0, 6.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);
glPopMatrix();
//-----------------------------------------------------------------------------------------------------------------------------------------------------------			

//---------------------------------------perna_direita---------------------------------------------------------------------------------------------------------------------			
glPushMatrix();	
glTranslatef(0,6,0);
glRotatef(move,1,0,0);
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//traz
glTexCoord2f(0.0f, 0.0f);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-6.0, 1.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1, 1);glVertex3f(-0.0,-0.0, 1.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f( 1, 1, 1);glVertex3f( 2.0,-0.0, 1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-6.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// frente
glTexCoord2f(0.0f, 0.0f);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-6.0,-1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-6.0,-1.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f( 1, 1,-1);glVertex3f( 2.0,-0.0,-1.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1,-1);glVertex3f(-0.0,-0.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


//cima
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1,-1);glVertex3f(-0.0,-0.0,-1.0);
glTexCoord2f(0.0f, 0.0f);glNormal3f( 1, 1,-1);glVertex3f( 2.0,-0.0,-1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1, 1, 1);glVertex3f( 2.0,-0.0, 1.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f(-1, 1, 1);glVertex3f(-0.0,-0.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// baixo:
glTexCoord2f(1.0f, 1.0f);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-6.0,-1.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-6.0, 1.0);
glTexCoord2f(0.0f, 0.0f);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-6.0, 1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-6.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Esquerda
glTexCoord2f(1.0,0.0);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-6.0,-1.0);
glTexCoord2f(1.0,1.0);glNormal3f(-1, 1,-1);glVertex3f(-0.0,-0.0,-1.0);
glTexCoord2f(0.0,1.0);glNormal3f(-1, 1, 1);glVertex3f(-0.0,-0.0, 1.0);
glTexCoord2f(0.0,0.0);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-6.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Direita
glTexCoord2f(0.0,0.0);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-6.0,-1.0);
glTexCoord2f(1.0,0.0);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-6.0, 1.0);
glTexCoord2f(1.0,1.0);glNormal3f( 1, 1, 1);glVertex3f( 2.0,-0.0, 1.0);
glTexCoord2f(0.0,1.0);glNormal3f( 1, 1,-1);glVertex3f( 2.0,-0.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);
glPopMatrix();
//----------------------------------------------------------------------------------------------------------

//---------------------------------------perna_esquerda---------------------------------------------------------------------------------------------------------------------			
glPushMatrix();	
glTranslatef(0,6,0);
glRotatef(move,-1,0,0);
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//traz
glTexCoord2f(0.0f, 0.0f);glNormal3f(-1,-1, 1);glVertex3f(-2.0,-6.0, 1.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1, 1);glVertex3f(-2.0,-0.0, 1.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f( 1, 1, 1);glVertex3f( 0.0,-0.0, 1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1, 1);glVertex3f( 0.0,-6.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// frente
glTexCoord2f(0.0f, 0.0f);glNormal3f(-1,-1,-1);glVertex3f(-2.0,-6.0,-1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1,-1);glVertex3f( 0.0,-6.0,-1.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f( 1, 1,-1);glVertex3f( 0.0,-0.0,-1.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1,-1);glVertex3f(-2.0,-0.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


//cima
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1,-1);glVertex3f(-2.0,-0.0,-1.0);
glTexCoord2f(0.0f, 0.0f);glNormal3f( 1, 1,-1);glVertex3f( 0.0,-0.0,-1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1, 1, 1);glVertex3f( 0.0,-0.0, 1.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f(-1, 1, 1);glVertex3f(-2.0,-0.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// baixo:
glTexCoord2f(1.0f, 1.0f);glNormal3f(-1,-1,-1);glVertex3f(-2.0,-6.0,-1.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1,-1, 1);glVertex3f(-2.0,-6.0, 1.0);
glTexCoord2f(0.0f, 0.0f);glNormal3f( 1,-1, 1);glVertex3f( 0.0,-6.0, 1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1,-1);glVertex3f( 0.0,-6.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Esquerda
glTexCoord2f(1.0,0.0);glNormal3f(-1,-1,-1);glVertex3f(-2.0,-6.0,-1.0);
glTexCoord2f(1.0,1.0);glNormal3f(-1, 1,-1);glVertex3f(-2.0,-0.0,-1.0);
glTexCoord2f(0.0,1.0);glNormal3f(-1, 1, 1);glVertex3f(-2.0,-0.0, 1.0);
glTexCoord2f(0.0,0.0);glNormal3f(-1,-1, 1);glVertex3f(-2.0,-6.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Direita
glTexCoord2f(0.0,0.0);glNormal3f( 1,-1,-1);glVertex3f( 0.0,-6.0,-1.0);
glTexCoord2f(1.0,0.0);glNormal3f( 1,-1, 1);glVertex3f( 0.0,-6.0, 1.0);
glTexCoord2f(1.0,1.0);glNormal3f( 1, 1, 1);glVertex3f( 0.0,-0.0, 1.0);
glTexCoord2f(0.0,1.0);glNormal3f( 1, 1,-1);glVertex3f( 0.0,-0.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);
glPopMatrix();
//----------------------------------------------------------------------------------------------------------

//---------------------------------------braco_direita---------------------------------------------------------------------------------------------------------------------			
glPushMatrix();	
glTranslatef(2,12,0);
glRotatef(move,-1,0,0);
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//traz
glTexCoord2f(0.0f, 0.0f);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-6.0, 1.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1, 1);glVertex3f(-0.0,-0.0, 1.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f( 1, 1, 1);glVertex3f( 2.0,-0.0, 1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-6.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// frente
glTexCoord2f(0.0f, 0.0f);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-6.0,-1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-6.0,-1.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f( 1, 1,-1);glVertex3f( 2.0,-0.0,-1.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1,-1);glVertex3f(-0.0,-0.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


//cima
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1,-1);glVertex3f(-0.0,-0.0,-1.0);
glTexCoord2f(0.0f, 0.0f);glNormal3f( 1, 1,-1);glVertex3f( 2.0,-0.0,-1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1, 1, 1);glVertex3f( 2.0,-0.0, 1.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f(-1, 1, 1);glVertex3f(-0.0,-0.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// baixo:
glTexCoord2f(1.0f, 1.0f);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-6.0,-1.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-6.0, 1.0);
glTexCoord2f(0.0f, 0.0f);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-6.0, 1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-6.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Esquerda
glTexCoord2f(1.0,0.0);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-6.0,-1.0);
glTexCoord2f(1.0,1.0);glNormal3f(-1, 1,-1);glVertex3f(-0.0,-0.0,-1.0);
glTexCoord2f(0.0,1.0);glNormal3f(-1, 1, 1);glVertex3f(-0.0,-0.0, 1.0);
glTexCoord2f(0.0,0.0);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-6.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Direita
glTexCoord2f(0.0,0.0);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-6.0,-1.0);
glTexCoord2f(1.0,0.0);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-6.0, 1.0);
glTexCoord2f(1.0,1.0);glNormal3f( 1, 1, 1);glVertex3f( 2.0,-0.0, 1.0);
glTexCoord2f(0.0,1.0);glNormal3f( 1, 1,-1);glVertex3f( 2.0,-0.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);
glPopMatrix();
//----------------------------------------------------------------------------------------------------------

//---------------------------------------braco_esquerda---------------------------------------------------------------------------------------------------------------------			
glPushMatrix();	
glTranslatef(-2,12,0);
glRotatef(move,1,0,0);
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//traz
glTexCoord2f(0.0f, 0.0f);glNormal3f(-1,-1, 1);glVertex3f(-2.0,-6.0, 1.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1, 1);glVertex3f(-2.0,-0.0, 1.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f( 1, 1, 1);glVertex3f( 0.0,-0.0, 1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1, 1);glVertex3f( 0.0,-6.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// frente
glTexCoord2f(0.0f, 0.0f);glNormal3f(-1,-1,-1);glVertex3f(-2.0,-6.0,-1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1,-1);glVertex3f( 0.0,-6.0,-1.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f( 1, 1,-1);glVertex3f( 0.0,-0.0,-1.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1,-1);glVertex3f(-2.0,-0.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


//cima
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1,-1);glVertex3f(-2.0,-0.0,-1.0);
glTexCoord2f(0.0f, 0.0f);glNormal3f( 1, 1,-1);glVertex3f( 0.0,-0.0,-1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1, 1, 1);glVertex3f( 0.0,-0.0, 1.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f(-1, 1, 1);glVertex3f(-2.0,-0.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// baixo:
glTexCoord2f(1.0f, 1.0f);glNormal3f(-1,-1,-1);glVertex3f(-2.0,-6.0,-1.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1,-1, 1);glVertex3f(-2.0,-6.0, 1.0);
glTexCoord2f(0.0f, 0.0f);glNormal3f( 1,-1, 1);glVertex3f( 0.0,-6.0, 1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1,-1);glVertex3f( 0.0,-6.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Esquerda
glTexCoord2f(1.0,0.0);glNormal3f(-1,-1,-1);glVertex3f(-2.0,-6.0,-1.0);
glTexCoord2f(1.0,1.0);glNormal3f(-1, 1,-1);glVertex3f(-2.0,-0.0,-1.0);
glTexCoord2f(0.0,1.0);glNormal3f(-1, 1, 1);glVertex3f(-2.0,-0.0, 1.0);
glTexCoord2f(0.0,0.0);glNormal3f(-1,-1, 1);glVertex3f(-2.0,-6.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Direita
glTexCoord2f(0.0,0.0);glNormal3f( 1,-1,-1);glVertex3f( 0.0,-6.0,-1.0);
glTexCoord2f(1.0,0.0);glNormal3f( 1,-1, 1);glVertex3f( 0.0,-6.0, 1.0);
glTexCoord2f(1.0,1.0);glNormal3f( 1, 1, 1);glVertex3f( 0.0,-0.0, 1.0);
glTexCoord2f(0.0,1.0);glNormal3f( 1, 1,-1);glVertex3f( 0.0,-0.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);
glPopMatrix();
//----------------------------------------------------------------------------------------------------------



glPopMatrix();

		


}

		
	
};
