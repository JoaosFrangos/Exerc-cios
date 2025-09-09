/* Crie uma função troca que receba dois ponteiros para inteiros p1 e p2 e troque os conteúdos por eles apontados:

int x=10, y=20;
troca(&x, &y);              // definir essa funcao
printf("%d %d\n", x, y);    // 20 10 */
			    	
#include <stdio.h>

void troca(int *ponteiro1, int *ponteiro2){
	int meio = *ponteiro1;
	*ponteiro1 = *ponteiro2;
	*ponteiro2 = meio;
}


int main (void) {

	int x=10, y=20;
	int *px = &x;
	int *py = &y;
	printf("antes %d %d \n", *px, *py);
	troca(px, py);
	printf("depois %d %d \n", *px, *py);


}


