#include <stdio.h>

int main() {
    int num1, num2;
    int opcao = -1; 

    while (opcao != 0) {
        printf("\n--- Menu de Operacoes ---\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("0. Sair\n"); 
        printf("-------------------------\n");
        printf("Escolha uma operacao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite os dois numeros: ");
                scanf("%d %d", &num1, &num2);
                printf("Resultado: %d + %d = %d\n", num1, num2, num1 + num2);
                break;
            
            case 2:
                printf("Digite os dois numeros: ");
                scanf("%d %d", &num1, &num2);
                printf("Resultado: %d - %d = %d\n", num1, num2, num1 - num2);
                break;
                
            case 3:
                printf("Digite os dois numeros: ");
                scanf("%d %d", &num1, &num2);
                printf("Resultado: %d * %d = %d\n", num1, num2, num1 * num2);
                break;
                
            case 4:
                printf("Digite os dois numeros: ");
                scanf("%d %d", &num1, &num2);
                if (num2 == 0) {
                    printf("Erro! Nao e possivel dividir por zero.\n");
                } else {
                    printf("Resultado: %d / %d = %.2f\n", num1, num2, (double)num1 / num2);
                }
                break;

            case 0:
                break;
                
            default:
                printf("Opcao invalida\n");
                break;
        }
    }

    return 0;
}