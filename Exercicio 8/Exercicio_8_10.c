#include <stdio.h>

int main(void) {
    char s[201];
    int i = 0;
    int palavras = 0;
    int dentro_da_palavra = 0; 
    
    printf("Digite uma frase: ");
    fgets(s, 201, stdin);

    while (s[i] != '\0') {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t') {
            dentro_da_palavra = 0;
        } 
        else if (dentro_da_palavra == 0) {
            dentro_da_palavra = 1;
            palavras++;
        }
        i++;
    }

    printf("A frase contem %d palavra(s).\n", palavras);
    return 0;
}