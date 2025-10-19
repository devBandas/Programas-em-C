#include <stdio.h>

int main(void) {
    
    char s[101];
    char original_upper[] = "ABCDEFGHIJ";
    char rot10_upper[]    = "MOPBSUTWVA";
    char original_lower[] = "abcdefghij";
    char rot10_lower[]    = "mopbsutwva";
    int i, j, len;
    int len_mapa = 10;
    char c;

    while (1) {
        printf("Digite a mensagem (ou 0 para sair): ");
        fgets(s, 101, stdin);

        len = 0;
        while (s[len] != '\0') {
            len++;
        }
        if (len > 0 && s[len - 1] == '\n') {
            s[len - 1] = '\0';
        }

        if (s[0] == '0' && s[1] == '\0') {
            break;
        }

        i = 0;
        while (s[i] != '\0') {
            c = s[i];
            
            for (j = 0; j < len_mapa; j++) {
                if (c == original_upper[j]) {
                    s[i] = rot10_upper[j];
                    break; 
                }
                if (c == original_lower[j]) {
                    s[i] = rot10_lower[j];
                    break;
                }
            }
            
            i++;
        }

        printf("Criptografado: %s\n", s);
    }

    return 0;
}