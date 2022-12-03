/*
 * Arquivo: remNegativos.c
 * Data criação 2/12
 * Autor: Marco Túllio
 */

#include <stdio.h>

int fun(int N, int a[]);


int main(int argc, char** argv){
	
    int N;
    scanf("%d", &N);
    int a[N];int *b;int s;

    for(int i=0; i < N; i++) {
        scanf("%d", a+i);
    }
    fun(N, a);

	return 0;
}
int fun(int N, int a[]){
    int s = 0;
    int pos[N];
    for(int i=0; i < N; i++) {
        if(a[i] >= 0){
            pos[s] = i;
            s = s+1;
        }
    }
    int v[s];

    for(int i=0; i < s; i++) {
        v[i] = a[pos[i]];
    }

    for(int i=0; i < s; i++) {
        printf("%d, ", v[i]);
    }
    if(s == 0){    
        printf("vazio");
    }
    printf("\n");
    return 0;
}