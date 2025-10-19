#include <stdio.h>

int main(void) {
    char s[50] = "facil";
    char t[] = "idade";
    int i = 0;
    int j = 0;

    printf("String s original: \"%s\"\n", s);
    printf("String t: \"%s\"\n", t);
    while (s[i] != '\0') {
        i++;
    }
    while (t[j] != '\0') {
        s[i] = t[j];
        i++;         
        j++;        
    }
    s[i] = '\0';
    printf("String s concatenada: \"%s\"\n", s);

    return 0;
}