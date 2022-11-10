/*
 * Arquivo: fibonacci.c
 * 03/11
 * Autor: Marco Túllio
 */
#include <stdio.h>


int main(){
	int p;
	scanf("%d", &p);
	printf("0, ");
	for(int i = 1, a = 1, b = 0, c = 1; i<=p-1; c = a + b, b = a, a = c, i++) printf("%d, ", c);
	printf("...\n");

	return 0;
}
