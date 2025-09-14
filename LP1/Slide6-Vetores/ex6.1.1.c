#include <stdio.h>

void preenche (int *vetor, int n){
    int i = 0;
    int x;
    
    while (i < n){
        printf("digite um valor para o índice %d do vetor \n", i);
        scanf("%d", &x);
        *(vetor+i) = x;
        i++;
    }
}

float media(int *vetor, int n){
    float valor = 0;
    for (int i = 0; i<n; i++){
        valor += *(vetor+i);
    }

valor = valor / n;
    
    
    return valor;
}


int main (void) {
    int vec[5];
    preenche(vec, 5);
       
    //print testando função 
    for (int i=0; i<5; i++){
        printf("%d ", *(vec + i));
    
    } 
    
    printf("média: %.2f \n", media(vec, 5));
    
}
