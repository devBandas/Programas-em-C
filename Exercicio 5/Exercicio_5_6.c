#include <stdio.h>
    int main(){
        int esc;
        printf("Digite um numero: ");
        esc = 1;
        while (esc != 0){
            scanf("%d", &esc);
            if (esc % 2 != 0){
            printf("Primo\n");
            printf("Digite um numero: ");
            }
            else{
            printf("Par\n");
            printf("Digite um numero: ");
            }
        }

        return(0);
        
    }