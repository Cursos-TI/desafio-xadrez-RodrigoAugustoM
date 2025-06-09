#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Rodrigo Augusto Marques

char cima[20] = "Cima\n";
char direita[20] = "Direita\n";
char esquerda[20] = "Esquerda\n";
char baixo[20] = "Baixo\n";

void diagonal(int esqdir, int cimbai, int qtdd, char peca[10])
{
    printf("%s:\n", peca);

    while (qtdd > 0)
    {
        // se for pra direita
        if (esqdir == 0)
        {
            printf("%s", direita);
            // se for pra cima
            if (cimbai == 0)
            {
                printf("%s", cima);
                // diagonal superior direita
            }
            // se for pra baixo
            else if (cimbai == 1)
            {
                printf("%s", baixo);
                // diagonal inferior direita
            }
        }
        // se for pra esquerda
        else if (esqdir == 1)
        {
            printf("%s", esquerda);
            // se for pra cima
            if (cimbai == 0)
            {
                printf("%s", cima);
                // diagonal superior esquerda
            }
            // se for pra baixo
            else if (cimbai == 1)
            {
                printf("%s", baixo);
                // diagonal inferior esquerda
            }
        }
        qtdd--;
    }
}

void vertical(int cimbai, int qtdd, char peca[10])
{
    printf("%s:\n", peca);

    while (qtdd > 0)
    {
        if (cimbai == 0)
        {
            printf("%s", cima);
        }
        else if (cimbai == 1)
        {
            printf("%s", baixo);
        }
        else
        {
            printf("Opção invalida!");
        }
        vertical(cimbai, qtdd--, peca);
    }
}
void horizontal(int esqdir, int qtdd, char peca[10])
{
    printf("%s:\n", peca);

    while (qtdd > 0)
    {
        if (esqdir == 0)
        {
            printf("%s", esquerda);
        }
        else if (esqdir == 1)
        {
            printf("%s", direita);
        }
        else
        {
            printf("Opção invalida!");
        }
        horizontal(esqdir, qtdd--, peca);
    }
}
void rainha()
{
    int movimento = 0;
    int qtdd = 0;
    printf("0 para movimentar horizontalmente\n1 para movimentar verticalmente\n2 para movimentar diagonalmente\nDigite aqui: ");
    scanf("%d", &movimento);
    printf("Quantas casas?\n");
    scanf("%d",&qtdd);
    if (movimento == 0)
    {
        int esqdir;
        printf("Horizontalmente, à esquerda digite 0 ou direita digite 1");
        scanf("%d",&esqdir);
        horizontal(esqdir,qtdd,'Rainha');
    }
    else if (movimento == 1)
    {
        int cimbai;
        printf("Verticalmente, pra cima digite 0, pra baixo digite 1");
        scanf("%d",&cimbai);
        vertical(cimbai,qtdd,'Rainha');
    }
    else if (movimento == 2)
    {
        int cimbai;
        int esqdir;
        int qtdd;
        printf("Movimento na diagonal pra cima, digite 0 pra baixo, digite 1\n");
        scanf("%d",&cimbai);
        if(cimbai == 0) {
            printf("Movimento na diagonal pra cima \nPra esquerda digite 0\nPra direita, digite 1\n");
            scanf("%d",&esqdir);
        }
        
        diagonal(esqdir,cimbai,qtdd,'Rainha');
    }
    else
    {
        printf("Opção invalida");
    }
}

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
    rainha();

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimento do cavalo:\n");
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
