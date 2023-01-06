/*
 * Arquivo: racionais.c
 * Data criação 05/01
 * Autor: Marco Túllio
 */

//Usei uma função pra limpar o buffer e só funciona no linux pelo que lí.

#include <stdio.h>
#include <string.h>
#define N 100


typedef
    struct Data {
        int dia, mes, ano;
    }
Data;

typedef
    struct Comprimento {
        int metros;
        char centimetros[2];
    }
Comprimento;

typedef
    struct Pessoa {
        char nome[N];
        Data aniversario;
        Comprimento altura;
        float peso;
    }
Pessoa;

const char strmes[13][4] = {
    "", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN",
    "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
};

int mdc(int a, int b);
int cm(int x);

int main(void) {

    int n;char s;

    printf("quantas pessoas serão cadastradas:");
    scanf ("%d%c", &n, &s);

    Pessoa cad[n];

    for(int i = 0; i<n; i++){

        printf("Escreva o nome: ");
        fgets(cad[i].nome,N,stdin); 

        if(cad[i].nome[strlen(cad[i].nome) - 1]=='\n'){
            cad[i].nome[strlen(cad[i].nome)-1] = '\0';
        }   

        printf("Entre com uma data no formato D/M/YYYY (e.g. 3/1/1970): ");
        scanf("%d/%d/%d", &cad[i].aniversario.dia, &cad[i].aniversario.mes, &cad[i].aniversario.ano);

        printf("Entre com uma altura: ");
        scanf("%d.%c%c", &cad[i].altura.metros, &cad[i].altura.centimetros[0], &cad[i].altura.centimetros[1]);

        __fpurge(stdin);

        printf("Entre com um peso: ");
        scanf("%f%c", &cad[i].peso, &s);

    } 
    printf("\nLista de cadastrados:\n");
    for(int i = 0; i<n; i++){
        printf("%s; %02d%s%04d; %dm%c%c; %.1fkg\n", cad[i].nome, cad[i].aniversario.dia, strmes[cad[i].aniversario.mes], cad[i].aniversario.ano, cad[i].altura.metros, cad[i].altura.centimetros[0], cad[i].altura.centimetros[1], cad[i].peso);
    }      
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

int cm(int x) {
    if(x < 10) return x*10;
    if(x > 99) return cm(x/10);
    return x;
}