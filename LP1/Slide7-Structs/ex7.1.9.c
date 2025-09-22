/* Um jogo possui 10 personagens, cada um com as seguintes características:
Um número que representa a sua "identidade".
Um posição (x,y) no espaço bi-dimensional.
Uma quantidade de pontuação (inicialmente 0).
Crie uma struct para representar um personagem.
A posição também deve ser uma struct.
Crie um vetor com 10 personagens. */

#include <stdio.h>

//personagem: identidade, posição (x,y) e pontuação.

struct Posicao{
	int x;
	int y;

};

struct Personagem{
	int identidade;
	struct Posicao pos;
	int pontuacao;
};


struct Personagem preenche (struct Personagem vet[], int n){
	
	int i = 0;
	while (i<n){
		printf("preencha id vet[%d]: \n", i);
		scanf("%d", &vet[i].identidade);
		printf("preencha posicao x vet[%d]: \n", i);
		scanf("%d", &vet[i].pos.x);
		printf("preencha posicao y vet[%d]: \n", i);
		scanf("%d", &vet[i].pos.y); 
		printf("preencha pontuacao vet[%d]: \n", i);
		scanf("%d", &vet[i].pontuacao);
		i++;
	}

}

int main (void){
	int i = 0;
	struct Personagem vet[10];
	preenche(vet, 10);

	// printar todos os elementos do vetor
	while (i<10){
		printf("id: %d, x: %d, y:%d, pontuacao: %d \n",
			       	vet[i].identidade, vet[i].pos.x, vet[i].pos.y, vet[i].pontuacao);
		i++;
	}
	i = 0;

}

