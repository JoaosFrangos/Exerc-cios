/* Baseado no exercício 1, crie uma função preencheB que leia as propriedades de um personagem para o valor apontado pelo ponteiro recebido:

void preencheB (struct Personagem* p) {
    ...  // complete aqui
}

void main (void) {
    struct Personagem p1;
    preencheB(&p1);

    struct Personagem p2;
    preencheB(&p2);

    printf("(%d,%d,%d) vs (%d,%d,%d)\n",
           p1.forca, p1.energia, p1.experiencia,
           p2.forca, p2.energia, p2.experiencia);
} */

#include <stdio.h>

struct Personagem {

	int forca;
	int energia;
	int experiencia;
}


struct Personagem preencheB(struct Personagem* p) {

	printf("digite o valor da forca: \n");
	scanf("%d", (*p).forca);
	printf("digite o valor da energia: \n");
	scanf("%d", (*p).energia);
	printf("digite o valor da experiencia: \n");
	scanf("%d", (*p).experiencia);

}


int main (void) {
	printf("(%d %d %d) vs (%d %d %d) \n",
			p1.forca, p1.energia, p1,experiencia,
			p2.forca, p2.energia, p2.experiencia);
}
