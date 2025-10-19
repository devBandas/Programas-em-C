#include <stdio.h>
    int main(){
        float a, b, faltas, media;
        scanf("%f, %f, %f", &a, &b, &faltas);
        media = ((a+b) / 2);
        if (media < 5.0 || faltas > 20){
            printf("Reprovado");
        }else{
            printf("Aprovado");
        }
        return(0);
    }