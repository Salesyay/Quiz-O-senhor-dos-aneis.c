#include <stdio.h>
#include "funcoes.h"

int pontuacao = 0;
int partidas = 0;

void exibirMenu()
{
    printf("\n===== QUIZ SENHOR DOS ANEIS =====\n");
    printf("1 - Jogar\n");
    printf("2 - Cadastrar\n");
    printf("3 - Listar\n");
    printf("4 - Estatisticas\n");
    printf("0 - Sair\n");
    printf("Escolha: ");
}

int calcularPontuacao(int acertos)
{
    return acertos * 2;
}

void jogar()
{
    char resposta;
    int acertos = 0;

    printf("\n===== QUIZ =====\n");

    printf("\n1. Qual era o nome de Gandalf entre os Maiar?\n");
    printf("A) Olorin\n");
    printf("B) Curunir\n");
    printf("C) Aiwendil\n");
    printf("D) Manwe\n");
    printf("Resposta: ");
    scanf(" %c", &resposta);

    if (resposta == 'A' || resposta == 'a')
        acertos++;

    printf("\n2. Quantos aneis foram feitos?\n");
    printf("A) 20\n");
    printf("B) 19\n");
    printf("C) 10\n");
    printf("D) 9\n");
    printf("Resposta: ");
    scanf(" %c", &resposta);

    if (resposta == 'A' || resposta == 'a')
        acertos++;

    printf("\n3. Qual o nome do mundo onde acontece a historia?\n");
    printf("A) Mordor\n");
    printf("B) Arda\n");
    printf("C) Valinor\n");
    printf("D) Gondor\n");
    printf("Resposta: ");
    scanf(" %c", &resposta);

    if (resposta == 'B' || resposta == 'b')
        acertos++;

    printf("\n4. Gimli fazia parte de uma familia real?\n");
    printf("A) Verdadeiro\n");
    printf("B) Falso\n");
    printf("Resposta: ");
    scanf(" %c", &resposta);

    if (resposta == 'B' || resposta == 'b')
        acertos++;

    printf("\n5. Quem salva Frodo antes de chegar em Valfenda?\n");
    printf("A) Gandalf\n");
    printf("B) Aragorn\n");
    printf("C) Legolas\n");
    printf("D) Glorfindel\n");
    printf("Resposta: ");
    scanf(" %c", &resposta);

    if (resposta == 'D' || resposta == 'd')
        acertos++;

    pontuacao = calcularPontuacao(acertos);
    partidas++;

    printf("\nVoce acertou %d perguntas.\n", acertos);
    printf("Pontuacao: %d\n", pontuacao);
}

void cadastrar()
{
    printf("\nFuncao de cadastrar perguntas.\n");
}

void listar()
{
    printf("\nFuncao de listar perguntas.\n");
}

void estatisticas()
{
    printf("\nPartidas jogadas: %d\n", partidas);

    if (partidas > 0)
        printf("Pontuacao media: %.2f\n", (float)pontuacao / partidas);
    else
        printf("Nenhuma partida jogada ainda.\n");
}