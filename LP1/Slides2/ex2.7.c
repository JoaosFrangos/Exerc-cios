#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char nome[30];
    char nomeMax[30];
    char nomeMin[30];
    int pont = 0;
    int pontMax = 0;
    int pontMin = 0;
    int vit = 0;
    int emp = 0;
    int der = 0;
    int i;    
    
    
    for (i = 1; i < 21; i++) {
        printf("digite o nome do time: \n");
        scanf("%s", nome);
        printf("digite o numero de vitorias: \n");
        scanf("%d", &vit);
        printf("digite o numero de empates: \n");
        scanf("%d", &emp);
        printf("digite o numero de derrotas: \n");
        scanf("%d", &der);
        pont = (vit*3)+(emp);
        if (pontMin == 0) {
            pontMin = pont;
            strcpy(nomeMin, nome);   
        }             
        if (pont > pontMax) {
            pontMax = pont;
            strcpy(nomeMax, nome);
        }
        if (pont < pontMin) {
            pontMin = pont;
            strcpy(nomeMin, nome);
           
        }
        printf("%s maior pontuador com %d pontos. \n", nomeMax, pontMax);
        printf("%s menor pontuador com %d pontos. \n", nomeMin, pontMin);    
    }   
    system("pause");    
    return 0;

}
