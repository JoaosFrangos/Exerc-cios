/*Crie uma função preenche que receba um array bidimensional arr de inteiros com uma dimensão fixa (LxC), e preencha o array com l*c números lidos do teclado, ex:
void preenche (int arr[L][C], int l, int c);
Crie uma função media que receba um array bidimensional arr, a quantidade de linhas l, a quantidade de colunas c, e retorne a média entre todos os valores do array, ex:
float media (int arr[L][C], int l, int c);
L e C devem ser quaisquer valores constantes predefinidos.*/


#include <stdio.h>

void preenche (int linha, int coluna, int arr[linha][coluna]){
	int l = 0;
	int c = 0;
	int x;
	while (l<linha){
		c = 0;
		while (c<coluna){
			printf("elemento da linha indice: %d coluna indice: %d \n", l, c);
			scanf("%d", &x);
			arr[l][c] = x;
			c++;
		}

		l++;
	}
}


float media(int linha, int coluna, int arr[linha][coluna]){
	int l = 0;
	int c = 0;
	float media = 0;
	while (l<linha){
		c = 0;
		while (c<coluna){
			media += arr[l][c];	
			c++;
		}

	l++;
	}
	media = media/(linha*coluna);
	return media;
}



int main(void){
	int mat[3][4];
	int lin = 3;
	int col = 4;
	int i;
	int j;
	preenche(lin, col, mat);
	for(i = 0; i<3; i++){
		printf("\n");
		for(j = 0; j<4; j++){
			printf("%d ", mat[i][j]);
		}
	}
	printf("media: %.2f \n", media(lin, col, mat));
	
}
