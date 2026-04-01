#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void torreSys(int movTor)
{
    if (movTor > 0)
    {
        printf("Esquerda: %d\n", movTor);
        torreSys(movTor - 1);
    }
}

void rainhaSys(int movRai)
{
    if (movRai > 0)
    {
        printf("Esquerda: %d\n", movRai);
        rainhaSys(movRai - 1);
    }
}

void bispoSys(int movBis)
{
    if (movBis > 0)
    {
        printf("Diagonal Direita: %d\n", movBis);
        bispoSys(movBis - 1);
    }
}

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int movBis, movTor, movRai;

    printf("Escolha quantas casas o bispo vai andar: ");
    scanf("%d", &movBis);

    printf("Escolha quantas casas a torre vai andar: ");
    scanf("%d", &movTor);

    printf("Escolha quantas casas a rainha vai andar: ");
    scanf("%d", &movRai);

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("-------BISPO-------\n");
    bispoSys(movBis);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("-------TORRE-------\n");
    torreSys(movTor);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("-------RAINHA-------\n");
    rainhaSys(movRai);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("-------Cavalo-------\n");

    for (int i = 1; i <= 2; i++)
    {
        printf("Vertical: %d\n", i);

        for (int j = 1; j <= 1; j++)
        {
            if (i < 2)
                continue; // só executa o horizontal no final

            printf("Horizontal: %d\n", j);
        }
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}