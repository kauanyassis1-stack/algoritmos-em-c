/*
 * Ordenação com Bubble Sort - Tempo de chegada dos ônibus
 * Exibe os tempos (em minutos) de chegada de 10 ônibus em um ponto,
 * na ordem original, em ordem crescente e em ordem decrescente.
 */

#include <stdio.h>
#include <locale.h>

#define TAMANHO 10

int main() {
    setlocale(LC_ALL, ".UTF-8");

    /* Vetor com o tempo (em minutos) que cada ônibus leva para chegar ao ponto */
    int tempos[TAMANHO] = {12, 5, 27, 8, 19, 3, 15, 22, 10, 6};
    int i, j, temp;

    printf("==============================================\n");
    printf("   TEMPO DE CHEGADA DOS ÔNIBUS NO PONTO\n");
    printf("==============================================\n\n");

    /* ---------- Dados originais ---------- */
    printf("--- Tempos originais (sem ordenação) ---\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Ônibus %2d: %2d minutos\n", i + 1, tempos[i]);
    }

    /* ---------- Bubble Sort: ordem crescente ---------- */
    /* Compara vizinhos e troca se o da esquerda for maior */
    for (i = 0; i < TAMANHO - 1; i++) {
        for (j = 0; j < TAMANHO - 1 - i; j++) {
            if (tempos[j] > tempos[j + 1]) {
                temp = tempos[j];
                tempos[j] = tempos[j + 1];
                tempos[j + 1] = temp;
            }
        }
    }

    printf("\n--- Ordem crescente (o que chega primeiro) ---\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%2dº: %2d minutos\n", i + 1, tempos[i]);
    }

    /* ---------- Bubble Sort: ordem decrescente ---------- */
    /* Mesma lógica, com o sinal da comparação invertido */
    for (i = 0; i < TAMANHO - 1; i++) {
        for (j = 0; j < TAMANHO - 1 - i; j++) {
            if (tempos[j] < tempos[j + 1]) {
                temp = tempos[j];
                tempos[j] = tempos[j + 1];
                tempos[j + 1] = temp;
            }
        }
    }

    printf("\n--- Ordem decrescente (o que demora mais) ---\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%2dº: %2d minutos\n", i + 1, tempos[i]);
    }

    printf("\n==============================================\n");

    return 0;
}
