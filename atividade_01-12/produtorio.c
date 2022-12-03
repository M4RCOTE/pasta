/*
 * Arquivo: produtorio.c
 * Data criação 2/12
 * Autor: Marco Túllio
 */
#include <stdio.h>
int main(int argc, char** argv){
	
    int N;float s = 1;
    scanf("%d", &N);
    float a[N];

    for(int i=0; i < N; i++) {
        scanf("%f", a+i);
    }

    for(int i=0; i < N; i++) {
        if(i == 0){
            printf("%g ", a[i]);
        }else{
            printf("* %g ", a[i]);
        }
        s = s * a[i];
    }
    printf("= %g\n", s);
	return 0;
}
