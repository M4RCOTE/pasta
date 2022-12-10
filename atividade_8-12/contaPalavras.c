/*
 * Arquivo: contaPalavras.c
 * Data criação: 08/12
 * Autor: Marco Túllio
 */
#include <stdio.h>
#include <string.h>

#define N 1024


int main(int argc, char** argv){
	
	char s[N];

    printf("escreva uma frase: ");
    fgets(s,N,stdin);

    if(s[strlen(s) - 1]=='\n'){
        s[strlen(s)-1] = '\0';
    }    

    int l = 0, i = 0, p = 0;
    while(0==0){
        
        if((s[i]>64 && s[i]<91) || (s[i]>96 && s[i]<123)){

            l = l + 1;
        }
        else{
            if(l>0){
                p = p + 1;
            }
            l = 0;
        }
        if(s[i] == 0){
            break;
        }
        i = i+1;
    }
    printf("qnt de palavras: %d\n", p);

	return 0;

}
