/*
 * Arquivo: contaCaracteres.c
 * Data criação: 08/12
 * Autor: Marco Túllio
 */
#include <stdio.h>
#include <string.h>

#define N 1000



int main(int argc, char** argv){
	
	char s[N];

    printf("escreva uma frase: ");
    fgets(s,N,stdin);

    if(s[strlen(s) - 1]=='\n'){
        s[strlen(s)-1] = '\0';
    }    

    int i = 0, l = 0, d = 0, o = 0;
    while(0==0){
        if(s[i] == 0){
            break;
        }else if((s[i]>64 && s[i]<91) || (s[i]>96 && s[i]<123)){
            l = l + 1;
        }else if(s[i]>47 && s[i]<58){
            d = d +1;
        }else{
            o = o +1;
        }

        i = i+1;
    }

    printf("letras: %d dígitos: %d outros: %d\n", l, d, o);
	return 0;

}
