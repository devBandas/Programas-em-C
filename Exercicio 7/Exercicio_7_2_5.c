#include <stdio.h>

void delay_simples() {
    for (long i = 0; i < 90000000; i++);
}
int main() {
    int opcao;
    do {
        printf("Simulador \n");
        printf("1. Iniciar uma nova simulacao\n");
        printf("0. Sair do programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                int s0, v, t_final;
                const int LARGURA_ESTRADA = 60;

                printf("Simulacao\n");
                printf("Digite a posicao inicial (So): ");
                scanf("%d", &s0);
                printf("Digite a velocidade (V): ");
                scanf("%d", &v);
                printf("Digite o tempo total da simulacao (T): ");
                scanf("%d", &t_final);

                printf("\nIniciando simulacao...\n\n");

                for (int t = 0; t <= t_final; t++) {
                    int posicao_atual = s0 + v * t;

                    if (posicao_atual < 0) {
                        posicao_atual = 0;
                    }
                    if (posicao_atual > LARGURA_ESTRADA) {
                        posicao_atual = LARGURA_ESTRADA;
                    }

                    printf("T=%2ds P=%3dm |", t, posicao_atual);

                    for (int i = 0; i < posicao_atual; i++) {
                        printf(" ");
                    }

                    printf("__{|o|}_ \n");

                    delay_simples();
                }

                printf("\n--- Simulacao Finalizada! ---\n");
                break;
            }
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}