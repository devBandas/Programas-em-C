#include <stdio.h>

int main() {
    int quantidade;
    int i = 1; 

    int termo_atual = 1;
    int termo_anterior = 0; 
    int proximo_termo;

    printf("Digite a quantidade de termos da serie de Fibonacci: ");
    scanf("%d", &quantidade);

    printf("\nSerie de Fibonacci com %d termos:\n", quantidade);

    while (i <= quantidade) {
        printf("%d", termo_atual);

        if (i < quantidade) {
            printf(", ");
        }
        proximo_termo = termo_atual + termo_anterior;
        termo_anterior = termo_atual;
        termo_atual = proximo_termo;

        i++; 
    }

    printf("\n");

    return 0;
}