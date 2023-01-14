/*
 * Arquivo: mediaimpares.c
 * Data criação 12/01
 * Autor: Marco Túllio
 */

#include <stdio.h>
#include <stdlib.h>

double media(int *n, int a, int s);

int main(int argc, char** argv){
	
    int *n,a,s;
    double r;

    printf("escreva o a:\n");
    scanf("%d%*c", &a);
    printf("escreva o s:\n");
    scanf("%d%*c", &s);
    n = malloc (a * sizeof (int ));

    r = media(n, a, s);

    printf("%lg\n", r);

    free(n);

	return 0;
}

double media(int *n, int a, int s){
    int s1 = 0;
    double r;
    if(s %2 == 0){
        s = s+1;
    }

    for(int i=0; i<a; i++){
        n[i] = s;
        if (i == a-2){
            printf("%d\n", n[i]);
        }
        s1 = s1+n[i];
        s=s+2;
    }

    r = s1/a;
    return r;
}

