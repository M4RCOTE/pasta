/*
 * Arquivo: primo.c
 * 24/11
 * Autor: Marco Túllio
 */


#include <stdio.h>
#include <math.h>


int main(int argc, char** argv){
	
    float xA, yA, xB, yB;
    float r;

	printf("coord x y de A: ");
    scanf("%f %f", &xA, &yA);
 

    printf("coord x y de B: ");
    scanf("%f %f", &xB, &yB);

    r = sqrt((xA-xB)*(xA-xB)+(yA-yB)*(yA-yB));
    printf("%f\n", r);



	return 0;
}
