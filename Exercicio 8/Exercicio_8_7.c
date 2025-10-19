#include <stdio.h>

int main(void) {
    char s[101];
    int len = 0;
    int inicio = 0;
    int fim;
    int palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%100s", s);

    while (s[len] != '\0') {
        len++;
    }
    
    fim = len - 1;

    while (inicio < fim) {
        if (s[inicio] != s[fim]) {
            palindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }

    printf("A palavra \"%s\" ", s);
    if (palindromo == 1) {
        printf("e um palindromo.\n");
    } else {
        printf("Nao e um palindromo.\n");
    }

    return 0;
}