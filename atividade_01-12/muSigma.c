/*
 * Arquivo: muSigma.c
 * Data criação 2/12
 * Autor: Marco Túllio
 */
#include <stdio.h>
#include <math.h>

int main(int argc, char** argv){
	
    int N;float u = 0;float delta = 0;
    scanf("%d", &N);
    float a[N];

    for(int i=0; i < N; i++) {
        scanf("%f", a+i);
        u = u + a[i];
    }
    u = u/N;
    for(int i=0; i < N; i++) {
        delta = delta + ((a[i]-u)*(a[i]-u));
    }
    delta = delta/N;
    delta = sqrt(delta);
    printf("média: %g\n", u);
    printf("desvio: %g\n", delta);
	return 0;
}
