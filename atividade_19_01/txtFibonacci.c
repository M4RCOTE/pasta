/*
 * Arquivo: txtFibonacci.c
 * Data criação 19/01
 * Autor: Marco Túllio
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    long long int *v;
    FILE *pont_arq;
    
    pont_arq = fopen("fibonacci.txt", "w");
    printf("quantidade de elementos de v:\n");
    scanf("%d%*c", &n);

    v = malloc (n * sizeof (long long int ));

    if(n > 0){
        v[0] = 0;
        fprintf(pont_arq, "%lld\n", v[0]);
    }
    if(n > 1){
        v[0] = 0;
        v[1] = 1;
        fprintf(pont_arq, "%lld\n%lld\n", v[0], v[1]);

        for (int i = 2; i<n;i++){
            v[i] = v[i-1] + v[i-2];
            fprintf(pont_arq, "%lld\n", v[i]);
        }
    }

    printf("%lld\n", v[n-1]);

    fclose(pont_arq);

    free(v);
    return 0;
}
