#include <stdio.h>
    int main(){
        int num, soma;
        int fatorial = 1;
        printf("Digite um numero: \n");
        scanf("%d", &num);
        soma = 1;

        while (soma <= num) {
            fatorial = fatorial * soma;
            soma = soma + 1;
        }
        printf("O fatorial de %d e %d\n",num, fatorial);

        return (0);
    }