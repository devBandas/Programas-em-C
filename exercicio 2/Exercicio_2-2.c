#include <stdio.h>

    int main (){
        float num1, num2;

        printf("Digite dois Numeros ") ;
        scanf("%f", &num1) ;
        scanf("%f", &num2) ;

        if (num1 > num2) { 
            printf("O numero maior e o %f\n", num1);
        } else{
            printf("O numero maior e o %f\n", num2) ;
        }
        return (0);
    } 