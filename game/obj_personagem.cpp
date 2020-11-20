#include <GL/glut.h>
#include <stdlib.h>


class obj_personagem{

	public:
		
		void personagem(float coo[3]){	

		
		glPushMatrix();	
		GLfloat semespecular[4]={1.0,1.0,1.0,1.0};
		glMaterialfv(GL_FRONT,GL_SPECULAR, semespecular);
		glMateriali(GL_FRONT,GL_SHININESS,10);
		
		glTranslatef(coo[0],coo[1],coo[2]);
			glColor3f(1,0,0);
			glutSolidSphere(1.0,100,100);


			
		glPopMatrix();

		


}

		
	
};

