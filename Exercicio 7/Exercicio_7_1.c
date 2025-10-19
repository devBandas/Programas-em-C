#include <stdio.h>
int main(){
    int n, resp, opcao;
    resp = 1;
    while (opcao != 0){
        printf("Calculadora de Fatorial\n");
        printf("1. Entrar\n");
        printf("0. Sair\n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("Digite um numero: ");
                scanf("%d", &n);
                for (int i = 1; i <= n; i++){
                    resp = resp * i;
                }
                printf("O Fatorial de %d e %d\n", n, resp);
                break;
            case 0:
                break;
        }
    }
    return(0);
}