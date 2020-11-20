#include <GL/glut.h>
#include <stdlib.h>
#include "LoadPer.cpp"

class obj_personagem{

	public:
		
		void personagem(float coo[3]){	

		
		glPushMatrix();	
		loadPer load;
		load.LoadBMP("ter.bmp");
		GLfloat semespecular[4]={0.0,0.0,0.0,1.0};
		glMaterialfv(GL_FRONT,GL_SPECULAR, semespecular);
		glMateriali(GL_FRONT,GL_SHININESS,20);
		
		glTranslatef(coo[0],coo[1],coo[2]);
			glColor3f(1,1,1);
			//glutSolidSphere(1.5,100,100);
			//glutSolidCube(1.5);
			
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);

//Frente
glTexCoord2f(0.0f, 0.0f);glVertex3f(-0.5,-0.5,0.5);
glTexCoord2f(0.0f, 1.0f);glVertex3f(-0.5,0.5,0.5);
glTexCoord2f(1.0f, 1.0f);glVertex3f(0.5,0.5,0.5);
glTexCoord2f(1.0f, 0.0f);glVertex3f(0.5,-0.5,0.5);
glEnd();


glDisable(GL_TEXTURE_2D);
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);

// Tras:
glTexCoord2f(0.0f, 0.0f);glVertex3f(-0.5,-0.5,-0.5);
glTexCoord2f(1.0f, 0.0f);glVertex3f(0.5,-0.5,-0.5);
glTexCoord2f(1.0f, 1.0f);glVertex3f(0.5,0.5,-0.5);
glTexCoord2f(0.0f, 1.0f);glVertex3f(-0.5,0.5,-0.5);
glEnd();


glDisable(GL_TEXTURE_2D);
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);
//Topo:
glTexCoord2f(0.0f, 1.0f);glVertex3f(-0.5,0.5,-0.5);
glTexCoord2f(0.0f, 0.0f);glVertex3f(0.5,0.5,-0.5 );
glTexCoord2f(1.0f, 0.0f);glVertex3f(0.5,0.5,0.5);
glTexCoord2f(1.0f, 1.0f);glVertex3f(-0.5,0.5,0.5);
glEnd();


glDisable(GL_TEXTURE_2D);
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);

// baixo:
glTexCoord2f(1.0f, 1.0f);glVertex3f(-0.5,-0.5,-0.5);
glTexCoord2f(0.0f, 1.0f);glVertex3f(-0.5,-0.5,0.5);
glTexCoord2f(0.0f, 0.0f);glVertex3f(0.5,-0.5,0.5);
glTexCoord2f(1.0f, 0.0f);glVertex3f(0.5,-0.5,-0.5);
glEnd();


glDisable(GL_TEXTURE_2D);
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);

//Esquerda
glTexCoord2f(1.0,0.0);glVertex3f(-0.5,-0.5,-0.5);
glTexCoord2f(1.0,1.0);glVertex3f(-0.5,0.5,-0.5);
glTexCoord2f(0.0,1.0);glVertex3f(-0.5,0.5,0.5);
glTexCoord2f(0.0,0.0);glVertex3f(-0.5,-0.5,0.5);
glEnd();

glDisable(GL_TEXTURE_2D);
glEnable(GL_TEXTURE_2D);
glBegin(GL_QUADS);

//Direita
glTexCoord2f(0.0,0.0);glVertex3f(0.5,-0.5,-0.5);
glTexCoord2f(1.0,0.0);glVertex3f(0.5,-0.5,0.5);
glTexCoord2f(1.0,1.0);glVertex3f(0.5,0.5,0.5);
glTexCoord2f(0.0,1.0);glVertex3f(0.5,0.5,-0.5);
glEnd();
glDisable(GL_TEXTURE_2D);

			
		glPopMatrix();

		


}

		
	
};

