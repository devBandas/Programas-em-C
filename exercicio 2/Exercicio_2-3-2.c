#include <stdio.h>
    int main(){
        float num;
        printf("Digite um numero real: ");
        scanf("%f", &num);
        num = (int)num;
        printf("%d", (int)num);
        return(0);

    }