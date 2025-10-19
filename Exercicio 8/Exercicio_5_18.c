#include <stdio.h>

int main(void) {
    
    char s[] = "linguagem C";
    int p = 3; 
    
    int i = 0;
    int len = 0;

    printf("String original: \"%s\"\n", s);
    printf("Removendo posição: %d\n", p);

    while (s[len] != '\0') {
        len++;
    }

    if (p >= 0 && p < len) {
        
        i = p;

        while (s[i] != '\0') {
            s[i] = s[i + 1]; 
            i++;
        }
    }

    printf("String modificada: \"%s\"\n", s);

    
    char s2[] = "teste";
    int p_invalida = 10;

    printf("\nString original: \"%s\"\n", s2);
    printf("Removendo posicao: %d\n", p_invalida);
    
    len = 0;
    while (s2[len] != '\0') {
        len++;
    }

    if (p_invalida >= 0 && p_invalida < len) {
        i = p_invalida;
        while (s2[i] != '\0') {
            s2[i] = s2[i + 1];
            i++;
        }
    }
    
    printf("String modificada: \"%s\"\n", s2);

    return 0;
}