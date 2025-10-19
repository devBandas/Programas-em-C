#include <stdio.h>

int main() {
    int opcao;
    do {
        printf("Progressao Geometrica\n");
        printf("1. Entrar\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1: {
                double primeiro_termo, razao, termo_atual;
                int n_termos;
                printf("\n--- Gerando uma nova PG ---\n");
                printf("Digite o primeiro termo (a1): ");
                scanf("%lf", &primeiro_termo);
                printf("Digite a razao (q): ");
                scanf("%lf", &razao);
                printf("Digite o numero de termos (N): ");
                scanf("%d", &n_termos);
                if (n_termos <= 0) {
                    printf("Erro: O numero de termos deve ser um inteiro positivo.\n");
                } else {
                    printf("\nOs %d primeiros termos da PG sao:\n", n_termos);
                    termo_atual = primeiro_termo;
                    for (int i = 0; i < n_termos; i++) {
                        printf("%g ", termo_atual);
                        termo_atual *= razao;
                    }
                    printf("\n");
                }
                break; 
            }
            case 0:
                printf("Saindo do programa...\n");
                break; 
            default:
                printf("Opcao invalida! Por favor, escolha 1 ou 0.\n");
                break; 
        }
    } while (opcao != 0); 
    return (0);
}