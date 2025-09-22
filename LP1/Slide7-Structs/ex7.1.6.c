/*
    Declare uma struct para representar as características/propriedades de um atleta do seu esporte favorito.
    Crie uma função que exiba as propriedades de maneira bem organizada e formatada.
    Crie três exemplos de atletas variando as propriedades e teste a função de exibição. */

#include <stdio.h>

struct corredor {

	int resistencia;
	int aceleracao;
	int velocidade;
	int folego;
};	

int propriedades(struct corredor p1){
	
	printf("resistencia: %d, aceleracao: %d, velocidade: %d, folego: %d \n",
			p1.resistencia, p1.aceleracao, p1.velocidade, p1.folego);
	
}

int main (void){
	struct corredor joao = {80, 70, 60, 75};
	struct corredor vinicius = {100, 100, 100, 100};
	struct corredor william = {60, 85, 90, 55};
		
	printf("joao: \n");
	propriedades(joao);
	printf("vinicius: \n");
	propriedades(vinicius);
	printf("william: \n");
	propriedades(william);

}
