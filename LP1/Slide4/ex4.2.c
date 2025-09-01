#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int num) {
	bool primo = 1;
		if (num == 2){
			primo = 1;
			return primo;
		}
		if (num <= 1){
			primo = 0;
			return primo;
		}
	for (int i=num-1; i>1; i--){
		
		if (num%i == 0){
			primo = 0;
			break;
		}
	}
	return primo;
	}

int main(void){

	int max;
	printf("digite o numero maximo: ");
	scanf("%d", &max);
	printf("primos entre %d e 1: ", max);
	for (max; max>1; max--){
	       if (eh_primo(max) == 1){
		       printf("%d ", max);
		}
	}
}
