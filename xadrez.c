

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.


        // Agora, dentro do for, um while para simular o "1 casa à esquerda"

    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

#include <stdio.h>

// Recursiva: Torre (5 casas para a direita)
void moverTorre(int casa) {
    if (casa > 5) return;
    printf("Torre - Casa %d: Direita\n", casa);
    moverTorre(casa + 1);
}

// Recursiva + Loops: Bispo (5 casas na diagonal: Cima, Direita)
void moverBispo(int vertical) {
    if (vertical > 5) return;

    for (int horizontal = 1; horizontal <= 1; horizontal++) {
        printf("Bispo - Casa %d.%d: Cima, Direita\n", vertical, horizontal);
    }

    moverBispo(vertical + 1);
}

// Recursiva: Rainha (8 casas para a esquerda)
void moverRainha(int casa) {
    if (casa > 8) return;
    printf("Rainha - Casa %d: Esquerda\n", casa);
    moverRainha(casa + 1);
}

// Loops complexos: Cavalo (duas casas para cima e uma para a direita)
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    for (int vertical = 2; vertical >= 1; vertical--) { // Simula 2 casas para cima
        for (int horizontal = 1; horizontal <= 1; horizontal++) { // Simula 1 casa para a direita

            if (vertical == 1 && horizontal == 1) {
                printf("Cavalo - Movimento inválido parcial, ajustando...\n");
                continue; // Demonstra controle do fluxo
            }

            printf("Cavalo - Casa V-%d H-%d: Cima\n", vertical, horizontal);
            if (horizontal == 1) {
                printf("Cavalo - Casa Final: Direita\n");
                break; // Finaliza após o "L"
            }
        }
    }
}

int main() {
    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(1);

    // Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(1);

    // Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(1);

    // Cavalo
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}

