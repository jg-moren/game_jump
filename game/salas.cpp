#include"salas.h"
salas::mapa(int i1,int i2,int i3){
	int result;
	if(sala==1){
		result = sala1[i1][i2][i3];
	}
	if(sala==2){
		result = sala2[i1][i2][i3];
	}
	return result;
};

int salas::rows(){
	int rows;
	if (sala==1){
		rows = sizeof(sala1)/sizeof(sala1[0]);
	}
	if (sala==2){
		rows = sizeof(sala2)/sizeof(sala2[0]);
	}
	return rows;
}
int salas::high(){
	int high;
	if (sala==1){
		high = sizeof(sala1[0])/(sizeof sala1[0][0]);
	}
	if (sala==2){
		high = sizeof(sala2[0])/(sizeof sala2[0][0]);
	}
	return high;
}
int salas::cols(){
	int cols;
	if (sala==1){
		cols = sizeof(sala1[0][0])/(sizeof sala1[0][0][0]);
	}
	if (sala==2){
		cols = sizeof(sala2[0][0])/(sizeof sala2[0][0][0]);
	}
	return cols;
}

void salas::nextMap(){
	sala+=1;
};

