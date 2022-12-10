/*
 * Arquivo: contaVogais.c
 * Data criação: 08/12
 * Autor: Marco Túllio
 */
#include <stdio.h>
#define N 50

int main(int argc, char** argv){
	
	char s[N];
    printf("escreva uma palavra: ");
    scanf("%s",s);
    int i = 0, a = 0;

    while(0==0){
        if(s[i] == 0){
            break;
        }
        else if(s[i] == 65 || s[i] == 69 || s[i] == 73 || s[i] == 79 || s[i] == 85||s[i] == 97||s[i] == 101||s[i] == 105||s[i] == 111||s[i] == 117){
            a = a + 1;
        }
        i=i+1;
    }
    printf("A palavra %s possui %d vogais\n", s, a);

    
	return 0;
}
