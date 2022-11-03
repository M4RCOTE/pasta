#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793115997963468544185161590576171875


int fat(int n);


int main(){

	int n;
	double x, a;
	scanf("%d", &n);
	scanf("%lf", &x);


	for(int i = 0; i<=n;i++){
		a = a + pow(-1, i) * (pow(PI*x, 2*i))/fat(2*i); 
	}
	printf("cos(%lfπ) ~ %lf \n", x, a);
	return 0;
}

int fat(int n){

	if(n == 0){
		return 1;
	}else{
		return n*fat(n-1);
	}

}
