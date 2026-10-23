# Algoritmos em C

Programas desenvolvidos na disciplina de **Algoritmos e Pensamento Computacional** do curso de Engenharia de Software (UNICID).

| Pasta | Programa | Conceitos praticados |
|---|---|---|
| [`01-chatbot-loja`](01-chatbot-loja) | Chatbot de atendimento de uma loja de roupas | Laço `do-while`, `switch`, `if/else`, validação de entradas |
| [`02-vendas-cinema`](02-vendas-cinema) | Controle de ingressos vendidos por filme no mês | Vetores, matrizes, laços `for`, gráfico de barras no terminal |

---

## 01 · Chatbot de Atendimento – Loja Style

Menu interativo que responde dúvidas de clientes de uma loja de roupas.

- Menu contínuo com `do-while`, encerrado pela opção 0
- Respostas para produtos, tabela de tamanhos, trocas, pagamento e atendente
- Regra de negócio: desconto no Pix de 10% (a partir de R$ 150) ou 15% (a partir de R$ 300)
- Tratamento de opções inexistentes e de letras digitadas no lugar de números
- Resumo com o total de consultas ao encerrar

## 02 · Controle de Vendas de Cinema

Registra os ingressos vendidos de 5 filmes e gera um relatório no terminal.

- Nomes guardados em uma matriz de caracteres e ingressos em um vetor
- Validação de entrada: rejeita letras e números negativos
- Total, média e filmes mais e menos assistidos
- Tabela com colunas alinhadas e gráfico de barras (cada `#` = 10 ingressos)

```
Duna Parte Tres           | ################################ 320
Toy Story 5               | ######################################### 410  <- MAIS ASSISTIDO
O Auto da Compadecida 3   | ############### 150
Avatar 3                  | ########################### 275
Terror na Casa            | ###### 60  <- MENOS ASSISTIDO
```

---

## Como compilar e executar

É necessário ter o GCC instalado (no Windows, via [MSYS2](https://www.msys2.org)). Dentro da pasta do programa:

```
gcc Cinema.c -o Cinema
./Cinema
```

No Windows, rode `chcp 65001` antes de executar para exibir os acentos corretamente.
