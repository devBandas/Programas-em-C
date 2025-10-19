#include <stdio.h>
int main() {
    int soma = 0;
    int i = 1;
    printf("Digite um numero para ser somado \n");
    scanf("%d", &i);
    while (i <= 500) {
        if (i % 2 != 0){
            soma = soma + i;
            printf("%d\n", i);
        }
        i = i + 1;
    }

    return 0;
}