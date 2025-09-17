/*Implemente a função concatena:
Recebe uma string de destino
Recebe duas strings de origem
Junta em destino as duas strings de origem (sobrescrevendo o conteúdo de destino, se houver)
void concatena (char* d, char* o1, char* o2);
A implementação deve usar a função tamanho da questão 3.

Obviamente, não use a função strcat. */

#include <stdio.h>
#include <stdbool.h>


int tam (char *str){
        int count = 0;
        int i = 0;
        while (true){
                if(str[i] == '\0'){
                        break;
                }
                i++;
                count++;
        }
        return count;
}


char* concatena (char* d, char* o1, char* o2){

	int td = tam(o1) + tam(o2);
	int t1 = tam(o1);
	int t2 = tam(o2);
	int i = 0;
	while (i<t1){
		d[i] = o1[i];
	       	i++;	
	
	}
	i = 0;
	while (td>(i+t1)){
	
		d[i+t1] = o2[i];
		i++;
	}
	d[t1+t2]= '\0';
	return d;

}

int main (void){

	char txt1[51];
	char txt2[51];
	printf("digite sua primeira string (max 50 caracteres): \n");
	scanf(" %[^\n]", txt1);
	printf("digite sua segunda string (max 50 caracteres): \n");
	scanf(" %[^\n]", txt2);
	char txt3[tam(txt1)+tam(txt2)];

	printf("uniao: %s \n", concatena(txt3, txt1, txt2));

}
