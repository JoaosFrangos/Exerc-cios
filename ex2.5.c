#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	int soma = 0;
	while (num != 0) {
		printf("digite um numero inteiro a ser somado ou 0 para encerrar a soma: \n");
		scanf("%d", &num);
		soma += num;
	}
	printf("sua soma total e igual a %d. \n", soma);
	system("pause");
	return 0;
}
