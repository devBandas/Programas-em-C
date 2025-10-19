#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("Triangulo\n");
        printf("1. Entrar\n");
        printf("0. Sairn");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                char caractere;
                int largura, altura;

                printf("\nDigite o caractere para o desenho: ");
                scanf(" %c", &caractere);

                printf("Digite a largura do retangulo: ");
                scanf("%d", &largura);

                printf("Digite a altura do retangulo: ");
                scanf("%d", &altura);

                if (largura <= 0 || altura <= 0) {
                    printf("Erro: A largura e a altura devem ser numeros positivos.\n");
                } else {
                    printf("\nRetangulo de %dx%d com o caractere '%c':\n", largura, altura, caractere);

                    for (int i = 0; i < altura; i++) {

                        for (int j = 0; j < largura; j++) {
                            printf("%c", caractere);
                        }
                        printf("\n");
                    }
                }
                break; 
            }
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}