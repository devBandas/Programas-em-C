#include <stdio.h>
#include <math.h>
    int main (){
        float salario;
        scanf("%f", &salario);
            if (salario > 7500){
                salario = salario - (salario *0.35);
            }
            else if (salario > 2500 && salario <= 7500){
                salario = salario - (salario * 0.25);
            }
            else if (salario > 1050 && salario <= 2500){ 
                salario = salario - (salario * 0.15);
            }
            else{
                salario = salario * 1 ;
            }
            printf("O salario e  %f", salario);
            return(0);
    }