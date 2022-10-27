/*
 * Arquivo: base.c
 * Data criação
 * Autor: Igor Peretta
 * Meu primeiro programa em C
 */
#include <stdio.h>


int main(int argc, char** argv){
	
	for(int i=1; i < argc; i++){
		printf("%s\n", argv[i]);
	}
	printf("hello world\n");
	return 0;
}
