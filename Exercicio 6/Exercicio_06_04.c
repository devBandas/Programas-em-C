#include <stdio.h>
#include <math.h> 

int main() {
    int numero;
    int contador = 0; 
    double soma = 0;
    double somaq = 0;
    double media = 0;
    double variancia = 0;
    double desvio = 0;

    while (1) { 
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; 
        }
        if (numero > 0) {
            contador++;
            soma += numero;
            somaq += (double)numero * numero;
        }
    }

    if (contador > 0) {
        media = soma / contador;
        variancia = (somaq / contador) - (media * media);
        if (variancia < 0) {
            variancia = 0;
        }
        desvio = sqrt(variancia);
        printf("Quantidade de numeros inseridos: %d\n", contador);
        printf("Media: %.4f\n", media);
        printf("Variancia: %.4f\n", variancia);
        printf("Desvio Padrao: %.4f\n", desvio);

    } else {
        printf("\nNenhum numero valido foi inserido.\n");
    }

    return 0;
}