#include <stdio.h>
    int main(){
        float peso, h, imc;
        scanf("%f, %f",&peso, &h);
        imc = (peso / (h * h));
        if (imc < 25){
            printf("Normal, baixo");
        }   
        if (imc < 30 && imc >= 25){
            printf("Sobrepeso, pouco aumentado");
        }
        if (imc < 35 && imc >=30){
            printf("Obeso classe 1, moderado");
        }
        if (imc < 40 && imc >= 35){
            printf("Obeso classe 2, grave");
        }
        if (imc >= 40){
            printf("Obeso classe 3, muito grave");
        }
        return (0);
    }           