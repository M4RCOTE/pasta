/*
 * Arquivo: remNegativos.c
 * Data criação 2/12
 * Autor: Marco Túllio
 */

#include <stdio.h>


int main(int argc, char** argv){
	
	int N;
    scanf("%d", &N);
    float a[N];
    float s[N-1];

    for(int i=0; i < N; i++) {
        scanf("%f", a+i);
    }
    for(int i=0; i < N-1; i++) {
        s[i] = a[i+1] - a[i];
    }
    float max = s[0];
    float min = s[0];
    for(int i=1; i < N-1; i++) {
        if(max < s[i]){
            max = s[i];
        }
        if(min > s[i]){
            min = s[i];
        }
    }
    for(int i=0; i < N-2; i++) {
        printf("%g, ", s[i]);
    }
    printf("%g\n", s[N-2]);
    printf("min: %g  max: %g\n", min, max);

	return 0;
}
