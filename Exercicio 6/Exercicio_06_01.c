#include <stdio.h>
    int main(){
        float soma, media, num, cont;
        printf("Digite os numeros: ");
        cont = 0;
        soma = 0;
        while (cont != 10){
            scanf("%f", &num);
            soma = num + soma;
            cont = cont + 1;
        }
        media = soma / 10;
        printf("A media e %f", media);
        return(0);
    }