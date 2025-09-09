#include <stdio.h>
#include <stdlib.h>
/*Leia dois inteiros a e b.
Exiba os valores de a e b.
Crie um ponteiro p para a variável com o maior valor.
Através de p subtraia 50 da variável com o maior valor.
Exiba os valores de a e b novamente */

int main (){

	int a;
	int b;
	int* p;
	printf("Digite o primeiro numero: \n");
	scanf("%d", &a);
	printf("Digite o segundo numero: \n");
	scanf("%d", &b);
	printf("primeiro valor %d \n", a);
	printf("segundo valor %d \n", b);
	if (a > b){
		p = &a;
	}
	if (a < b){
		p = &b;
	}
	if (a == b){
		printf("os valores sao iguais. \n");
		exit(0);
	}
	printf("valor maior: %d \n", *p);
	*p -= 50;
	printf("valor maior menos 50: %d \n", *p);
}
