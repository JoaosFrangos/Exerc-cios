/*
    Crie uma struct qualquer.
        Seja criativo!
    Crie uma função preenche que receba um ponteiro para uma variável da struct criada e leia os campos para a variável passada. Exemplo:

struct T t;
preenche(&t);
printf("A=%d, B=%d\n", t.a, t.b);
*/


// Determinar quantidade de alunos que usam navegação por 3 botoes ou por gestos em seu celular, em uma parte da turma de LP1.

#include <stdio.h>


struct navegacao {
	int botoes3;
	int gestos;
};


void preenche(struct navegacao* univ){

	printf("preencha o campo de 3 botoes: \n");
	scanf("%d", &(*univ).botoes3);
	printf("preencha o campo de gestos: \n");
	scanf("%d", &univ->gestos);

}

int main (void){

	struct navegacao uerj;
	preenche(&uerj);
	printf("3 botoes: %d, gestos: %d \n", uerj.botoes3, uerj.gestos);

}
