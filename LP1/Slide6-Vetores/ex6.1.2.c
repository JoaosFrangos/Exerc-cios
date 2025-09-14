/*
    Crie um vetor vet de 5 posições.
    Leia 5 números e guarde-os em vet.
    Exiba todos os números de vet.
    Leia um outro número I.
    Remova o valor de vet no índice I.
        Mantenha o vetor sem buracos!
        As posições vazias devem ser preenchidas com 0.

Exemplo:

| 90 | 55 | 15 | 70 | 10 |

Após remover I=2:

| 90 | 55 | 70 | 10 |  0 |

*/



#include <stdio.h>

int main (){

	int vet[5];
	int i = 0;
	int x;
	//construção vetor
	while (i<5){
		printf("digite um valor para o indice %d do vetor: \n", i);
		scanf("%d", &x);
		*(vet+i) = x;
		i++;
	}

	//print antes
	i = 0;	
	while (i<5){
		printf("%d ", *(vet+i)); 
		i++;
	}
	printf("\n");
	
	//escolher indice
	printf("Escolha um indice (0-4) para remover o elemento do vetor: \n");
	scanf("%d", &x);
	
	//remoção
	i = 0;
	while (x+i<4){
		vet[x+i] = vet[x+1+i];	
		i++;
	}
	vet[4] = 0;
	
	//print após
	i = 0;
	while (i<5){
		printf("%d ", *(vet+i)); 
		i++;
	}
	printf("\n");
	
}
