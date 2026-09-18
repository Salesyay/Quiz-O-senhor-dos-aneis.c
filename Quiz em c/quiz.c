#include <stdio.h>

int main(void) {

    int perguntas = 5, pontos = 0;

    char res1, res2, res3, res4, res5;

    for (int i = 1; i <= perguntas; i++) {

        switch (i) {

            case 1:
                printf("Qual desses NÃO é um nome ou título pelo qual Gandalf era conhecido?"
                       "\na) Olórin"
                       "\nb) Mithrandir"
                       "\nc) Istar"
                       "\nd) Curunír\n");

                scanf(" %c", &res1);

                while (res1 != 'A' && res1 != 'B' && res1 != 'C' && res1 != 'D' &&
                       res1 != 'a' && res1 != 'b' && res1 != 'c' && res1 != 'd') {

                    printf("Resposta inválida! Digite A, B, C ou D: ");
                    scanf(" %c", &res1);
                }

                if (res1 == 'D' || res1 == 'd') {

                    printf("Correto! \n");
                    pontos += 2;

                } else {

                    printf("Errado, a resposta certa era 'd) Curunír' :(\n");

                }

                break;


            case 2:
                printf("Quantos anéis do poder são citados no poema que descreve a criação dos anéis?"
                       "\na) 20"
                       "\nb) 12"
                       "\nc) 9"
                       "\nd) 6\n");

                scanf(" %c", &res2);

                while (res2 != 'A' && res2 != 'B' && res2 != 'C' && res2 != 'D' &&
                       res2 != 'a' && res2 != 'b' && res2 != 'c' && res2 != 'd') {

                    printf("Resposta inválida! Digite A, B, C ou D: ");
                    scanf(" %c", &res2);
                }

                if (res2 == 'A' || res2 == 'a') {

                    printf("Correto! \n");
                    pontos += 2;

                } else {

                    printf("Errado, a resposta certa era 'a) 20' :(\n");

                }

                break;


            case 3:
                printf("Qual o nome do mundo em que se passa a história de O Senhor dos Anéis?"
                       "\na) Terra-Média"
                       "\nb) Arda"
                       "\nc) Condado"
                       "\nd) Beleriand\n");

                scanf(" %c", &res3);

                while (res3 != 'A' && res3 != 'B' && res3 != 'C' && res3 != 'D' &&
                       res3 != 'a' && res3 != 'b' && res3 != 'c' && res3 != 'd') {

                    printf("Resposta inválida! Digite A, B, C ou D: ");
                    scanf(" %c", &res3);
                }

                if (res3 == 'B' || res3 == 'b') {

                    printf("Correto! \n");
                    pontos += 2;

                } else {

                    printf("Errado, a resposta certa era 'b) Arda' :(\n");

                }

                break;


            case 4:
                printf("Verdadeiro ou Falso: Gimli é parte da família real de seu povo."
                       "\na) Verdadeiro"
                       "\nb) Falso"
                       "\nc) Não sei"
                       "\nd) Nenhuma das alternativas\n");

                scanf(" %c", &res4);

                while (res4 != 'A' && res4 != 'B' && res4 != 'C' && res4 != 'D' &&
                       res4 != 'a' && res4 != 'b' && res4 != 'c' && res4 != 'd') {

                    printf("Resposta inválida! Digite A, B, C ou D: ");
                    scanf(" %c", &res4);
                }

                if (res4 == 'B' || res4 == 'b') {

                    printf("Correto! \n");
                    pontos += 2;

                } else {

                    printf("Errado, a resposta certa era 'b) Falso' :(\n");

                }

                break;


            case 5:
                printf("Quem salva Frodo dos Espectros do Anel antes do hobbit chegar a Valfenda?"
                       "\na) Arwen"
                       "\nb) Legolas"
                       "\nc) Aragorn"
                       "\nd) Glorfindel\n");

                scanf(" %c", &res5);

                while (res5 != 'A' && res5 != 'B' && res5 != 'C' && res5 != 'D' &&
                       res5 != 'a' && res5 != 'b' && res5 != 'c' && res5 != 'd') {

                    printf("Resposta inválida! Digite A, B, C ou D: ");
                    scanf(" %c", &res5);
                }

                if (res5 == 'D' || res5 == 'd') {

                    printf("Correto! \n");
                    pontos += 2;

                } else {

                    printf("Errado, a resposta certa era 'd) Glorfindel' :(\n");

                }

                break;
        }
    }

    printf("\n===== PLACAR FINAL =====\n");
    printf("Acertos: %d\n", pontos / 2);
    printf("Total: %d\n", perguntas);
    printf("Percentual: %.2f%%\n", ((pontos / 2.0) / perguntas) * 100);

    return 0;
}

