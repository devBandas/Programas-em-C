#include <stdio.h>
#include <stdlib.h> 

int main() {
    int largura_maxima = 70;
    char simbolo = '>';
    printf("Iniciando animacao com rand() (sequencia sempre igual)...\n");
    printf("Pressione Ctrl+C para sair.\n");

    for (long i = 0; i < 90000000; i++);

    while (1) {
        int posicao = rand() % largura_maxima;
        for (int i = 0; i < posicao; i++) {
            putchar(' ');
        }
        printf("%c\n", simbolo);
        for (long i = 0; i < 30000000; i++);
    }

    return 0;
}