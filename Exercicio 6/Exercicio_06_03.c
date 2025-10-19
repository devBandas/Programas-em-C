#include <stdio.h>
    int main(){
        float num, maior, menor;
        printf("Digite os numeros: ");
        maior = 0;
        while (num != -1){
            scanf("%f", &num);
            if (num == -1);

            else{
                if (maior < num){
                    maior = num;
                }else{
                    menor = num;
                }
            }    
        } 
        printf("O maior e %f e o menor e %f", maior, menor);
        return(0);
    }