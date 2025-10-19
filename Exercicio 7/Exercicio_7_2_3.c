#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double numero_atual, menor, maior;
    double soma = 0.0;
    double somaq = 0.0; 

    printf("Quantos numeros reais voce deseja analisar? ");
    scanf("%d", &n);
    printf("Digite os %d numeros:\n", n);

    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%lf", &numero_atual);
        if (i == 0) {
            menor = numero_atual;
            maior = numero_atual;
        } else {
            if (numero_atual < menor) menor = numero_atual;
            if (numero_atual > maior) maior = numero_atual;
        }
        soma += numero_atual;
        somaq += numero_atual * numero_atual; 
    }
    double media = soma / n;
    double variancia = (n > 1) ? (somaq - (soma * soma) / n) / (n - 1) : 0.0;
    double desvio_padrao = sqrt(variancia);
    printf("\n--- RESULTADOS DA ANALISE ---\n");
    printf("Maior numero:     %lf\n", maior);
    printf("Menor numero:     %lf\n", menor);
    printf("Media:            %lf\n", media);
    printf("Variancia:        %lf\n", variancia);
    printf("Desvio Padrao:    %lf\n", desvio_padrao);
    printf("--------------------------------\n");

    return 0;
}