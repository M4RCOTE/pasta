/*
 * Arquivo: impares.c
 * 24/11
 * Autor: Marco Túllio
 */

#include <stdio.h>


int main(int argc, char** argv){
	
	int a, b;

	printf("coloque o intervalo [a,b]:");
    scanf("%d %d", &a, &b);

    int i;
    for(i=a;i<=b;i++){
        if(i%2 != 0){
            printf("%d, ", i);
        }

    }
    printf("\n");

	return 0;
}
