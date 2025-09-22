/* Crie uma struct para guardar um ponto no espaço bi-dimensional com dois inteiros x e y.
Crie uma função para preencher 1 ponto.
Na main, crie um vetor com dez pontos.
Crie uma função para preencher um vetor de pontos.
Crie uma função que receba um vetor de pontos e retorne o ponto mais distante de (0,0). */

#include <stdio.h>
#include <math.h>

struct ponto {
	int x;
	int y;
};

struct ponto preenche(){
	struct ponto p1;
	printf("Digite o valor do eixo X: \n");
	scanf("%d", &p1.x);
	printf("Digite o valor do eixo Y: \n");
	scanf("%d", &p1.y);
	return p1;
}


struct ponto distante (struct ponto v[], int n){

	float x;
	int i = 0;
	float max = 0;
	int indmax;
	while(i<n){
		x = pow(pow(v[i].x, 2) + pow(v[i].y, 2), 0.5);
		if (x >= max){
			indmax = i;
			max = x;
		}
		i++;
	}

	return v[indmax];
}



int main (void){

	struct ponto loc = preenche();
	printf("x: %d, y: %d \n", loc.x, loc.y);
	struct ponto vet[10];
	int i = 0;
	while(i < 10){
		printf("indice: %d \n", i);
		vet[i] = preenche();
		i++;
	}
	//printar
	i = 0;
	while(i<10){
		printf("elemento indice %d = x:%d, y:%d \n", i, vet[i].x, vet[i].y);
		i++;
	}

	printf("ponto mais distante = x: %d, y: %d \n", distante(vet, 10).x, distante(vet,10).y);


}







