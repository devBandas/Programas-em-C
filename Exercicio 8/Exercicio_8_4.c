#include <stdio.h>

int main(void) {
    char s[101];
    int i = 0;

    printf("Digite uma string: ");
    scanf("%100s", s);

    while (s[i] != '\0') {
        i++;
    }

    printf("A string \"%s\" possui %d caracteres.\n", s, i);
    
    return 0;
}