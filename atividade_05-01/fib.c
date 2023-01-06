/*
 * Arquivo: fib.c
 * Data criação 05/01
 * Autor: Marco Túllio
 */
#include <stdio.h>

int fib(int a);

int main(int argc, char** argv){
	

    int a, c;

	scanf("%d", &a);

    c = fib(a);

    printf("%d\n", c);

	return 0;
}


int fib(int a){
    if(a == 0){
        return 0;
    }
    else if(a == 1 || a == 2){
        return 1;
    }
    else
    {
        return fib(a-1) + fib(a-2);
    }
}