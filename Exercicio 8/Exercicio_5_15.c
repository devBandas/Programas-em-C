#include <stdio.h>

int main(void) {
    char s[] = "Ola, mundo 123!";
    int i = 0;

    printf("Original: \"%s\"\n", s);
    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
        i++;
    }
    printf("Convertida: \"%s\"\n", s);
    return 0;
}