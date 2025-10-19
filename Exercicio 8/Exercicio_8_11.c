#include <stdio.h>

int main(void) {
    
    char s[101];
    int freq[26] = {0};
    int i = 0;
    char c;

    printf("Digite uma string: ");
    scanf("%100s", s);

    while (s[i] != '\0') {
        c = s[i];

        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        if (c >= 'a' && c <= 'z') {
            freq[c - 'a']++;
        }
        
        i++;
    }

    printf("Entrada: \"%s\" -> Saida:\n", s);
    for (i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c = %d\n", (char)(i + 'a'), freq[i]);
        }
    }

    return 0;
}