#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>

#include "obj_blocos.cpp"
#include "LoadMap.cpp"
class obj_sala1{

	public:
		int mapa [3][3][3]={
		{{1,0,0},{1,0,0},{1,0,0}},
		{{1,0,0},{1,0,0},{1,0,0}},
		{{1,0,0},{1,0,0},{1,0,0}}
		};
		
		
		void sala(){	
		float coo [3];


		glPushMatrix();
		loadMap load;
		load.LoadBMP("ter.bmp");
		obj_blocos blocos;
		blocos.bloco1(coo	);

		
		GLfloat especular[4]={1.0,1.0,1.0,1.0};
		glMaterialfv(GL_FRONT,GL_SPECULAR, especular);
		glMateriali(GL_FRONT,GL_SHININESS,10);
		glColor3f(1,1,1);
		for(int i1=-10;i1<=10;i1+=1){
		for(int i2=-10;i2<=10;i2+=1){
	//	glutSolidSphere(1.5,100,100);		
	//	glutSolidCube(1.5);
		glPushMatrix();
		glRotatef(0,1,0,0);
		glTranslatef(0,-1,0);
		coo[0]=i1;
		coo[1]=0;
		coo[2]=i2;
		blocos.bloco1(coo);

		glPopMatrix();		
		
		
		}
		}
		glPopMatrix();
}
		
		float colisao0(float coo [3] ){ 
			
			// or  
			// int *temp_arr = (int *) malloc(sizeof(int) * arr_size); 
 
			//your code goes here :) 
			return coo[0]; 
		} 
		float colisao1(float coo [3]){ 
			
			// or  
			// int *temp_arr = (int *) malloc(sizeof(int) * arr_size); 
 
			//your code goes here :) 
			return coo[1]; 
		} 
		float colisao2(float coo [3]){ 
			
			// or  
			// int *temp_arr = (int *) malloc(sizeof(int) * arr_size); 
 
			//your code goes here :) 
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
