/*
 * Arquivo: raizes2grau.c
 * Data criação 12/01
 * Autor: Marco Túllio
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raizes(float a, float b, float c, float *x1, float *x2);

int main(int argc, char** argv){
	
    float a,b,c,r,x1,x2;

    printf("manda o a,b,c:\n");
    scanf("%f %f %f%*c", &a, &b, &c);

    r = raizes(a, b,c, &x1,&x2);

    printf("%lg\n", r);

    if(r == 2){
        printf("%f %f\n", x1, x2);
    }else if(r ==1){
        printf("%f\n", x1);
    }

	return 0;
}

int raizes(float a, float b, float c, float *x1, float *x2){
    int delta;

    delta = (b*b)-(4*a*c);

    if(delta > 0){
        *x1 = ((-1)*b+sqrt(delta))/(2*a);
        printf("%lg %lg\n", sqrt(delta), a);
        *x2 = ((-1)*b-sqrt(delta))/(2*a);
        return 2;
    }else if(delta == 0){
        *x1 = ((-1)*b+sqrt(delta))/(2*a);
        return 1;
    }
    return 0;
}

