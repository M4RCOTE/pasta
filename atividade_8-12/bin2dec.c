/*
 * Arquivo: bin2dec.c
 * Data criação: 08/12
 * Autor: Marco Túllio
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 100


int main(int argc, char** argv){
    char ent[N]; char s[N]; int pos[N];int j = 0, n = 0;int t = 0, t1=0;

    fgets(ent,N,stdin);

    if(ent[strlen(ent) - 1]=='\n'){
        ent[strlen(ent)-1] = '\0';
    }
    
    for (int i =0; i<N;i++){

        s[i] = ent[i];
        if(ent[i] == 0){
            break;
        }
        if(s[i] == '0' || s[i] == '1' || s[i] == 0){
            t1=t1+1;
        }
        t=t+1;
    }

    for (int i =0; i<t;i++){
        if(s[i] != '0' && s[i] != '1' && s[i] != 0){
            j=j+1;
        }else{
            n = n + pow(2, t1-1-i+j) * (s[i]-48);
        }
    }

    printf("número em bin: ");
    for (int i =0; i<t;i++){
        if(s[i] != '0' && s[i] != '1' && s[i] != 0){
        }else{
            printf("%d", s[i]-48);
        }
    }

    printf(" número em dec: %d\n", n);
	return 0;

}




