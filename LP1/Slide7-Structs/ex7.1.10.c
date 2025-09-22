/* Crie uma função que leia um personagem (use a struct do exercício anterior).
A função deve usar uma função que lê a posição.
Crie um loop para ler todos os 10 personagens
Desenhe um mapa do jogo.
Use funções auxiliares!
Exemplo:
   0 1 2 3 4 5 6 7 8 9

0          8
1    0
2 
3              3
4 
5                  7
6      2
7 
8          9
9                  5		*/

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


void Preenchepos (struct Personagem vet[], int n){

	printf("preencha posicao x vet[%d]: \n", n);
	scanf("%d", &vet[n].pos.x);
	printf("preencha posicao y vet[%d]: \n", n);
	scanf("%d", &vet[n].pos.y);
}

void preenche (struct Personagem vet[], int n){
	
	printf("preencha id vet[%d]: \n", n);
	scanf("%d", &vet[n].identidade);
	Preenchepos(vet, n);
	printf("preencha pontuacao vet[%d]: \n", n);
	scanf("%d", &vet[n].pontuacao);
}

int main (void){
	int i = 0;
	struct Personagem vet[10];
	// loop ler 10 personagens
	while (i<10){
		preenche(vet, i);
		i++;
	}
	i = 0;

	// printar todos os elementos do vetor
	while (i<10){
		printf("id: %d, x: %d, y:%d, pontuacao: %d \n",
			       	vet[i].identidade, vet[i].pos.x, vet[i].pos.y, vet[i].pontuacao);
		i++;
	}


	//criação do mapa
	i = 0;
	int j = 0;
	char mapa[10][10];
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			mapa[i][j] = ' ';
		
		}
	}
	
	/*
	//preencher mapa incorreto
	for (i = 0; i<10; i++){
		for(j = 0; j<10; j++){
			if (i = vet[i].pos.x || j = vet[i].pos.y)
				mat[i][j] = i
		}
	
	}	*/
	//preencher mapa
	i = 0;
	while(i<10){
		mapa[vet[i].pos.x][vet[i].pos.y] = '0' +  i;
		i++;
	}
	
	printf("   ");
	for (int i=0; i<10; i++){
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 0; i<10; i++){
		printf("%d  ", i);
	       for(int j = 0; j<10; j++){
		       printf("%c ", mapa[j][i]);
	       
	       }	
		printf("\n");
	}
	printf("\n");

}

	



