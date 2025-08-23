#include <stdio.h>
#include <stdlib.h>

int main (){
	int N;
	int somatorio = 0;
	printf("escolha um valor N inteiro para o somatorio em (i^2).\n");
	scanf("%d", &N);
	while (0 != N){
		somatorio += (N*N);
		N = N - 1;
	}
	printf("somatorio e igual a: %d \n", somatorio);
	system("pause");
	return 0;
}	
