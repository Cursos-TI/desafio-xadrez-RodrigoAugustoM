#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Rodrigo Augusto Marques

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int rainhaAnda = 8;
    int bispoAnda = 5;
    int torreAnda = 5;

    char cima[20] = "Cima\n";
    char direita[20] = "Direita\n";
    char esquerda[20] = "Esquerda\n";
    char baixo[20] = "Baixo\n";
    

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimento do bispo:\n");

    for (int iBispo = 0; iBispo < bispoAnda; iBispo++)
    {
        
        printf("%s%s", direita,cima);
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimento da Torre:\n");
    int iTorre = 0;

    do
    {
        printf("%s", direita);
        iTorre++;

    } while (iTorre < torreAnda);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int iRainha = 0;

    printf("Movimento da Rainha:\n");

    while (iRainha < rainhaAnda)
    {
        printf("%s", esquerda);
        iRainha++;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
