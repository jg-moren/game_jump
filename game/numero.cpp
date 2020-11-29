#include "numero.h"



Numero::numero(int numero)
{
	
glDisable(GL_DEPTH_TEST);

glDisable(GL_LIGHTING);

glPushMatrix();

	glTranslatef(0,0,-10);
	glColor3f(1,1,1);


//----------------------------------------------dezeana----------------------------------------
	glPushMatrix();
	glScalef(1,1,1);
	glTranslatef(-0.7,0,0);
	switch(numero/10){
		case 0:
			numeros(true,false,true,true,true,true,true);			
		break;
		case 1:
			numeros(false,false,false,true,false,true,false);
		break;
		case 2:
			numeros(true,true,true,true,false,false,true);
		break;
		case 3:
			numeros(true,true,true,true,false,true,false);
		break;
		case 4:
			numeros(false,true,false,true,true,true,false);
		break;
		case 5:
			numeros(true,true,true,false,true,true,false);
		break;
		case 6:
			numeros(true,true,true,true,false,true,true);
		break;
		case 7:
			numeros(true,false,false,true,false,true,false);
		break;
		case 8:
			numeros(true,true,true,true,true,true,true);
		break;
		case 9:
			numeros(true,true,true,true,true,false,true);
		break;
	}
	glPopMatrix();
	
	
	glPushMatrix();
	glTranslatef(0.7,0,0);
	switch(numero%10){
		case 0:
			numeros(true,false,true,true,true,true,true);			
		break;
		case 1:
			numeros(false,false,false,true,false,true,false);
		break;
		case 2:
			numeros(true,true,true,true,false,false,true);
		break;
		case 3:
			numeros(true,true,true,true,false,true,false);
		break;
		case 4:
			numeros(false,true,false,true,true,true,false);
		break;
		case 5:
			numeros(true,true,true,false,true,true,false);
		break;
		case 6:
			numeros(true,true,true,true,false,true,true);
		break;
		case 7:
			numeros(true,false,false,true,false,true,false);
		break;
		case 8:
			numeros(true,true,true,true,true,true,true);
		break;
		case 9:
			numeros(true,true,true,true,true,false,true);
		break;
	}
	glPopMatrix();
	
glPopMatrix();	

glEnable(GL_DEPTH_TEST);

glEnable(GL_LIGHTING);

}

Numero::numeros(bool Topo, bool Centro , bool Baixo,bool TopoD, bool TopoE,bool BaixoD,bool BaixoE){
		if(Topo){
			glPushMatrix();  

				glColor3f(1,1,1);
				glTranslatef(0,1,0);
				glScalef(1,0.2,0.1);
				glutSolidCube(1);
				
				glColor3f(0,0,0);
				glScalef(0.9,0.9,1);
				glutSolidCube(1);
				
			glPopMatrix();
		}if(Centro){
			glPushMatrix();

				glColor3f(1,1,1);
				
				glTranslatef(0,0,0);
				glScalef(1,0.2,0.1);
				glutSolidCube(1);
				
				glColor3f(0,0,0);
				glScalef(0.9,0.9,1);
				glutSolidCube(1);
			glPopMatrix();
		}if(Baixo){
			glPushMatrix();

				glColor3f(1,1,1);
				
				glTranslatef(0,-1,0);
				glScalef(1,0.2,0.1);
				glutSolidCube(1);
				
				glColor3f(0,0,0);
				glScalef(0.9,0.9,1);
				glutSolidCube(1);
			glPopMatrix();

		}if(TopoD){
			glPushMatrix();

				glColor3f(1,1,1);
				
				glTranslatef(0.5,0.5,0);
				glScalef(0.2,1,0.1);
				glutSolidCube(1);
				
				glColor3f(0,0,0);
				glScalef(0.9,0.9,1);
				glutSolidCube(1);
			glPopMatrix();
		}if(BaixoD){
			glPushMatrix();

				glColor3f(1,1,1);
				
				glTranslatef(0.5,-0.5,0);
				glScalef(0.2,1,0.1);
				glutSolidCube(1);
				
				glColor3f(0,0,0);
				glScalef(0.9,0.9,1);
				glutSolidCube(1);
			glPopMatrix();
		}if(TopoE){
			glPushMatrix();

				glColor3f(1,1,1);
				
				glTranslatef(-0.5,0.5,0);
				glScalef(0.2,1,0.1);
				glutSolidCube(1);
				
				glColor3f(0,0,0);
				glScalef(0.9,0.9,1);
				glutSolidCube(1);
			glPopMatrix();
		}if(BaixoE){
			glPushMatrix();

				glColor3f(1,1,1);
				
				glTranslatef(-0.5,-0.5,0);
				glScalef(0.2,1,0.1);
				glutSolidCube(1);
				
				glColor3f(0,0,0);
				glScalef(0.9,0.9,1);
				glutSolidCube(1);
			glPopMatrix();
		}

}





