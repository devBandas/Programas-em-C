#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("Calculadora de Fatorial\n");
        printf("1. Entrar\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                int n;
                float resultado = 1;

                printf("\nDigite um numero: ");
                scanf("%d", &n);
                if (n == 0) {
                    printf("0! = 1\n");
                }
                else if (n == 1) {
                    printf("1! = 1\n");
                }
                else {
                    printf("%d! = ", n);

                    for (int i = n; i >= 1; i--) {
                        resultado = resultado * i; 
                        printf("%d", i);
                        if (i > 1) {
                            printf(" x ");
                        }
                    }
                    printf(" = %f\n", resultado);
                }
                break; 
            }
            case 0:
                break;
        }

    } while (opcao != 0);

    return (0);
}