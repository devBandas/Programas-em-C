#include <stdio.h>
    int main(){
        float num;
        printf("Digite um numero:");
        scanf("%f", &num);
        if (num == 0){
            printf("false");
        }else{
            printf("true");
        } 
        return(0);
    }