#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Rodrigo Augusto Marques

char cima[20] = "Cima\n";
    char direita[20] = "Direita\n";
    char esquerda[20] = "Esquerda\n";
    char baixo[20] = "Baixo\n";

void diagonal(int diresq, int cimbai, int qtdd, char peca[10])
{
        printf("Movimento de %s:\n",peca);

    while (qtdd > 0)
    {
        // se for pra direita
        if (diresq == 0)
        {
            printf("%s",direita);
            // se for pra cima
            if (cimbai == 0)
            {
                printf("%s",cima);
                // diagonal superior direita
            }
            // se for pra baixo
            else if (cimbai == 1)
            {
                printf("%s",baixo);
                // diagonal inferior direita
            }
        }
        // se for pra esquerda
        else if (diresq == 1)
        {
            printf("%s",esquerda);
            // se for pra cima
            if (cimbai == 0)
            {
                printf("%s",cima);
                // diagonal superior esquerda
            }
            // se for pra baixo
            else if (cimbai == 1)
            {
                printf("%S",baixo);
                // diagonal inferior esquerda
            }
        }
        qtdd--;
    }
}

void vertical(int cimbai,int qtdd) {}
void horizontal(int esqdir,int qtdd) {}


int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int rainhaAnda = 8;
    int bispoAnda = 5;
    int torreAnda = 5;

    

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    diagonal(0, 0, bispoAnda, "bispo");

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
    printf("Movimentação do cavalo\n");
    for (int i = 0; i < 1; i++)
    {
        printf("%s", esquerda);
        i++;
        int j = 0;
        while (j <= 1)
        {
            printf("%s", baixo);
            j++;
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
