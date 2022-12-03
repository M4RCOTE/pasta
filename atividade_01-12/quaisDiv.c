/*
 * Arquivo: minMax.c
 * Data criação 2/12
 * Autor: Marco Túllio
 */
#include <stdio.h>


int main(int argc, char** argv){
	
    int N, R;
    scanf("%d", &N);
    int a[N];

    for(int i=0; i < N; i++) {
        scanf("%d", a+i);
    }
    scanf("%d", &R);

    for(int i=0; i < N; i++) {
        if(R%a[i] == 0){
            printf("%d# ", a[i]);
        }else{
            printf("%d ", a[i]);
        }
    }
    printf("\n");
	return 0;
}
