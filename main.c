#include <stdio.h>
    int main(){
        int n, i;
        printf("Digite um numero:\n");
        scanf("%d", &n);
        i = 0;
        while (i < n){
            i = i + 1;
            printf("%d\n", i);
        }
        return(0);
    }