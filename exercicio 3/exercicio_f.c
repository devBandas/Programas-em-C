#include <stdio.h>
    int main (){
        float idade;
        scanf("%f", &idade);
        if (idade <= 7 && idade >= 5){
            printf("Infantil A");

        }if (idade <= 10 && idade >= 8){
            printf("Infantil B");

        }if (idade <= 13 && idade >= 11){
            printf("Juvenil A");

        }if (idade <=17 && idade >= 14){
            printf("Juvenil B");

        }if (idade >= 18){
            printf("Senior");
        }
        return(0);
    }