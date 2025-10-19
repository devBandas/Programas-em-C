#include <stdio.h>

int main() {
    int num1, num2, resto;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);
    while (num2 != 0) {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;
    }


    printf("O MDC e %d\n", num1);

    return 0;
}