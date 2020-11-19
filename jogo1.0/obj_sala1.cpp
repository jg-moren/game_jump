#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>



class obj_sala1{

	public:

		
		
		void sala(){	

		glPushMatrix();

		glColor3f(0.0,0.4,0.1);

		glBegin(GL_QUADS);
		glVertex3f(-10, 0,-10);
		glVertex3f( 10, 0,-10);
		glVertex3f( 10, 0, 10);
		glVertex3f(-10, 0, 10);
		glEnd();


		glPopMatrix();
}
		
		float colisao0(float coo [3] ){ 
			
		
			return coo[0]; 
		} 
		float colisao1(float coo [3]){ 
			

			return coo[1]; 
		} 
		float colisao2(float coo [3]){ 
			
	
			return coo[2]; 
		} 
		bool pulo (float coo [3]){
			if (-10<coo[0] && coo[0]<10 && -10<coo[1] && coo[1]<0 && -10<coo[2] && coo[2]<10 ){
				return true;
			}else{
				return false;
			}
		}

		
	
};
