#include <stdio.h>
#include <math.h>
 int main (){
    float a,b,c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    if((a > 0 && b > 0 && c >0 ) && (a< b + c) && (b< a + c) && (c< a + b)){
        if (a == b && b == c){
            printf("Triangulo equilatero");
        }else{
            if (a == b || b == c || a == c){
                printf("Triangulo isosceles");
            }else{
            printf("Triangulo escaleno");
            }
        }
    }else{
        printf("Não é um triangulo");
    }
    return (0);
}