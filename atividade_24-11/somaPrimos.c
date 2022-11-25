/*
 * Arquivo: primo.c
 * 24/11
 * Autor: Marco Túllio
 */

#include <stdio.h>
#include <stdbool.h>

bool primo(int a);

int main(int argc, char** argv){

    int a,b,s;
    s = 0;
    printf("coloque o intervalo [a,b]:");
    scanf("%d %d", &a, &b);
	
	for(int i=a; i <= b; i++){
		if(primo(i) && i !=1){
            s = s + i;
        }
	}
	printf("%d\n", s);
	return 0;
}

bool primo(int a){

    for(int i=2; i<a;i++){
        if(a%i == 0){
            return false;
        }
    }
    return true;
}