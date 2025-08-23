#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int n1, n2;
	printf("Digite o primeiro número(inteiro pfvr: \n ");
	scanf("%d", &n1);
	
	printf("Digite o segundo número(inteiro dnv pfvr): \n");
	scanf("%d", &n2);

	if (n1 > n2){
		for (n1; n1>n2+1; n1--){
			printf("%d \n", n1-1);
		}
	}
	if (n2 > n1){
		for(n2; n2>n1+1; n2--){
			printf("%d \n", n2-1);
		}
	} else {
		printf("Os valores sao iguais. \n");
	}
	
}


