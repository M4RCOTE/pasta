/*
 * Arquivo: racionais.c
 * Data criação 05/01
 * Autor: Marco Túllio
 */

#include <stdio.h>
#include <string.h>

typedef
    struct Rac {
        int num, dem;
    }
Rac;

int mdc(int a, int b);
Rac seila(Rac q1);

int main(void) {
    Rac q1;
    Rac q2;
    int a, b;
    printf("numerador do primeiro racional: ");
    scanf("%d", &q1.num);
    printf("denominador do primeiro racional: ");
    scanf("%d", &q1.dem);
    printf("numerador do segundo racional: ");
    scanf("%d", &q2.num);
    printf("denominador do segundo racional: ");
    scanf("%d", &q2.dem);

    q1 = seila(q1);
    q2 = seila(q2);


    printf("q1: %d/%d\n", q1.num, q1.dem);
    printf("q2: %d/%d\n", q2.num, q2.dem);

    Rac soma, mult, div, sub;

    soma.num = (q1.num * q2.dem)+ (q2.num * q1.dem);
    soma.dem = (q1.dem * q2.dem);

    sub.num = (q1.num * q2.dem)-(q2.num * q1.dem);
    sub.dem = (q1.dem * q2.dem);

    mult.num = (q1.num * q2.num);
    mult.dem = (q1.dem * q2.dem);

    div.num = (q1.num * q2.dem);
    div.dem = (q1.dem * q2.num);

    soma = seila(soma);
    sub = seila(sub);
    mult = seila(mult);
    div = seila(div);


    printf("q1+q2: %d/%d\n", soma.num, soma.dem);
    printf("q1-q2: %d/%d\n", sub.num, sub.dem);
    printf("q1*q2: %d/%d\n", mult.num, mult.dem);
    printf("q1/q2: %d/%d\n", div.num, div.dem);


    return 0;
}

int mdc(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return mdc(b, a%b);
    }
}

Rac seila(Rac q1){
    int a;
    if (q1.num< 0){
        a = mdc(-q1.num, q1.dem);
    }
    else if (q1.dem <0){
        a = mdc(-q1.num, q1.dem);
    }
    else if (q1.num< 0 && q1.dem <0){
        a = mdc(-q1.num, -q1.dem);
    }
    else{
        a = mdc(q1.num, q1.dem);
    }

    q1.num = q1.num/a;
    q1.dem = q1.dem/a;

    if(q1.num == 0){
        q1.dem = 1;
    }

    return q1;

}