#include <stdio.h>
    int main(){
        float num, erro;
        erro = 0;
        printf("Digite o numero 1: ");
        while (num != 1) {
            scanf("%f", &num);
            if (num != 1){
                erro = erro + 1;
                printf("O numero de erros foi: %f \n", erro);
            }
            else{
                printf("Certo\n");
                printf("O numero de erros foi: %f\n", erro);
            }
        }
        return(0);
    }