#include <stdio.h>
#include <stdlib.h>

int main() {
	float din;
	printf("Digite o valor em dolares: \n");
	scanf("%f", &din);
	din = (din*3.17);
	printf("Seu dinheiro vale %.2f em reais. \n", din);
	if (din <= 1000){
		printf("Bom negocio. \n");
	} else {
		printf("Mal negocio. \n");
	}
	system("pause");
	return 0;
}
