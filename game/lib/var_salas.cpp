#include"var_salas.h"
#include"numero.h"
int sala=1;
var_salas::mapa(int i1,int i2,int i3){
	int result=0;
	if(sala==1){
		result = sala1[i1][i2][i3];
	}
	if(sala==2){
		result = sala2[i1][i2][i3];
	}
	return result;
};

int var_salas::rows(){
	int rows=0;
	if (sala==1){
		rows = sizeof(sala1)/sizeof(sala1[0]);
	}
	if (sala==2){
		rows = sizeof(sala2)/sizeof(sala2[0]);
	}
	return rows;
}
int var_salas::high(){
	int high=0;
	if (sala==1){
		high = sizeof(sala1[0])/(sizeof sala1[0][0]);
	}
	if (sala==2){
		high = sizeof(sala2[0])/(sizeof sala2[0][0]);
	}
	return high;
}
int var_salas::cols(){
	int cols=0;
	if (sala==1){
		cols = sizeof(sala1[0][0])/(sizeof sala1[0][0][0]);
	}
	if (sala==2){
		cols = sizeof(sala2[0][0])/(sizeof sala2[0][0][0]);
	}
	return cols;
}

void var_salas::nextMap(){
	sala+=1;
};

int var_salas::getSala(){
	return sala;
}

