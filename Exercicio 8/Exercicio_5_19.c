#include <stdio.h>

int main(void) {
    
    char s[50] = "linguagem";
    char c = 'C';
    int p = 9; 
    
    int len = 0;
    int i = 0;

    printf("String original: \"%s\"\n", s);
    printf("Inserindo '%c' na posição %d\n", c, p);

    while (s[len] != '\0') {
        len++;
    }

    if (p < 0 || p > len) {
        p = len; 
    }

    i = len; 
    
    while (i >= p) {
        s[i + 1] = s[i];
        i--;
    }

    s[p] = c;

    printf("String modificada: \"%s\"\n", s);


    char s2[50] = "teste";
    char c2 = '!';
    int p2 = 100;
    
    len = 0;
    i = 0;
    
    printf("\nString original: \"%s\"\n", s2);
    printf("Inserindo '%c' na posição %d\n", c2, p2);

    while (s2[len] != '\0') {
        len++;
    }

    if (p2 < 0 || p2 > len) {
        p2 = len; 
    }

    i = len; 
    while (i >= p2) {
        s2[i + 1] = s2[i];
        i--;
    }

    s2[p2] = c2;

    printf("String modificada: \"%s\"\n", s2);

    
    char s3[50] = "mundo";
    char c3 = 'O';
    int p3 = 0;
    
    len = 0;
    i = 0;
    
    printf("\nString original: \"%s\"\n", s3);
    printf("Inserindo '%c' na posicao %d\n", c3, p3);

    while (s3[len] != '\0') {
        len++;
    }

    if (p3 < 0 || p3 > len) {
        p3 = len; 
    }

    i = len; 
    while (i >= p3) {
        s3[i + 1] = s3[i];
        i--;
    }

    s3[p3] = c3;

    printf("String modificada: \"%s\"\n", s3);
    
    return 0;
}