#include <stdio.h>

int main() {
    int codigos[] = {100, 101, 102, 103, 104};
    char nomes[5][20] = {"Cachorro-Quente", "Sanduiche", "Tapioca", "Hamburguer", "Misto"};
    float precos[] = {10.00, 12.50, 14.00, 15.00, 16.50};

    int opcaoMenu = 0; 

    while (opcaoMenu != 7) {
        printf("\n================ LANCHONETE SABOR EM CODIGO =================\n");
        printf("Codigo\t\tProduto\t\t\tPreco\n");
        printf("-----------------------------------------------------------\n");
        
        int i = 0;
        while (i < 5) {
            printf("%d\t\t%-20s\tR$ %.2f\n", codigos[i], nomes[i], precos[i]);
            i++;
        }

        printf("-----------------------------------------------------------\n");
        printf("6. Fazer Pedido do Cliente\n");
        printf("7. Sair do Sistema\n");
        printf("===========================================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcaoMenu);

        switch (opcaoMenu) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                printf("\nOpcao apenas para visualizacao. Para comprar, escolha a opcao 6.\n");
                break;

            case 6: {
                char nomeCliente[51];
                int codigo1 = 0, qtd1 = 0;
                int codigo2 = 0, qtd2 = 0;
                float subtotal1 = 0.0, subtotal2 = 0.0, totalPedido = 0.0;
                char adicionarOutro;
                int indice1 = -1, indice2 = -1;

                printf("\n--- Novo Pedido ---\n");
                printf("Digite o nome do cliente: ");
                scanf(" %[^\n]", nomeCliente);

                printf("Digite o codigo do primeiro produto: ");
                scanf("%d", &codigo1);
                
                i = 0;
                while (i < 5) {
                    if (codigos[i] == codigo1) {
                        indice1 = i;
                        break;
                    }
                    i++;
                }

                if (indice1 == -1) {
                    printf("Codigo de produto invalido!\n");
                    break;
                }

                printf("Digite a quantidade: ");
                scanf("%d", &qtd1);
                
                printf("Deseja adicionar outro produto? (S/N): ");
                scanf(" %c", &adicionarOutro);

                if (adicionarOutro == 'S' || adicionarOutro == 's') {
                    printf("Digite o codigo do segundo produto: ");
                    scanf("%d", &codigo2);
                    
                    i = 0;
                    while (i < 5) {
                        if (codigos[i] == codigo2) {
                            indice2 = i;
                            break;
                        }
                        i++;
                    }

                    if (indice2 == -1) {
                        printf("Codigo de produto invalido! O segundo item nao sera adicionado.\n");
                    } else {
                        printf("Digite a quantidade: ");
                        scanf("%d", &qtd2);
                    }
                }
                printf("\n\n=============== PEDIDO FINAL ===============\n");
                printf("Cliente: %s\n", nomeCliente);
                printf("------------------------------------------\n");
                
                subtotal1 = precos[indice1] * qtd1;
                printf("Produto 1: %s (Cod: %d)\n", nomes[indice1], codigo1);
                printf("Preco Unitario: R$ %.2f\n", precos[indice1]);
                printf("Quantidade: %d\n", qtd1);
                printf("Subtotal: R$ %.2f\n", subtotal1);
                printf("------------------------------------------\n");
                totalPedido += subtotal1;

                if (indice2 != -1) {
                    subtotal2 = precos[indice2] * qtd2;
                    printf("Produto 2: %s (Cod: %d)\n", nomes[indice2], codigo2);
                    printf("Preco Unitario: R$ %.2f\n", precos[indice2]);
                    printf("Quantidade: %d\n", qtd2);
                    printf("Subtotal: R$ %.2f\n", subtotal2);
                    printf("------------------------------------------\n");
                    totalPedido += subtotal2;
                }

                printf("TOTAL DO PEDIDO: R$ %.2f\n", totalPedido);
                printf("==========================================\n\n");
                
                break;
            }

            case 7:
                printf("\nSaindo do sistema\n");
                break;

            default:
                printf("\nOpcao invalida\n");
                break;
        }

    }

    return 0;
}