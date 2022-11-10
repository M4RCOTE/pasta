/*
 * Arquivo: somaDivisores.c
 * 03/11
 * Autor: Marco Túllio
 */
#include <stdio.h>

int main(){
	int a;
	int s = 0;
	
	printf("soma divisores de: ");
	scanf("%d", &a);

	for(int i = 1; i<=a; i++){
		if(a%i == 0){
			s = s + i;
		}
	}

	printf("%d\n", s);
	return 0;
}
