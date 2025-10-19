#include <stdio.h>

int main(void) {
    int n, i, j, c;
    char nomes[100][51];
    char temp[51];
    int comparacao;

    printf("Quantos nomes (ate 100)? ");
    scanf("%d", &n);
    if (n > 100) n = 100;
    if (n < 0) n = 0;

    for (i = 0; i < n; i++) {
        printf("Digite o nome %d: ", i + 1);
        scanf("%50s", nomes[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            
            comparacao = 0;
            c = 0;
            while(nomes[j][c] != '\0' && nomes[j+1][c] != '\0') {
                if (nomes[j][c] != nomes[j+1][c]) {
                    comparacao = nomes[j][c] - nomes[j+1][c];
                    break;
                }
                c++;
            }
            if (comparacao == 0) {
                 comparacao = nomes[j][c] - nomes[j+1][c];
            }
            
            if (comparacao > 0) {
                
                c = 0;
                while(nomes[j][c] != '\0') {
                    temp[c] = nomes[j][c];
                    c++;
                }
                temp[c] = '\0';

                c = 0;
                while(nomes[j+1][c] != '\0') {
                    nomes[j][c] = nomes[j+1][c];
                    c++;
                }
                nomes[j][c] = '\0';

                c = 0;
                while(temp[c] != '\0') {
                    nomes[j+1][c] = temp[c];
                    c++;
                }
                nomes[j+1][c] = '\0';
            }
        }
    }

    printf("\nNomes em ordem alfabética:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", nomes[i]);
    }
    return 0;
}