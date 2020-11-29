#ifndef  MAPA_H
#define  MAPA_H

#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
#include "LoadBMP.h"


#include "obj_blocos.cpp"

class obj_sala{

	public:

    	void sala();
    	float colisao0(float coo [3]); 
    	float colisao1(float coo [3]); 
    	float colisao2(float coo [3]); 
		float pulo (float coo [3],float impulso);
		bool contpulo(float coo[3],bool pulos);
};

#endif  /*MAPA_H*/





