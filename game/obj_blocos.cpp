#include <GL/glut.h>
#include <stdlib.h>
//#include "LoadBMP.h"

class obj_blocos{

	public:
		
		void bloco1(float coo[3]){	

		
		glPushMatrix();	
		//LoadBMP load;
		//load.loadBMP("bloco1.bmp");
		GLfloat semespecular[4]={0.0,0.0,0.0,1.0};
		glMaterialfv(GL_FRONT,GL_SPECULAR, semespecular);
		glMateriali(GL_FRONT,GL_SHININESS,20);
		
		glTranslatef(coo[0],coo[1]+1,coo[2]);
			glColor3f(1,1,1);
			
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Frente
glTexCoord2f(0.0f, 0.0f);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-0.0, 1.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1, 1);glVertex3f(-0.0, 1.0, 1.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f( 1, 1, 1);glVertex3f( 1.0, 1.0, 1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1, 1);glVertex3f( 1.0,-0.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// Tras:
glTexCoord2f(0.0f, 0.0f);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-0.0,-0.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1,-1);glVertex3f( 1.0,-0.0,-0.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f( 1, 1,-1);glVertex3f( 1.0, 1.0,-0.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1,-1);glVertex3f(-0.0, 1.0,-0.0);
glEnd();
glDisable(GL_TEXTURE_2D);



glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1, 1,-1);glVertex3f(-0.0, 1.0,-0.0);
glTexCoord2f(0.0f, 0.0f);glNormal3f( 1, 1,-1);glVertex3f( 1.0, 1.0,-0.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1, 1, 1);glVertex3f( 1.0, 1.0, 1.0);
glTexCoord2f(1.0f, 1.0f);glNormal3f(-1, 1, 1);glVertex3f(-0.0, 1.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
// baixo:
glTexCoord2f(1.0f, 1.0f);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-0.0,-0.0);
glTexCoord2f(0.0f, 1.0f);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-0.0, 1.0);
glTexCoord2f(0.0f, 0.0f);glNormal3f( 1,-1, 1);glVertex3f( 1.0,-0.0, 1.0);
glTexCoord2f(1.0f, 0.0f);glNormal3f( 1,-1,-1);glVertex3f( 1.0,-0.0,-0.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Esquerda
glTexCoord2f(1.0,0.0);glNormal3f(-1,-1,-1);glVertex3f(-0.0,-0.0,-0.0);
glTexCoord2f(1.0,1.0);glNormal3f(-1, 1,-1);glVertex3f(-0.0, 1.0,-0.0);
glTexCoord2f(0.0,1.0);glNormal3f(-1, 1, 1);glVertex3f(-0.0, 1.0, 1.0);
glTexCoord2f(0.0,0.0);glNormal3f(-1,-1, 1);glVertex3f(-0.0,-0.0, 1.0);
glEnd();
glDisable(GL_TEXTURE_2D);


glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Direita
glTexCoord2f(0.0,0.0);glNormal3f( 1,-1,-1);glVertex3f( 1.0,-0.0,-0.0);
glTexCoord2f(1.0,0.0);glNormal3f( 1,-1, 1);glVertex3f( 1.0,-0.0, 1.0);
glTexCoord2f(1.0,1.0);glNormal3f( 1, 1, 1);glVertex3f( 1.0, 1.0, 1.0);
glTexCoord2f(0.0,1.0);glNormal3f( 1, 1,-1);glVertex3f( 1.0, 1.0,-0.0);
glEnd();
glDisable(GL_TEXTURE_2D);

		
		glPopMatrix();

		


}

		
	
};



