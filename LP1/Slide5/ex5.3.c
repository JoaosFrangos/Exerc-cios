#include <stdio.h>

int compra(int *conta, int valor){
        *conta -= valor;
        return 0;
}

int main(void){

	
	int compras[] = {100, 50, 80, 30, 20};
       	int conta1, conta2;
        int *pconta1 = &conta1;
        int *pconta2 = &conta2;
	int i;

        printf("Digite o saldo da conta 1: \n");
        scanf("%d", &conta1);
        printf("Digite o saldo da conta 2: \n");
        scanf("%d", &conta2);

	for (i=0; i<5; i++){
		printf("valor da compra: %d\n", compras[i]);
		if (conta1 >= conta2){
			compra(pconta1, compras[i]);
		} else {
			compra(pconta2, compras[i]);
		}
		printf("compra %d: conta 1 %d, conta 2 %d \n",i , conta1, conta2);
	}
}
