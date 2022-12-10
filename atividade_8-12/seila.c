#include <stdio.h>
#define N 5

void getstr(char * str, int nchar);

int main(void){

    char s[N];
    printf("escreva uma mensagem: ");
    scanf("%s",s);
    printf("voce entrou com: %s\n", s);
    return 0;
}

void getstr(char * str, int nchar){
    char c;int i = 0;
    for (i = 0;i<nchar;i++){
        c = getchar();
        if(c!='\n'){
            str[i] = c;
        }else{
            break;
        }
    }
    str[i] = '\0';
}