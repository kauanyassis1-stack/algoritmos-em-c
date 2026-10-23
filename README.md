# Algoritmos em C

Programas desenvolvidos na disciplina de **Algoritmos e Pensamento Computacional** do curso de Engenharia de Software (UNICID).

| Pasta | Programa | Conceitos praticados |
|---|---|---|
| [`01-chatbot-loja`](01-chatbot-loja) | Chatbot de atendimento de uma loja de roupas | Laço `do-while`, `switch`, `if/else`, validação de entradas |
| [`02-vendas-cinema`](02-vendas-cinema) | Controle de ingressos vendidos por filme no mês | Vetores, matrizes, laços `for`, gráfico de barras no terminal |
| [`03-tempo-onibus`](03-tempo-onibus) | Ordenação dos tempos de chegada de ônibus em um ponto | Algoritmo Bubble Sort, ordem crescente e decrescente |

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

## 03 · Tempo de Chegada dos Ônibus

Ordena os tempos (em minutos) de chegada de 10 ônibus em um ponto usando o método **Bubble Sort**.

- Vetor de 10 posições inicializado com os tempos simulados
- Exibição dos dados na ordem original
- Bubble Sort em ordem crescente (ônibus que chega primeiro) e decrescente (o que demora mais)
- A única mudança entre as duas ordenações é o sinal da comparação (`>` ou `<`)

```
--- Ordem crescente (o que chega primeiro) ---
 1º:  3 minutos
 2º:  5 minutos
 3º:  6 minutos
 ...
10º: 27 minutos
```

---

## Como compilar e executar

É necessário ter o GCC instalado (no Windows, via [MSYS2](https://www.msys2.org)). Dentro da pasta do programa:

```
gcc Cinema.c -o Cinema
./Cinema
```

No Windows, rode `chcp 65001` antes de executar para exibir os acentos corretamente.
