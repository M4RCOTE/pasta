/*
 * Arquivo: aleatorios.c
 * Data criação 12/01
 * Autor: Marco Túllio
 */

#include <stdio.h>
#include <stdlib.h>

double media(int *v, int n);
int max(int *v, int n);
int min(int *v, int n);

int main(int argc, char** argv){
	
    int *v, n;

    printf("tamanho de v:\n");
    scanf("%d%*c", &n);

    v = malloc (n * sizeof (int ));
    srand(n);

    for (int i = 0; i<n;i++){
        v[i] = rand() % n;
    }

    printf("min: %d\n", min(v, n));
    printf("max: %d\n", max(v, n));
    printf("média: %lg\n", media(v, n));


	return 0;
}

int max(int *v, int n){
    int m = v[0];
    for(int i=0; i<n; i++){        
        if (m<v[i]){
            m = v[i];
        }
    }
    return m;
}

int min(int *v, int n){
    int m = v[0];
    for(int i=0; i<n; i++){        
        if (m>v[i]){
            m = v[i];
        }
    }
    return m;
}

double media(int *v, int n){
    double s = 0;
    double r;   

    for(int i=0; i<n; i++){       
        s = s+v[i];
    }

    r = s/n;
    return r;
}

