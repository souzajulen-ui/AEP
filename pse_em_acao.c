#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    /* PSE em Acao - Julen Tartarelli e Pedro Zanchetti */

    int codigo[50], prevista[50], efetiva[50];
    char escola[50][50], tema[50][50], data[50][20];
    char publico[50][50], responsavel[50][50], situacao[50][20];
    int total = 0, opcao = 0, i, pos, cod, nova;
    int planejadas, realizadas, canceladas, previstos, atendidos;
    char busca[50];

    while (opcao != 6) {
        printf("\n===== PSE EM ACAO =====\n");
        printf("1 - Cadastrar acao\n2 - Listar acoes\n3 - Pesquisar acao\n");
        printf("4 - Atualizar situacao\n5 - Gerar resumo\n6 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (total == 50) {
                printf("Limite de 50 acoes atingido!\n");
            } else {
                printf("Codigo: ");
                scanf("%d", &cod);
                pos = -1;
                for (i = 0; i < total; i++) {
                    if (codigo[i] == cod) pos = i;
                }
                if (cod <= 0 || pos != -1) {
                    printf("Codigo invalido ou ja cadastrado!\n");
                } else {
                    codigo[total] = cod;
                    printf("Escola: ");
                    scanf(" %[^\n]", escola[total]);
                    printf("Tema: ");
                    scanf(" %[^\n]", tema[total]);
                    printf("Data prevista: ");
                    scanf(" %[^\n]", data[total]);
                    printf("Publico-alvo: ");
                    scanf(" %[^\n]", publico[total]);
                    printf("Responsavel: ");
                    scanf(" %[^\n]", responsavel[total]);
                    printf("Quantidade prevista: ");
                    scanf("%d", &prevista[total]);
                    while (prevista[total] <= 0) {
                        printf("Deve ser maior que zero. Digite novamente: ");
                        scanf("%d", &prevista[total]);
                    }
                    efetiva[total] = 0;
                    strcpy(situacao[total], "Planejada");
                    total++;
                    printf("Acao cadastrada com sucesso!\n");
                }
            }

        } else if (opcao == 2) {
            if (total == 0) printf("Nenhuma acao cadastrada.\n");
            for (i = 0; i < total; i++) {
                printf("%d | %s | %s | %s | Prevista: %d | Efetiva: %d | %s\n",
                       codigo[i], escola[i], tema[i], data[i], prevista[i], efetiva[i], situacao[i]);
            }

        } else if (opcao == 3) {
            printf("Digite a escola ou o tema: ");
            scanf(" %[^\n]", busca);
            pos = -1;
            for (i = 0; i < total; i++) {
                if (strcmp(escola[i], busca) == 0 || strcmp(tema[i], busca) == 0) {
                    printf("%d | %s | %s | %s | Responsavel: %s | %s\n",
                           codigo[i], escola[i], tema[i], data[i], responsavel[i], situacao[i]);
                    pos = i;
                }
            }
            if (pos == -1) printf("Nenhuma acao encontrada.\n");

        } else if (opcao == 4) {
            printf("Codigo da acao: ");
            scanf("%d", &cod);
            pos = -1;
            for (i = 0; i < total; i++) {
                if (codigo[i] == cod) pos = i;
            }
            if (pos == -1) {
                printf("Registro inexistente!\n");
            } else {
                printf("1 - Planejada  2 - Realizada  3 - Cancelada\nNova situacao: ");
                scanf("%d", &nova);
                if (nova == 1) {
                    strcpy(situacao[pos], "Planejada");
                    efetiva[pos] = 0;
                } else if (nova == 2) {
                    strcpy(situacao[pos], "Realizada");
                    printf("Participantes atendidos: ");
                    scanf("%d", &efetiva[pos]);
                } else if (nova == 3) {
                    strcpy(situacao[pos], "Cancelada");
                    efetiva[pos] = 0;
                } else {
                    printf("Opcao invalida!\n");
                }
                printf("Situacao atual: %s\n", situacao[pos]);
            }

        } else if (opcao == 5) {
            planejadas = 0; realizadas = 0; canceladas = 0;
            previstos = 0; atendidos = 0;
            for (i = 0; i < total; i++) {
                if (strcmp(situacao[i], "Planejada") == 0) planejadas++;
                if (strcmp(situacao[i], "Cancelada") == 0) canceladas++;
                if (strcmp(situacao[i], "Realizada") == 0) {
                    realizadas++;
                    previstos = previstos + prevista[i];
                    atendidos = atendidos + efetiva[i];
                }
            }
            printf("\nTotal: %d | Planejadas: %d | Realizadas: %d | Canceladas: %d\n",
                   total, planejadas, realizadas, canceladas);
            printf("Participantes previstos: %d | Atendidos: %d\n", previstos, atendidos);
            if (previstos > 0) {
                printf("Percentual de participacao: %.1f%%\n", atendidos * 100.0 / previstos);
            }

        } else if (opcao == 6) {
            printf("Saindo do sistema...\n");
        } else {
            printf("Opcao invalida!\n");
        }
    }

    return 0;
}
