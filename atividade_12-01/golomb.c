/*
 * Arquivo: golomb.c
 * Data criação 12/01
 * Autor: Marco Túllio
 */

#include <stdio.h>
#include <stdlib.h>

int fun(int n);
double media(int *v, int b, int a);


int main(int argc, char** argv){
	
    int *v, n, a, b, aux;

    printf("a:\n");
    scanf("%d%*c", &a);

    printf("b:\n");
    scanf("%d%*c", &b);

    if(b < a) { aux = a; a = b; b = aux; };

    v = malloc (b+1 * sizeof (int ));

    for(int i=0; i<=b; i++){       
        v[i] = fun(i);
    }

    printf("primeiro: %d\n", v[a]);
    printf("último: %d\n", v[b]);
    printf("média: %lg\n", media(v, b, a));
	
	free(v);

	return 0;
}

int fun(int n){

    if(n ==0){
        return 1;
    }
    
    return 1+ fun(n - fun(fun(n-1)-1));
}

double media(int *v, int b, int a){
    double s = 0;
    double r;   

    for(int i=a; i<=b; i++){       
        s = s+v[i];
    }

    r = s/(b+1-a);
    return r;
}


