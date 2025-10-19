#include <stdio.h>
#include <math.h>
    int main(){
        float a, b, c, delta, x1, x2;
        scanf("%f", &a);
        scanf("%f", &b);
        scanf("%f", &c);
        delta = (b * b) - 4 * (a * c);
        if (delta >= 0){
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("%f, %f", x1, x2);
        }else{
            printf("Nao tem raizes reais");
        }
        return(0);
    }