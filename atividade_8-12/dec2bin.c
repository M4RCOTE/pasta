/*
 * Arquivo: dec2bin.c
 * Data criação: 08/12
 * Autor: Marco Túllio
 */
#include <stdio.h>
#define N 64

int main(int argc, char** argv){
	
	char s[N];long long int num;int r;
    printf("escreva um número: ");
    scanf("%lld",&num);
    
    for(int i = 63; i>=0;i--){
        r = num >> i;
        if(r & 1){
            s[N-1-i] = 1;
        }else{
            s[N-1-i] = 0;
        }
    }
    int j = 0;
    for (int i =0;i<64;i++){
        if(s[i] == 1){
            j = 1;
        }
        if(j != 0){
            printf("%d",s[i]);
        }
    }
    printf("\n");
	return 0;
}
