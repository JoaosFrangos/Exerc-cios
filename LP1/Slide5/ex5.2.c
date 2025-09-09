/*Uma conta é representada por um inteiro que guarda o saldo total:

int minha_conta;

Uma compra na internet é efetuada por uma chamada compra(conta, valor). A função recebe um ponteiro para uma conta e um valor a ser debitado:

void compra (int* conta, int valor) {
    <...>
}

Um casal tem duas contas e quer usar a conta com maior saldo para fazer uma compra de 500 reais. Faça um programa que leia o saldo das duas contas e efetue a compra corretamente. Ao final, o programa deve exibir os saldos das duas contas.
*/

#include <stdio.h>

int compra(int *conta, int valor){
	*conta -= valor;
	return 0;
}

int main () {
	int conta1, conta2;
	int *pconta1 = &conta1; 
	int *pconta2 = &conta2;
	
	printf("Digite o saldo da conta 1: \n");
	scanf("%d", &conta1);
	printf("Digite o saldo da conta 2: \n");
	scanf("%d", &conta2);

	if (conta1 > conta2){
		compra(pconta1, 500);
	}
	if (conta2 > conta1){
		compra(pconta2, 500);
	}
	if (conta1 == conta2){
		printf("Valores iguais. \n");
	}
	printf("conta 1 %d, conta 2 %d", conta1, conta2);
}


