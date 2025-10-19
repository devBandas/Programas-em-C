#include <stdio.h>

int main(void) {
    char s[101];
    int i = 0;
    int vogais = 0;
    int consoantes = 0;
    char c;

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
        c = s[i];
        
        if (c >= 'A' && c <= 'Z') {
            c = c + 32; 
        }

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        } 
        else if (c >= 'a' && c <= 'z') {
            consoantes++;
        }
        
        i++;
    }

    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);

    return 0;
}