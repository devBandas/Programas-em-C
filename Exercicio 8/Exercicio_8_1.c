#include <stdio.h>

int main(void) {
    char s[] = "Eu gosto de programar em C";
    int i = 0;
    int j = 0;

    printf("Original: \"%s\"\n", s);

    while (s[i] != '\0') {
        if (s[i] != ' ') {
            s[j] = s[i];
            j++;
        }
        i++;
    }
    s[j] = '\0';

    printf("Modificada: \"%s\"\n", s);
    return 0;
}