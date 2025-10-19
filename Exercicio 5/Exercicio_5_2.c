#include <stdio.h>

int main() {
    int soma = 0;
    int i = 1;
    printf("Digite um numero para ser somado \n");
    scanf("%d", &i);
    while (i <= 99) {
        soma = soma + i;
        i = i + 1;
        printf("%d\n", i);
    }

    return 0;
}