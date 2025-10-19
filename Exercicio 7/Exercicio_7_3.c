#include <stdio.h>

int main() {
    int opcao;
    while (opcao != 0){
        int n;
        double soma = 0.0;
        printf("Serie\n");
        printf("1. Entrar\n");
        printf("0. Sair\n");
        scanf("%d", &opcao);
        switch (opcao){
            case 1:
                printf("Digite o numero de termos (N) da serie: ");
                scanf("%d", &n);
                printf("\nSerie gerada:\nS = ");
                for (int i = 1; i <= n; i++) {
                    double numerador = (2.0 * i) - 1;
                    double denominador = i * i;
                    double termo_atual = numerador / denominador;
                    if (i % 2 == 0) {
                        soma -= termo_atual;
                        printf(" - %.0f/%.0f", numerador, denominador);
                    } else {
                        soma += termo_atual;
                        if (i == 1) {
                            printf("1");
                        } else {
                            printf(" + %.0f/%.0f", numerador, denominador);
                        }
                    }
                }
                printf("\n\nSoma total da serie = %lf\n", soma);
                break;
            case 0:
                break;
        }        
    } 
    return 0;       
}