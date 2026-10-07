#include <stdio.h>
#include "funcoes.h"

int main()
{
    int opcao;

    do
    {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                jogar();
                break;

            case 2:
                cadastrar();
                break;

            case 3:
                listar();
                break;

            case 4:
                estatisticas();
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}