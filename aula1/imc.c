#include <stdio.h>


int main(){

	float a;
	float b;
	printf("peso: ");
	scanf("%f", &a);
	printf("altura: ");
	scanf("%f", &b);
	printf("\n");
	float imc = a/(b*b);

	if(imc < 16){
		printf("%.2f Perigo de vida\n", imc);
	}else if(imc <17){
		printf("%.2f Muito abaixo do peso\n", imc);
	}else if(imc < 18.5){
		printf("%.2f Abaixo do peso\n", imc);
	}else if(imc < 25){
		printf("%.2f Peso normal\n", imc);
	}else if(imc < 30){
		printf("%.2f Acima do peso\n", imc);
        }else if(imc < 35){ 
         	printf("%.2f Obesidade grau I\n", imc);
        }else if(imc < 40){
		printf("%.2f Obesidade grau II\n", imc);
	}else{
		printf("%.2f Obesidade grau III\n", imc);
	}
	return 0;

}
