#include <stdio.h>

int main(void) {
    char s[] = "abacaxi";
    int freq[256] = {0};
    int i = 0;

    while (s[i] != '\0') {
        freq[(int)s[i]]++;
        i++;
    }

    printf("String: \"%s\"\n", s);
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c': %d\n", (char)i, freq[i]);
        }
    }
    return 0;
}