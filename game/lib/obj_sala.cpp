#include"obj_sala.h"
#include"var_salas.h"


		
	void obj_sala::sala(){	
		float coo [3];
		
		


		glPushMatrix();

		obj_blocos blocos;
		LoadBMP load;
		var_salas sala;


		
		GLfloat especular[4]={1.0,1.0,1.0,1.0};
		glMaterialfv(GL_FRONT,GL_SPECULAR, especular);
		glMateriali(GL_FRONT,GL_SHININESS,10);
		glColor3f(1,1,1);
		load.loadBMP("texture/bloco1.bmp");
		
		
		for(int i1=0;i1<sala.rows();i1+=1){
		for(int i2=0;i2<sala.high();i2+=1){
		for(int i3=0;i3<sala.cols();i3+=1){

		glPushMatrix();
		glRotatef(0,1,0,0);
		glTranslatef(0,-1,0);
		if(sala.mapa(i1,i2,i3)==1){
		coo[0]=i3;
		coo[1]=i2;
		coo[2]=i1;
		blocos.bloco1(coo);
		}
		glPopMatrix();		
		}
		}
		}
		
		
		for(int i1=0;i1<sala.rows();i1+=1){
		for(int i2=0;i2<sala.high();i2+=1){
		for(int i3=0;i3<sala.cols();i3+=1){

		glPushMatrix();
		glRotatef(0,1,0,0);
		glTranslatef(0,-1,0);
		if(sala.mapa(i1,i2,i3)==2){
		glPushMatrix();
		glDisable(GL_LIGHTING);
		glColor3f(0,1,0);
		glTranslatef(i3+0.5,i2+1.5,i1+0.5);
		glutSolidSphere(0.25,20,20);
		glEnable(GL_LIGHTING);
		glPopMatrix();
		}
		glPopMatrix();		
		}
		}
		}
		
		glPopMatrix();
	}
		
	float obj_sala::colisao0(float coo [3] ){ 
			var_salas sala;
			if(coo[1]<-10){
				return 1;
			}
			if(0<=coo[0] && coo[0]<=sala.cols()){
			 if(sala.mapa((int)coo[2], (int)coo[1] ,(int)(coo[0]-0.15))  ==1 /*&& coo[1]>(int)coo[0]+0.1*/){
				return (int)coo[0]+0.2;
			}if(sala.mapa((int)coo[2], (int)coo[1], (int)(coo[0]+0.15))  ==1 /*&& coo[1]<(int)coo[0]+0.9*/){
				return (int)coo[0]+0.8;
			}else{
				return coo[0]; 
			}
			}else{
				//
				if(coo[0]>sala.cols())return (float)sala.cols()-0.01;
				if(0>=coo[0]   )return 0;
			}
		
			// or  
			// int *temp_arr = (int *) malloc(sizeof(int) * arr_size); 
 
			//your code goes here :) 
			//return coo[0]; 
		} 
	float obj_sala::colisao1(float coo [3]){ 
			var_salas sala;
			if(coo[1]<-100){
				return 3;
			}
			if(0<=coo[1] && coo[1]<=sala.high()){
			if(sala.mapa((int)coo[2], (int)coo[1], (int)coo[0])  ==1  /*&& coo[1]>(int)coo[1]+0.1*/){
				return (int)coo[1]+1;
			}else{
				return coo[1]; 
			}
			}else{
				return coo[1]; 
			}
			// or  
			// int *temp_arr = (int *) malloc(sizeof(int) * arr_size); 
 
			//your code goes here :) 
			
		} 
	float obj_sala::colisao2(float coo [3]){ 
			var_salas sala;
			if(coo[1]<-10){
				return 1;
			}
			if(0<=coo[2] && coo[2]<=sala.rows()){
			 if(sala.mapa( (int)(coo[2]-0.15), (int)coo[1], (int)coo[0])  ==1 ){
				return (int)coo[2]+0.2;
			}if(sala.mapa( (int)(coo[2]+0.15) ,(int)coo[1], (int)coo[0])  ==1){
				return (int)coo[2]+0.8;
			}else{
				return coo[2]; 
			}
			}
			if(coo[2]>sala.rows())return (float)sala.rows()-0.01;	
			if(0>=coo[2] )return 0;
			
			
			// or  
			// int *temp_arr = (int *) malloc(sizeof(int) * arr_size); 
 
			//your code goes here :) 
			return coo[2]; 
		} 
	float obj_sala::pulo (float coo [3],float impulso){
			var_salas sala;
			if(-1<=coo[1] && coo[1] < sala.high()   ){
				
			if(sala.mapa((int)coo[2], (int)(coo[1]-0.1), (int)coo[0])  ==1/* && coo[1]<(int)coo[1]+0.1*/){
				return 0;
			}if(sala.mapa((int)coo[2], (int)coo[1]+1, (int)coo[0])  ==1 && coo[1]>(int)coo[1]){
				return -0.1;
			}else{
				return impulso;
			}
			}else{
				return -1.5;
			}
			
		}
	
	void obj_sala::proxSala(float coo [3]){
		var_salas sala;
		if(sala.mapa((int)coo[2],(int)coo[1],(int)coo[0])==2){
			sala.nextMap();
		}
	}
	
	bool obj_sala::contpulo(float coo[3],bool pulos){
			var_salas sala;
			if(sala.mapa((int)coo[2], (int)(coo[1]-0.1), (int)coo[0])  ==1){
				return true;
			}else{
				return pulos;
			}
		}

		

