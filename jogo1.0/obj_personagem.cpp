#include <GL/glut.h>
#include <stdlib.h>


class obj_personagem{

	public:
		
		void personagem(float coo[3]){	

		
		glPushMatrix();	
		
		glTranslatef(coo[0],coo[1],coo[2]);
			glColor3f(0.8,0,0);
			glutSolidSphere(1.0,100,100);		
		glPopMatrix();

		


}

		
	
};

