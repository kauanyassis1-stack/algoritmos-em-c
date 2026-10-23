/*
 * Sistema de Controle de Vendas de Cinema
 * Registra os ingressos vendidos por filme durante o mês,
 * calcula total, média, filme mais e menos assistido
 * e exibe um gráfico de barras (desafio bônus).
 */

#include <stdio.h>
#include <locale.h>

#define NUM_FILMES 5      /* quantidade de filmes em cartaz no mês */
#define ESCALA 10         /* cada # do gráfico representa 10 ingressos */

int main() {
    setlocale(LC_ALL, ".UTF-8");

    /* Estruturas de armazenamento */
    char filmes[NUM_FILMES][50];   /* matriz: nome de cada filme */
    int ingressos[NUM_FILMES];     /* vetor: ingressos vendidos por filme */

    int total = 0;                 /* soma de todos os ingressos */
    int mais_visto = 0;            /* índice do filme mais assistido */
    int menos_visto = 0;           /* índice do filme menos assistido */
    int i, j;                      /* contadores dos laços */
    float media;

    /* ---------- Cabeçalho ---------- */
    printf("==================================================\n");
    printf("        CONTROLE DE VENDAS DE CINEMA\n");
    printf("==================================================\n");
    printf("Informe o nome e os ingressos vendidos no mês\n");
    printf("para cada um dos %d filmes em cartaz.\n\n", NUM_FILMES);

    /* ---------- Leitura dos dados ---------- */
    /* O laço percorre os índices 0 a 4 do vetor e da matriz */
    for (i = 0; i < NUM_FILMES; i++) {
        printf("--- Filme %d ---\n", i + 1);

        printf("Nome do filme: ");
        scanf(" %49[^\n]", filmes[i]);   /* lê o nome com espaços */

        printf("Ingressos vendidos no mês: ");

        /* Validação: repete enquanto a entrada não for número ou for negativa */
        while (scanf("%d", &ingressos[i]) != 1 || ingressos[i] < 0) {
            printf("Valor inválido! Digite um número maior ou igual a zero: ");
            while (getchar() != '\n');   /* limpa o buffer do teclado */
        }
        printf("\n");
    }

    /* ---------- Processamento ---------- */
    /* Soma os ingressos e encontra o maior e o menor valor do vetor */
    for (i = 0; i < NUM_FILMES; i++) {
        total += ingressos[i];

        if (ingressos[i] > ingressos[mais_visto]) {
            mais_visto = i;
        }
        if (ingressos[i] < ingressos[menos_visto]) {
            menos_visto = i;
        }
    }

    media = (float) total / NUM_FILMES;

    /* ---------- Tabela de resultados ---------- */
    printf("==================================================\n");
    printf("              RELATÓRIO DO MÊS\n");
    printf("==================================================\n");
    printf("%-4s %-25s %10s\n", "N.", "Filme", "Ingressos");
    printf("--------------------------------------------------\n");

    for (i = 0; i < NUM_FILMES; i++) {
        printf("%-4d %-25s %10d\n", i + 1, filmes[i], ingressos[i]);
    }

    printf("--------------------------------------------------\n");
    printf("Total de ingressos vendidos: %d\n", total);
    printf("Média de ingressos por filme: %.1f\n", media);
    printf("Filme mais assistido:  %s (%d ingressos)\n",
           filmes[mais_visto], ingressos[mais_visto]);
    printf("Filme menos assistido: %s (%d ingressos)\n",
           filmes[menos_visto], ingressos[menos_visto]);

    /* ---------- Gráfico de barras (desafio bônus) ---------- */
    printf("\n==================================================\n");
    printf("     GRÁFICO DE BARRAS (cada # = %d ingressos)\n", ESCALA);
    printf("==================================================\n");

    /* Laço externo: percorre os filmes */
    for (i = 0; i < NUM_FILMES; i++) {
        printf("%-25s | ", filmes[i]);

        /* Laço interno: imprime um # para cada 10 ingressos */
        for (j = 0; j < ingressos[i] / ESCALA; j++) {
            printf("#");
        }

        printf(" %d", ingressos[i]);

        /* Destaca o mais e o menos assistido no gráfico */
        if (i == mais_visto) {
            printf("  <- MAIS ASSISTIDO");
        } else if (i == menos_visto) {
            printf("  <- MENOS ASSISTIDO");
        }
        printf("\n");
    }

    printf("==================================================\n");
    printf("Fim do relatório. Obrigado por usar o sistema!\n");

    return 0;
}
