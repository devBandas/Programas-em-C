#include <stdio.h>
    int main(){
        float salario, salarionovo;
        printf("Digite seu salario:");
        scanf("%f", &salario);
        salarionovo = ((salario * 0.05) + salario);
        if (salario <= 750){
            salarionovo = (salarionovo + 100);
            printf("Seu novo salario e %f", salarionovo);
        } else{ 
            printf("Seu novo salario e %f", salarionovo);
             }
        return(0);
        

    }