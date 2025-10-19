#include <stdio.h>
int main(){
    int opcao;
    while (opcao != 0){
        int n, t1, t2, pt;
        t1 = 1;
        t2 = 2;    
        printf("Termos de Fibonnaci\n");
        printf("1. Entrar\n");
        printf("0. Sair\n");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("Digite o quantidade de termos: ");
                scanf("%d", &n);
                if (n >= 1) {
                    printf("%d", t1);
                }
                if (n >= 2) {
                    printf(", %d", t2);
                }
                for (int i = 3; i <= n; ++i) {
                    pt = t1 + t2;
                    t1 = t2;
                    t2 = pt;
                    printf(", %d", pt);
                }
                printf("\n");
                break;
            case 0 : 
                break;
        }        
    }   
    return (0);
}