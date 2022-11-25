/*
 * Arquivo: impares.c
 * 24/11
 * Autor: Marco Túllio
 */

#include <stdio.h>
 
int main(int argc, char** argv){
	
    int a;
    printf("Manda um número int: ");
	scanf("%d", &a);

    for(int i = 1; i<a;i++){
        if(a%i == 0){
            printf("%d, ", i);

        }
    }
    printf("%d\n", a);
	return 0;
}


