/*
 * Arquivo: base.c
 * 03/11
 * Autor: Marco Túllio
 */

#include <stdio.h>

int fds(int a);


int main(){

	int a;

	printf("fatorial de : ");
	scanf("%d", &a);
	printf("%d\n", fds(a));
	return 0;
}

int fds(int a){

	if (a == 0){
		return 1;
	}
	else{
		return fds(a-1)*a;

	}
}
