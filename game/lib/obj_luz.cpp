#include"obj_luz.h"


obj_luz::luz1(){
		
		GLfloat light1_ambient[] = { 0.01, 0.01, 0.01, 0.5 };
		GLfloat light1_diffuse[] = { 1.0, 1.0, 1.0, 1.0 };
		GLfloat light1_specular[] = { 0.0, 0.0, 0.0, 0.0 };
		GLfloat light1_position[] = { 1.0, 10.0, 1.0, 1.0 };
		GLfloat spot_direction[] = { 1.0, -3.0, 1.0 };
		
		glLightfv(GL_LIGHT1, GL_AMBIENT, light1_ambient);
		glLightfv(GL_LIGHT1, GL_DIFFUSE, light1_diffuse);
		glLightfv(GL_LIGHT1, GL_SPECULAR, light1_specular);
		glLightfv(GL_LIGHT1, GL_POSITION, light1_position);
		glLightf(GL_LIGHT1, GL_CONSTANT_ATTENUATION, 0.1);
		glLightf(GL_LIGHT1, GL_LINEAR_ATTENUATION, 0.1);
		glLightf(GL_LIGHT1, GL_QUADRATIC_ATTENUATION, 0.01);
		
		glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, 100.0);
		glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION, spot_direction);
		glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, 50.0);
		
		glEnable(GL_LIGHT1);

	
}
		

		
	



