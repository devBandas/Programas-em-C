#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifdef _WIN32
#include <windows.h>
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void delay(int milliseconds) {
    Sleep(milliseconds);
}
void clear_screen() {
    system("cls");
}
#else
#include <unistd.h>
void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y + 1, x + 1);
}
void delay(int milliseconds) {
    usleep(milliseconds * 1000);
}
void clear_screen() {
    system("clear");
}
#endif


const int SERVER_X = 5;
const int CLIENT_X = 65;
const int START_Y = 5;

int main() {
    int opcao;

    do {
        printf("\n--- MENU - SIMULADOR DE TRANSMISSAO DE ARQUIVO ---\n");
        printf("1. Iniciar uma nova simulacao\n");
        printf("0. Sair do programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                double tamanho_arquivo, capacidade_canal;

                printf("\nDigite o tamanho do arquivo (em Kbits): ");
                scanf("%lf", &tamanho_arquivo);
                printf("Digite a capacidade do canal (em Kbps): ");
                scanf("%lf", &capacidade_canal);

                if (tamanho_arquivo <= 0 || capacidade_canal <= 0) {
                    printf("Valores invalidos. Devem ser maiores que zero.\n");
                    break;
                }

             
                int num_pacotes = ceil(tamanho_arquivo / capacidade_canal);
                double pacotes[num_pacotes];
                double arquivo_restante = tamanho_arquivo;

                for (int i = 0; i < num_pacotes; i++) {
                    if (arquivo_restante >= capacidade_canal) {
                        pacotes[i] = capacidade_canal;
                        arquivo_restante -= capacidade_canal;
                    } else {
                        pacotes[i] = arquivo_restante;
                    }
                }

            -
                double tempo_propagacao = 0.5; 
                double tempo_final_simulacao = num_pacotes + tempo_propagacao + 2;

                for (double t = 0; t <= tempo_final_simulacao; t += 0.1) {
                    clear_screen();
                    
            
                    gotoxy(SERVER_X, START_Y - 2);
                    printf("SERVIDOR");
                    gotoxy(SERVER_X + 25, START_Y - 2);
                    printf("CANAL");
                    gotoxy(CLIENT_X, START_Y - 2);
                    printf("CLIENTE");
                    gotoxy(0,0);
                    printf("Simulando... Tempo: %.1f s", t);

            
                    for (int i = 0; i < num_pacotes; i++) {
                        double tam_pacote = pacotes[i];
                        double duracao_transmissao = tam_pacote / capacidade_canal;
                        
                        double inicio_transmissao = (double)i;
                        double fim_transmissao = inicio_transmissao + duracao_transmissao;
                        double chegada_completa = fim_transmissao + tempo_propagacao;

                        int pos_x;
                        if (t < inicio_transmissao) {
                            pos_x = SERVER_X; 
                            pos_x = CLIENT_X; 
                        } else {
                
                            double progresso = (t - inicio_transmissao) / (chegada_completa - inicio_transmissao);
                            pos_x = SERVER_X + (int)(progresso * (CLIENT_X - SERVER_X));
                        }
                        
                        gotoxy(pos_x, START_Y + i * 2);
                        printf("[P%d: %.0fKb]", i + 1, tam_pacote);
                    }
                    
                    fflush(stdout);
                    delay(100);
                }
                
                printf("\n\nTransmissao finalizada!\n");
                break;
            }
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}