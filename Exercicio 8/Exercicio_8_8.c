#include <stdio.h>

int main(void) {
    char s[201], procurar[50], substituir[50], resultado[401];
    int i = 0, j = 0, k = 0, m = 0;
    int len_s = 0, len_p = 0, len_sub = 0;
    int achou;

    printf("Digite a frase: ");
    fgets(s, 201, stdin);
    
    i = 0;
    while(s[i] != '\0') {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
        i++;
    }

    printf("Digite a palavra a procurar: ");
    scanf("%49s", procurar);
    printf("Digite a palavra para substituir: ");
    scanf("%49s", substituir);

    while(s[len_s] != '\0') len_s++;
    while(procurar[len_p] != '\0') len_p++;
    while(substituir[len_sub] != '\0') len_sub++;

    i = 0;
    k = 0; 

    while (s[i] != '\0') {
        achou = 1;
        for (j = 0; j < len_p; j++) {
            if (s[i+j] != procurar[j]) {
                achou = 0;
                break;
            }
        }

        if (achou == 1) {
            for (m = 0; m < len_sub; m++) {
                resultado[k] = substituir[m];
                k++;
            }
            i = i + len_p;
        } else {
            resultado[k] = s[i];
            k++;
            i++;
        }
    }
    resultado[k] = '\0';

    printf("Resultado: \"%s\"\n", resultado);
    return 0;
}