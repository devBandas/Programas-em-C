#include <stdio.h>
#include <math.h>
    int main (){
        float salario;
        scanf("%f", &salario);
        if (salario < 700){
            salario = salario + (salario * 0.15);
        }else{
            if (salario >= 700 && salario <= 1200){
                salario = salario + (salario * 0.1);
            }else{
                salario = salario +(salario * 0.05);
            }
        }
        printf("%f", salario);
        return(0);
    }