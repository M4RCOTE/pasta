/*
 * Arquivo: areaTriRet.c
 * 24/11
 * Autor: Marco Túllio
 */

#include <stdio.h>


int main(int argc, char** argv){
	
	float xA, yA, xB, yB, xC, yC;
    float r;

	printf("coord x y de A: ");
    scanf("%f %f", &xA, &yA);
 

    printf("coord x y de B: ");
    scanf("%f %f", &xB, &yB);

	xC = xB;
	yC = yA;

	float a = (xC-xA)*(yB-yC)/2;

	printf("Área do triângulo: %f\n", a);
	return 0;
}
