#include <stdio.h>


int main(void){

	char temps[50];
	char temp;
	char count = 0;
	char i;
	float media = 0.0;
	char acima = 0;
	//variar entre -100 e 100	
	while (count < 50){
		printf("Digite um valor de temperatura: \n");
		scanf("%hhd", &temp);
		if (temp <= 100 && temp >= -100){
			temps[count] = temp ;
			count ++;
		}
	}
	for (i=0; i<50; i++){
		media += temps[i];	
	}
	media = (media / count);
	printf("A media das temperaturas vale %f. \n", media);
	for (i=0; i<50; i++){
		if (temps[i]>media){
			acima ++;
		}
	}
	printf("Existem %hhd valores acima da media. \n", acima);
}
