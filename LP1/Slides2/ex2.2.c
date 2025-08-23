#include <stdio.h>
#include <stdlib.h>
int main (void){

	int val1;
	int val2;
	printf("Digite um valor: \n");
	scanf("%d", &val1);
	printf("Digite outro valor: \n");
	scanf("%d", &val2);
	if (val1 > val2) {
		printf("%d e maior do que %d \n", val1, val2);
	} 
	if (val2 > val1) {
	printf("%d e maior do que %d \n", val2, val1);
	}
	if (val1 == val2){
		printf("os valores sao iguais.\n");
	}
	system("pause");
	return 0;
}
