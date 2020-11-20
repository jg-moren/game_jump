#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>



class obj_sala1{

	public:

		
		
		void sala(){	
		float coo [3];


		glPushMatrix();



		
		GLfloat especular[4]={0.0,0.0,0.0,0.0};
		glMaterialfv(GL_FRONT,GL_SPECULAR, especular);
		glMateriali(GL_FRONT,GL_SHININESS,100);
		glColor3f(0,1,0);
		for(int i1=-10;i1<=10;i1+=1){
		for(int i2=-10;i2<=10;i2+=1){

		glPushMatrix();
		glRotatef(0,1,0,0);
		glTranslatef(i2,-1,i1);
		glBegin(GL_QUADS);
		glNormal3f(-i2/20, 1,-i2/20);glVertex3f(-0.5, 0.5,-0.5);
		glNormal3f( i2/20, 1,-i2/20);glVertex3f( 0.5, 0.5,-0.5);
		glNormal3f( i2/20, 1, i2/20);glVertex3f( 0.5, 0.5, 0.5);
		glNormal3f(-i2/20, 1, i2/20);glVertex3f(-0.5, 0.5, 0.5);
		glEnd();

		glPopMatrix();		
		
		
		}
		}
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
