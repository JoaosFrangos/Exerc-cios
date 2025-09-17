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

int main (void){
        char string[50];
        printf("escreva sua string: \n");
        scanf("%s", string);
        printf("tamanho: %d \n", tam(string));
}
