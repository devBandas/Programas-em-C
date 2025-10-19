#include <stdio.h>

int main(void) {
    char s[] = "linguagem C";
    char c = 'g';
    int i = 0;
    int posicao = -1;
    while (s[i] != '\0') {
        
        if (s[i] == c) {
            posicao = i;
            break;
        }
        
        i++;
    }
    printf("String: \"%s\"\n", s);
    printf("Caractere: '%c'\n", c);
    printf("Posição: %d\n", posicao);


    char c_nao_existe = 'z';
    i = 0;
    posicao = -1; 

    while (s[i] != '\0') {
        if (s[i] == c_nao_existe) {
            posicao = i;
            break;
        }
        i++;
    }

    printf("\nString: \"%s\"\n", s);
    printf("Caractere: '%c'\n", c_nao_existe);
    printf("Posicao: %d\n", posicao); 

    return 0;
}