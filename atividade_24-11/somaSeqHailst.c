
/*
 * Arquivo: primo.c
 * 24/11
 * Autor: Marco Túllio
 */


#include <stdio.h>



int main(int argc, char** argv){


    int a;
    int s = 0;
    printf("Manda um número int positivo: ");
    scanf("%d", &a);
	
	while(0 == 0){
        
        if(a == 1){
            s = s + a;
            break;
        }

        if(a%2 == 0){
            s = s + a;
            a = a/2;
        }else{
            s = s + a;
            a = 3*a+1;
        }

    }

    printf("Soma é: %d\n", s);
	return 0;
}
