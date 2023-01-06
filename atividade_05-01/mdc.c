/*
 * Arquivo: mdc.c
 * Data criação 05/01
 * Autor: Marco Túllio
 */
#include <stdio.h>

int mdc(int a, int b);

int main(int argc, char** argv){
	

    int a, b, c;

	scanf("%d", &a);
    scanf("%d", &b);

    c = mdc(a,b);

    printf("%d\n", c);

	return 0;
}


int mdc(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return mdc(b, a%b);
    }
}