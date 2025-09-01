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

	bool x;
	int n;
	printf("Digite o numero a ser testado: \n");
	scanf("%d", &n);
	x = eh_primo(n);
	printf("primo = %d", x);
}
