#include <stdio.h>
#include <stdlib.h>

int main() {

	float velo;
	printf("Digite sua velocidade em milhas por hora: \n");
	scanf("%f", &velo);
	velo = (velo*1.6);

	if (80.0 <= velo && velo <= 100.0){
		printf("voce esta em %.2f km/h, mantenha a velocidade. \n", velo);
	}
	if (velo < 80.0){
		printf("voce esta em %.2f km/h, acelere. \n", velo);
	}
	if (velo > 100.0){
		printf("voce esta em %.2f km/h, desacelere. \n", velo);
	}
	system("pause");
	return 0;

}
