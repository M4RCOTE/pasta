/*
 * Arquivo: palindromo.c
 * Data criação: 08/12
 * Autor: Marco Túllio
 */
#include <stdio.h>
#include <string.h>

#define N 1000

void maiusculo(char * s);
int palindromo(char *a, char *b, int j);

int main(int argc, char** argv){
	
	char s[N];char r[N];int j = 0, t = 0;


    printf("escreva uma frase: ");
    fgets(s,N,stdin);

    if(s[strlen(s) - 1]=='\n'){
        s[strlen(s)-1] = '\0';
    }    
    int ts = strlen(s) ;
    int pos[ts];
    
    maiusculo(s);

    j=0;
    for (int i =0; i<ts;i++){
        if(s[i] == 0){
            j = j+1;   
            break;
        }
        if(s[i] != 43){
            pos[j] = i;
            j = j+1;
        }
        
    }

    char r1[j+1], r2[j+1];
    for (int i =0; i<j;i++){
        r1[i] = s[pos[i]];
    }
    r1[j] = 0;

    for (int i =1; i<=j;i++){
        r2[i-1] = r1[j-i];
    }
    r2[j] = 0;

    int a = palindromo (r1, r2, j);
    if(a == 1){
        printf("Palindrono: Verdadeiro\n");
    }else{
        printf("Palindrono: Falso\n");
    }

	return 0;

}

void maiusculo(char * s){

    for (int i = 0; i<N;i++){
        if(s[i] == 0){
            break;
        }
        else if(s[i]>96 && s[i]<123){
            s[i] = s[i] - 32;
        }else if(!(s[i]>64 && s[i]<91)){
            s[i] = 43;
        }
    }
}

int palindromo(char *a, char *b, int j){
    int l = 0;
    for (int i =0; i<j;i++){
        if(a[i] == b[i]){
            l = l+1;
        }
    }
    if(l == j){
        l = 1;
    }else
    {
        l = 0;
    }

    return l;

}