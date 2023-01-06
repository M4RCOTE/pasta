/*
 * Arquivo: altura.c
 * Data criação 05/01
 * Autor: Marco Túllio
 */

#include <stdio.h>

typedef
    struct Comprimento {
        int metros;
        char centimetros[2];
    }
Comprimento;

int cm(int x);

int main(void) {
    Comprimento altura; int a;

    printf("Entre com uma altura: ");
    scanf("%d.%c%c", &altura.metros, &altura.centimetros[0], &altura.centimetros[1]);

    printf("Altura %dm%c%c\n", altura.metros, altura.centimetros[0], altura.centimetros[1]);
    return 0;
}

int cm(int x) {
    if(x < 10) return x*10;
    if(x > 99) return cm(x/10);
    return x;
}