/*
 * Arquivo: reverteString.c
 * Data criação: 08/12
 * Autor: Marco Túllio
 */
#include <stdio.h>
#include <string.h>
#define N 50

int main(int argc, char** argv){
	
	char s[N];int n;
    printf("escreva uma mesnsagem: ");
    fgets(s,N,stdin);

    if(s[strlen(s) - 1]=='\n'){
        s[strlen(s)-1] = '\0';
    }
    
    int i = 0, a = 0;


    for (i = 0; i<N;i++){
        if(s[i] == 0){
            n = i;
            break;
        }
        else if(s[i]>90){
            s[i] = s[i] - 32;
        }
    }
    
    for(i = n-1; i>=0;i--){
        printf("%c", s[i]);
    }
    printf("\n");

    
	return 0;
}
