/*
 * Chatbot de Atendimento - Loja Style
 * Menu interativo com laço do-while, decisões com switch e if/else,
 * validação de entradas e resumo de atendimentos ao encerrar.
 */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF-8");

    int opcao;              /* opção escolhida no menu */
    float valor;            /* valor da compra (opção 4) */
    int atendimentos = 0;   /* total de consultas realizadas */

    /* ---------- Boas-vindas ---------- */
    printf("========================================\n");
    printf("     CHATBOT DE ATENDIMENTO - LOJA STYLE\n");
    printf("========================================\n");
    printf("Sistema de atendimento automático da Loja Style.\n");
    printf("Aqui você pode tirar dúvidas sobre produtos, tamanhos,\n");
    printf("trocas e formas de pagamento.\n\n");
    printf("Olá! Seja bem-vindo(a) à Loja Style! Como posso ajudar?\n\n");

    /* ---------- Menu: repete até o usuário digitar 0 ---------- */
    do {
        printf("------------- MENU -------------\n");
        printf("1 - Ver produtos disponíveis\n");
        printf("2 - Tabela de tamanhos\n");
        printf("3 - Política de trocas\n");
        printf("4 - Formas de pagamento\n");
        printf("5 - Falar com um atendente\n");
        printf("0 - Sair\n");
        printf("--------------------------------\n");
        printf("Digite a opção desejada: ");

        /* Validação: rejeita letras e símbolos sem travar o menu */
        if (scanf("%d", &opcao) != 1) {
            printf("\nEntrada inválida! Digite apenas números.\n\n");
            while (getchar() != '\n');   /* limpa o buffer do teclado */
            opcao = -1;
            continue;
        }

        switch (opcao) {
            case 1:
                printf("\nProdutos disponíveis: camisetas, calças, vestidos,\n");
                printf("jaquetas e acessórios. Confira as novidades no site!\n\n");
                atendimentos++;
                break;

            case 2:
                printf("\nTabela de tamanhos:\n");
                printf("P  - Busto até 88 cm\n");
                printf("M  - Busto de 89 a 96 cm\n");
                printf("G  - Busto de 97 a 104 cm\n");
                printf("GG - Busto acima de 104 cm\n\n");
                atendimentos++;
                break;

            case 3:
                printf("\nTrocas podem ser feitas em até 30 dias após a compra,\n");
                printf("com a etiqueta e a nota fiscal.\n\n");
                atendimentos++;
                break;

            case 4:
                /* Regra de negócio: desconto no Pix conforme o valor */
                printf("\nAceitamos Pix, cartão de crédito, débito e boleto.\n");
                printf("Digite o valor da sua compra: R$ ");

                if (scanf("%f", &valor) != 1) {
                    printf("Entrada inválida! Digite apenas números.\n\n");
                    while (getchar() != '\n');
                } else if (valor <= 0) {
                    printf("Valor inválido! Digite um valor maior que zero.\n\n");
                } else if (valor >= 300) {
                    printf("Pagando no Pix você ganha 15%% de desconto!\n");
                    printf("Valor final: R$ %.2f\n\n", valor * 0.85);
                } else if (valor >= 150) {
                    printf("Pagando no Pix você ganha 10%% de desconto!\n");
                    printf("Valor final: R$ %.2f\n\n", valor * 0.90);
                } else {
                    printf("Compras acima de R$ 150 ganham desconto no Pix.\n");
                    printf("Valor final: R$ %.2f\n\n", valor);
                }
                atendimentos++;
                break;

            case 5:
                printf("\nUm atendente vai falar com você em instantes.\n");
                printf("Horário de atendimento: seg a sex, das 9h às 18h.\n\n");
                atendimentos++;
                break;

            case 0:
                break;

            default:
                /* Qualquer número fora de 0 a 5 */
                printf("\nOpção inválida! Digite um número de 0 a 5.\n\n");
                break;
        }

    } while (opcao != 0);

    /* ---------- Encerramento ---------- */
    printf("\n========================================\n");
    printf("Atendimento encerrado.\n");
    printf("Total de consultas realizadas: %d\n", atendimentos);
    printf("Obrigado por falar com a Loja Style! Volte sempre!\n");
    printf("========================================\n");

    return 0;
}
