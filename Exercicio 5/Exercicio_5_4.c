#include <stdio.h>
    int main(){
        int soma, num, mult;
        printf("Escreva um numero:");
        scanf("%d", &num);
        soma = 0;
        while (soma != 10){
            soma = soma + 1;
            mult = num * soma;
            printf("%d * %d = %d\n", num, soma, mult);
        }
        

        return(0);
    }