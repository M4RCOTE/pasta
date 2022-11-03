#include <stdio.h>


int main(){

        int a, b;
	
	printf("digite um num: ");
        scanf("%d", &a);
	printf("digite outro num: ");
        scanf("%d", &b);

	printf("%d+%d=%d", a, b, a+b);
	printf(", %d-%d=%d", a, b, a-b);
	printf(", %d*%d=%d", a, b, a*b);
	printf(", %d/%d=%d", a, b, a/b);
	printf(", %d%%%d=%d\n", a, b, a%b);

        return 0;
}

