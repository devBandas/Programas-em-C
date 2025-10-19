#include <stdio.h>
    int main(){
        float num, soma;
        printf("Digite os numeros: ");
        while (num != 0){
            scanf("%f", &num);
            soma = num + soma;
        }
        printf("O resultado foi de %f", soma);
        return(0);
    }