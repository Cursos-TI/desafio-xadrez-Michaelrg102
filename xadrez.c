#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int bispo, torre = 1, rainha = 1;
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
    for (bispo = 1; bispo <= movBis; bispo++)
    {
        printf("Diagonal Direita: %d\n", bispo);
    }


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("-------TORRE-------\n");
    while (torre <= movTor)
    {
        printf("Cima %d\n", torre++);
    }


    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("-------RAINHA-------\n");
    do
    {
        printf("Esquerda: %d\n", rainha++);

    } while (rainha <= movRai);

    
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
