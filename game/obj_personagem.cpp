#include <GL/glut.h>
#include <stdlib.h>
#include "LoadBMP.h"

class obj_personagem{

	public:
		
		void personagem(float coo[3], float angulo,float move){	

		
		glPushMatrix();	
		LoadBMP load;
		load.loadBMP("peronagem.bmp");
		GLfloat semespecular[4]={0.0,0.0,0.0,1.0};
		glMaterialfv(GL_FRONT,GL_SPECULAR, semespecular);
		glMateriali(GL_FRONT,GL_SHININESS,20);
		glTranslatef(coo[0],coo[1],coo[2]);
		glRotatef(angulo,0,1,0);
		glScalef(0.05,0.05,0.05);
			glColor3f(1,1,1);

//---------------------------------------cabeca---------------------------------------------------------------------------------------------------------------------			
glPushMatrix();	
glTranslatef(0,12,0);
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//traz
glTexCoord2f((float)6/16,(float) 12/16);glNormal3f(-1,-1, 1);glVertex3f(-2.0, 0.0, 2.0);
glTexCoord2f((float)6/16,(float) 14/16);glNormal3f(-1, 1, 1);glVertex3f(-2.0, 4.0, 2.0);
glTexCoord2f((float)8/16,(float) 14/16);glNormal3f( 1, 1, 1);glVertex3f( 2.0, 4.0, 2.0);
glTexCoord2f((float)8/16,(float) 12/16);glNormal3f( 1,-1, 1);glVertex3f( 2.0, 0.0, 2.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// frente
glTexCoord2f((float)2/16,(float) 12/16);glNormal3f(-1,-1,-1);glVertex3f(-2.0, 0.0,-2.0);
glTexCoord2f((float)4/16,(float) 12/16);glNormal3f( 1,-1,-1);glVertex3f( 2.0, 0.0,-2.0);
glTexCoord2f((float)4/16,(float) 14/16);glNormal3f( 1, 1,-1);glVertex3f( 2.0, 4.0,-2.0);
glTexCoord2f((float)2/16,(float) 14/16);glNormal3f(-1, 1,-1);glVertex3f(-2.0, 4.0,-2.0);
glEnd();
glDisable(GL_TEXTURE_2D);



glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//cima
glTexCoord2f((float)2/16,(float) 16/16);glNormal3f(-1, 1,-1);glVertex3f(-2.0, 4.0,-2.0);
glTexCoord2f((float)2/16,(float) 14/16);glNormal3f( 1, 1,-1);glVertex3f( 2.0, 4.0,-2.0);
glTexCoord2f((float)4/16,(float) 14/16);glNormal3f( 1, 1, 1);glVertex3f( 2.0, 4.0, 2.0);
glTexCoord2f((float)4/16,(float) 16/16);glNormal3f(-1, 1, 1);glVertex3f(-2.0, 4.0, 2.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// baixo:
glTexCoord2f((float)4/16,(float) 12/16);glNormal3f(-1,-1,-1);glVertex3f(-2.0,-0.0,-2.0);
glTexCoord2f((float)2/16,(float) 12/16);glNormal3f(-1,-1, 1);glVertex3f(-2.0,-0.0, 2.0);
glTexCoord2f((float)2/16,(float) 10/16);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-0.0, 2.0);
glTexCoord2f((float)4/16,(float) 10/16);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-0.0,-2.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Esquerda
glTexCoord2f((float)6/16,(float) 12/16);glNormal3f(-1,-1,-1);glVertex3f(-2.0,-0.0,-2.0);
glTexCoord2f((float)6/16,(float) 14/16);glNormal3f(-1, 1,-1);glVertex3f(-2.0, 4.0,-2.0);
glTexCoord2f((float)4/16,(float) 14/16);glNormal3f(-1, 1, 1);glVertex3f(-2.0, 4.0, 2.0);
glTexCoord2f((float)4/16,(float) 12/16);glNormal3f(-1,-1, 1);glVertex3f(-2.0,-0.0, 2.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Direita
glTexCoord2f((float)0/16,(float) 12/16);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-0.0,-2.0);
glTexCoord2f((float)2/16,(float) 12/16);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-0.0, 2.0);
glTexCoord2f((float)2/16,(float) 14/16);glNormal3f( 1, 1, 1);glVertex3f( 2.0, 4.0, 2.0);
glTexCoord2f((float)0/16,(float) 14/16);glNormal3f( 1, 1,-1);glVertex3f( 2.0, 4.0,-2.0);
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
glTexCoord2f((float)13/16,(float) 11/16);glNormal3f(-1,-1, 1);glVertex3f(-2.0, 0.0, 1.0);
glTexCoord2f((float)13/16,(float) 14/16);glNormal3f(-1, 1, 1);glVertex3f(-2.0, 6.0, 1.0);
glTexCoord2f((float)15/16,(float) 14/16);glNormal3f( 1, 1, 1);glVertex3f( 2.0, 6.0, 1.0);
glTexCoord2f((float)15/16,(float) 11/16);glNormal3f( 1,-1, 1);glVertex3f( 2.0, 0.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// frente
glTexCoord2f((float)10/16,(float) 11/16);glNormal3f(-1,-1,-1);glVertex3f(-2.0, 0.0,-1.0);
glTexCoord2f((float)12/16,(float) 11/16);glNormal3f( 1,-1,-1);glVertex3f( 2.0, 0.0,-1.0);
glTexCoord2f((float)12/16,(float) 14/16);glNormal3f( 1, 1,-1);glVertex3f( 2.0, 6.0,-1.0);
glTexCoord2f((float)10/16,(float) 14/16);glNormal3f(-1, 1,-1);glVertex3f(-2.0, 6.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);



glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//cima
glTexCoord2f((float)15/16,(float) 15/16);glNormal3f(-1, 1,-1);glVertex3f(-2.0, 6.0,-1.0);
glTexCoord2f((float)13/16,(float) 15/16);glNormal3f( 1, 1,-1);glVertex3f( 2.0, 6.0,-1.0);
glTexCoord2f((float)13/16,(float) 14/16);glNormal3f( 1, 1, 1);glVertex3f( 2.0, 6.0, 1.0);
glTexCoord2f((float)15/16,(float) 14/16);glNormal3f(-1, 1, 1);glVertex3f(-2.0, 6.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//baixo
glTexCoord2f((float)12/16,(float) 11/16);glNormal3f(-1, 1,-1);glVertex3f(-2.0, 0.0,-1.0);
glTexCoord2f((float)10/16,(float) 11/16);glNormal3f( 1, 1,-1);glVertex3f( 2.0, 0.0,-1.0);
glTexCoord2f((float)10/16,(float) 10/16);glNormal3f( 1, 1, 1);glVertex3f( 2.0, 0.0, 1.0);
glTexCoord2f((float)12/16,(float) 10/16);glNormal3f(-1, 1, 1);glVertex3f(-2.0, 0.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Esquerda
glTexCoord2f((float)13/16,(float) 11/16);glNormal3f(-1,-1,-1);glVertex3f(-2.0,-0.0,-1.0);
glTexCoord2f((float)13/16,(float) 14/16);glNormal3f(-1, 1,-1);glVertex3f(-2.0, 6.0,-1.0);
glTexCoord2f((float)12/16,(float) 14/16);glNormal3f(-1, 1, 1);glVertex3f(-2.0, 6.0, 1.0);
glTexCoord2f((float)12/16,(float) 11/16);glNormal3f(-1,-1, 1);glVertex3f(-2.0,-0.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Direita
glTexCoord2f((float) 9/16,(float) 11/16);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-0.0,-1.0);
glTexCoord2f((float)10/16,(float) 11/16);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-0.0, 1.0);
glTexCoord2f((float)10/16,(float) 14/16);glNormal3f( 1, 1, 1);glVertex3f( 2.0, 6.0, 1.0);
glTexCoord2f((float) 9/16,(float) 14/16);glNormal3f( 1, 1,-1);glVertex3f( 2.0, 6.0,-1.0);
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
glTexCoord2f((float)12/16,(float) 1/16);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-6.0, 1.0);
glTexCoord2f((float)12/16,(float) 4/16);glNormal3f(-1, 1, 1);glVertex3f(-0.0,-0.0, 1.0);
glTexCoord2f((float)13/16,(float) 4/16);glNormal3f( 1, 1, 1);glVertex3f( 2.0,-0.0, 1.0);
glTexCoord2f((float)13/16,(float) 1/16);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-6.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// frente
glTexCoord2f((float)10/16,(float) 1/16);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-6.0,-1.0);
glTexCoord2f((float)11/16,(float) 1/16);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-6.0,-1.0);
glTexCoord2f((float)11/16,(float) 4/16);glNormal3f( 1, 1,-1);glVertex3f( 2.0,-0.0,-1.0);
glTexCoord2f((float)10/16,(float) 4/16);glNormal3f(-1, 1,-1);glVertex3f(-0.0,-0.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


//cima
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
glTexCoord2f((float)10/16,(float) 5/16);glNormal3f(-1, 1,-1);glVertex3f(-0.0,-0.0,-1.0);
glTexCoord2f((float)10/16,(float) 4/16);glNormal3f( 1, 1,-1);glVertex3f( 2.0,-0.0,-1.0);
glTexCoord2f((float)11/16,(float) 4/16);glNormal3f( 1, 1, 1);glVertex3f( 2.0,-0.0, 1.0);
glTexCoord2f((float)11/16,(float) 5/16);glNormal3f(-1, 1, 1);glVertex3f(-0.0,-0.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// baixo:
glTexCoord2f((float)13/16,(float) 1/16);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-6.0,-1.0);
glTexCoord2f((float)12/16,(float) 1/16);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-6.0, 1.0);
glTexCoord2f((float)12/16,(float) 0/16);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-6.0, 1.0);
glTexCoord2f((float)13/16,(float) 0/16);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-6.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Esquerda
glTexCoord2f((float)11/16,(float) 1/16);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-6.0,-1.0);
glTexCoord2f((float)11/16,(float) 4/16);glNormal3f(-1, 1,-1);glVertex3f(-0.0,-0.0,-1.0);
glTexCoord2f((float)12/16,(float) 4/16);glNormal3f(-1, 1, 1);glVertex3f(-0.0,-0.0, 1.0);
glTexCoord2f((float)12/16,(float) 1/16);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-6.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Direita
glTexCoord2f((float) 9/16,(float) 1/16);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-6.0,-1.0);
glTexCoord2f((float)10/16,(float) 1/16);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-6.0, 1.0);
glTexCoord2f((float)10/16,(float) 4/16);glNormal3f( 1, 1, 1);glVertex3f( 2.0,-0.0, 1.0);
glTexCoord2f((float) 9/16,(float) 4/16);glNormal3f( 1, 1,-1);glVertex3f( 2.0,-0.0,-1.0);
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
glTexCoord2f((float)3/16,(float) 1/16);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-6.0, 1.0);
glTexCoord2f((float)3/16,(float) 4/16);glNormal3f(-1, 1, 1);glVertex3f(-0.0,-0.0, 1.0);
glTexCoord2f((float)4/16,(float) 4/16);glNormal3f( 1, 1, 1);glVertex3f(-2.0,-0.0, 1.0);
glTexCoord2f((float)4/16,(float) 1/16);glNormal3f( 1,-1, 1);glVertex3f(-2.0,-6.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// frente
glTexCoord2f((float)1/16,(float) 1/16);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-6.0,-1.0);
glTexCoord2f((float)2/16,(float) 1/16);glNormal3f( 1,-1,-1);glVertex3f(-2.0,-6.0,-1.0);
glTexCoord2f((float)2/16,(float) 4/16);glNormal3f( 1, 1,-1);glVertex3f(-2.0,-0.0,-1.0);
glTexCoord2f((float)1/16,(float) 4/16);glNormal3f(-1, 1,-1);glVertex3f(-0.0,-0.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


//cima
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
glTexCoord2f((float)1/16,(float) 5/16);glNormal3f(-1, 1,-1);glVertex3f(-0.0,-0.0,-1.0);
glTexCoord2f((float)1/16,(float) 4/16);glNormal3f( 1, 1,-1);glVertex3f(-2.0,-0.0,-1.0);
glTexCoord2f((float)2/16,(float) 4/16);glNormal3f( 1, 1, 1);glVertex3f(-2.0,-0.0, 1.0);
glTexCoord2f((float)2/16,(float) 5/16);glNormal3f(-1, 1, 1);glVertex3f(-0.0,-0.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// baixo:
glTexCoord2f((float)4/16,(float) 1/16);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-6.0,-1.0);
glTexCoord2f((float)3/16,(float) 1/16);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-6.0, 1.0);
glTexCoord2f((float)3/16,(float) 0/16);glNormal3f( 1,-1, 1);glVertex3f(-2.0,-6.0, 1.0);
glTexCoord2f((float)4/16,(float) 0/16);glNormal3f( 1,-1,-1);glVertex3f(-2.0,-6.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Esquerda
glTexCoord2f((float)2/16,(float) 1/16);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-6.0,-1.0);
glTexCoord2f((float)2/16,(float) 4/16);glNormal3f(-1, 1,-1);glVertex3f(-0.0,-0.0,-1.0);
glTexCoord2f((float)3/16,(float) 4/16);glNormal3f(-1, 1, 1);glVertex3f(-0.0,-0.0, 1.0);
glTexCoord2f((float)3/16,(float) 1/16);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-6.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Direita
glTexCoord2f((float)0/16,(float) 1/16);glNormal3f( 1,-1,-1);glVertex3f(-2.0,-6.0,-1.0);
glTexCoord2f((float)1/16,(float) 1/16);glNormal3f( 1,-1, 1);glVertex3f(-2.0,-6.0, 1.0);
glTexCoord2f((float)1/16,(float) 4/16);glNormal3f( 1, 1, 1);glVertex3f(-2.0,-0.0, 1.0);
glTexCoord2f((float)0/16,(float) 4/16);glNormal3f( 1, 1,-1);glVertex3f(-2.0,-0.0,-1.0);
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
glTexCoord2f((float)12/16,(float) 6/16);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-6.0, 1.0);
glTexCoord2f((float)12/16,(float) 9/16);glNormal3f(-1, 1, 1);glVertex3f(-0.0,-0.0, 1.0);
glTexCoord2f((float)13/16,(float) 9/16);glNormal3f( 1, 1, 1);glVertex3f( 2.0,-0.0, 1.0);
glTexCoord2f((float)13/16,(float) 6/16);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-6.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// frente
glTexCoord2f((float)10/16,(float) 6/16);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-6.0,-1.0);
glTexCoord2f((float)11/16,(float) 6/16);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-6.0,-1.0);
glTexCoord2f((float)11/16,(float) 9/16);glNormal3f( 1, 1,-1);glVertex3f( 2.0,-0.0,-1.0);
glTexCoord2f((float)10/16,(float) 9/16);glNormal3f(-1, 1,-1);glVertex3f(-0.0,-0.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


//cima
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
glTexCoord2f((float)10/16,(float)10/16);glNormal3f(-1, 1,-1);glVertex3f(-0.0,-0.0,-1.0);
glTexCoord2f((float)10/16,(float) 9/16);glNormal3f( 1, 1,-1);glVertex3f( 2.0,-0.0,-1.0);
glTexCoord2f((float)11/16,(float) 9/16);glNormal3f( 1, 1, 1);glVertex3f( 2.0,-0.0, 1.0);
glTexCoord2f((float)11/16,(float)10/16);glNormal3f(-1, 1, 1);glVertex3f(-0.0,-0.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// baixo:
glTexCoord2f((float)13/16,(float) 6/16);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-6.0,-1.0);
glTexCoord2f((float)12/16,(float) 6/16);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-6.0, 1.0);
glTexCoord2f((float)12/16,(float) 5/16);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-6.0, 1.0);
glTexCoord2f((float)13/16,(float) 5/16);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-6.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Esquerda
glTexCoord2f((float)11/16,(float) 6/16);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-6.0,-1.0);
glTexCoord2f((float)11/16,(float) 9/16);glNormal3f(-1, 1,-1);glVertex3f(-0.0,-0.0,-1.0);
glTexCoord2f((float)12/16,(float) 9/16);glNormal3f(-1, 1, 1);glVertex3f(-0.0,-0.0, 1.0);
glTexCoord2f((float)12/16,(float) 6/16);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-6.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Direita
glTexCoord2f((float) 9/16,(float) 6/16);glNormal3f( 1,-1,-1);glVertex3f( 2.0,-6.0,-1.0);
glTexCoord2f((float)10/16,(float) 6/16);glNormal3f( 1,-1, 1);glVertex3f( 2.0,-6.0, 1.0);
glTexCoord2f((float)10/16,(float) 9/16);glNormal3f( 1, 1, 1);glVertex3f( 2.0,-0.0, 1.0);
glTexCoord2f((float) 9/16,(float) 9/16);glNormal3f( 1, 1,-1);glVertex3f( 2.0,-0.0,-1.0);
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
glTexCoord2f((float)3/16,(float) 6/16);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-6.0, 1.0);
glTexCoord2f((float)3/16,(float) 9/16);glNormal3f(-1, 1, 1);glVertex3f(-0.0,-0.0, 1.0);
glTexCoord2f((float)4/16,(float) 9/16);glNormal3f( 1, 1, 1);glVertex3f(-2.0,-0.0, 1.0);
glTexCoord2f((float)4/16,(float) 6/16);glNormal3f( 1,-1, 1);glVertex3f(-2.0,-6.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// frente
glTexCoord2f((float)1/16,(float) 6/16);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-6.0,-1.0);
glTexCoord2f((float)2/16,(float) 6/16);glNormal3f( 1,-1,-1);glVertex3f(-2.0,-6.0,-1.0);
glTexCoord2f((float)2/16,(float) 9/16);glNormal3f( 1, 1,-1);glVertex3f(-2.0,-0.0,-1.0);
glTexCoord2f((float)1/16,(float) 9/16);glNormal3f(-1, 1,-1);glVertex3f(-0.0,-0.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


//cima
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
glTexCoord2f((float)1/16,(float)10/16);glNormal3f(-1, 1,-1);glVertex3f(-0.0,-0.0,-1.0);
glTexCoord2f((float)1/16,(float) 9/16);glNormal3f( 1, 1,-1);glVertex3f(-2.0,-0.0,-1.0);
glTexCoord2f((float)2/16,(float) 9/16);glNormal3f( 1, 1, 1);glVertex3f(-2.0,-0.0, 1.0);
glTexCoord2f((float)2/16,(float)10/16);glNormal3f(-1, 1, 1);glVertex3f(-0.0,-0.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// baixo:
glTexCoord2f((float)4/16,(float) 6/16);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-6.0,-1.0);
glTexCoord2f((float)3/16,(float) 6/16);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-6.0, 1.0);
glTexCoord2f((float)3/16,(float) 5/16);glNormal3f( 1,-1, 1);glVertex3f(-2.0,-6.0, 1.0);
glTexCoord2f((float)4/16,(float) 5/16);glNormal3f( 1,-1,-1);glVertex3f(-2.0,-6.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Esquerda
glTexCoord2f((float)2/16,(float) 6/16);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-6.0,-1.0);
glTexCoord2f((float)2/16,(float) 9/16);glNormal3f(-1, 1,-1);glVertex3f(-0.0,-0.0,-1.0);
glTexCoord2f((float)3/16,(float) 9/16);glNormal3f(-1, 1, 1);glVertex3f(-0.0,-0.0, 1.0);
glTexCoord2f((float)3/16,(float) 6/16);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-6.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Direita
glTexCoord2f((float)0/16,(float) 6/16);glNormal3f( 1,-1,-1);glVertex3f(-2.0,-6.0,-1.0);
glTexCoord2f((float)1/16,(float) 6/16);glNormal3f( 1,-1, 1);glVertex3f(-2.0,-6.0, 1.0);
glTexCoord2f((float)1/16,(float) 9/16);glNormal3f( 1, 1, 1);glVertex3f(-2.0,-0.0, 1.0);
glTexCoord2f((float)0/16,(float) 9/16);glNormal3f( 1, 1,-1);glVertex3f(-2.0,-0.0,-1.0);
glEnd();
glDisable(GL_TEXTURE_2D);
glPopMatrix();
//----------------------------------------------------------------------------------------------------------


glPopMatrix();

		


}

		
	
};
