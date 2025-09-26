#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    //Variáveis para controlar as repetições
    int torre; //usado no laço for
    int bispo = 0; //usado no laço while
    int rainha = 0; //usado no laço do-while
    int movimentoCavalo = 1; //usando loop infinito

    //Movimento da Torre (for)
    //Mover a Torre 5 casas para a direita
    printf("Movimento da torre:\n");
    for (torre = 0; torre < 5; torre++)
    {
        printf("Direita\n");
    }

    //Movimento do Bispo (While)
    //Bispo anda 5 casas na diagonal (cima + direita)
    printf("\nMovimento do Bispo:\n");
    while (bispo < 5)
    {
        printf("Cima Direita\n");
        bispo++;
    }

    //Movimento da rainha (do-While)
    //Bispo anda 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    do{
        printf("Esqueda\n");
        rainha++;
    } while (rainha < 8);

    // Nível Aventureiro - Movimentação do Cavalo
    //Movimento do cavalo (loop for e while)
    //Cavalo anda duas casas para baixo e uma para a esquerda
    printf("\nMovimento do cavalo:\n");
    while(movimentoCavalo--)
    {
        for (int cavalo = 0; cavalo < 2; cavalo++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
