#include <stdio.h>

int main(void) {
    char s[101];
    int i = 0;
    int j = 0;

    printf("Digite uma frase: ");
    fgets(s, 101, stdin);
    
    i = 0;
    while(s[i] != '\0') {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
        i++;
    }

    i = 0;
    while (s[i] != '\0') {
        if (s[i] != ' ') {
            s[j] = s[i];
            j++;
        }
        i++;
    }
    s[j] = '\0';

    printf("Frase compactada: \"%s\"\n", s);
    return 0;
}