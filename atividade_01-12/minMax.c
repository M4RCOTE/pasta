/*
 * Arquivo: minMax.c
 * Data criação 2/12
 * Autor: Marco Túllio
 */
#include <stdio.h>


int main(int argc, char** argv){
	int N;float a;
    int m;int n;
	scanf("%d", &N);
    float b[N];

    scanf("%f", &a);
    b[0] = a;
    m = a; n = a;

    for(int i=1; i < N; i++) {
        scanf("%f", &a);
        b[i] = a;
        if(m < a){
            m = a;
        }
        if(n>a){
            n = a;
        }
    }
    for(int i=0; i < N; i++) {
        if(b[i] == m){
            printf("%g> ", b[i]);
        }else if(b[i] == n){
            printf("%g< ", b[i]);
        }else{
            printf("%g ", b[i]);
        }
    }
    printf("\n");

	return 0;
}
