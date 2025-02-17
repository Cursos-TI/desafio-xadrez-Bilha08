#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Atribuição de variáveis constantes.
    int bispo = 0, torre = 0, rainha = 0, mov1Cavalo = 0; 
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("\nBispo\n");
    for (bispo = 0; bispo < 5; bispo++) {
        printf("Cima, direita\n");
    }
    printf("O bispo Parou!\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nTorre\n");
    while (torre < 5) {
        printf("direita\n");
        torre++;
    }
    printf("A torre Parou!\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nRainha\n");
    do {
        printf("Esquerda\n");
        rainha ++;
    } while (rainha < 8);
    printf("A rainha Parou!\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nCavalo\n");
    for ( int mov2Cavalo = 0; mov2Cavalo <1 ; mov2Cavalo++) { //atribuição da segunda variável da peça cavalo.
            while (mov1Cavalo < 2) {
                printf("Baixo\n");
                mov1Cavalo++;
            }   
        printf("Esquerda\n");
        printf("O cavalo Parou!\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
