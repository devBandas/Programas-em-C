#include <stdio.h>

int main(void) {
    char s1[] = "roma";
    char s2[] = "amor";
    
    int freq1[256] = {0};
    int freq2[256] = {0};
    int i = 0;
    int len1 = 0;
    int len2 = 0;
    int anagrama = 1;

    while (s1[len1] != '\0') {
        len1++;
    }
    while (s2[len2] != '\0') {
        len2++;
    }

    if (len1 != len2) {
        anagrama = 0;
    } else {
        for (i = 0; i < len1; i++) {
            freq1[(int)s1[i]]++;
            freq2[(int)s2[i]]++;
        }
        
        for (i = 0; i < 256; i++) {
            if (freq1[i] != freq2[i]) {
                anagrama = 0;
                break;
            }
        }
    }

    printf("String 1: \"%s\"\n", s1);
    printf("String 2: \"%s\"\n", s2);

    if (anagrama == 1) {
        printf("Sao anagramas.\n");
    } else {
        printf("NÃO são anagramas.\n");
    }

    return 0;
}