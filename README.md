# Algoritmos em C

Programas desenvolvidos na disciplina de **Algoritmos e Pensamento Computacional** do curso de Engenharia de Software (UNICID).

## Controle de Vendas de Cinema (`Cinema.c`)

Programa que registra os ingressos vendidos por filme durante o mês e gera um relatório no terminal.

**Funcionalidades:**
- Leitura do nome e dos ingressos de 5 filmes usando laços `for`
- Armazenamento em vetor (`ingressos`) e matriz de caracteres (`filmes`)
- Validação de entrada: rejeita letras e números negativos
- Cálculo do total, da média e dos filmes mais e menos assistidos
- Tabela formatada com colunas alinhadas
- Gráfico de barras no terminal (cada `#` = 10 ingressos)

**Conceitos praticados:** vetores, matrizes, laços de repetição, estruturas condicionais e formatação de saída com `printf`.

### Exemplo de saída

```
Duna Parte Tres           | ################################ 320
Toy Story 5               | ######################################### 410  <- MAIS ASSISTIDO
O Auto da Compadecida 3   | ############### 150
Avatar 3                  | ########################### 275
Terror na Casa            | ###### 60  <- MENOS ASSISTIDO
```

## Como compilar e executar

É necessário ter o GCC instalado (no Windows, via [MSYS2](https://www.msys2.org)).

```
gcc Cinema.c -o Cinema
./Cinema
```

No Windows, para exibir os acentos corretamente, rode `chcp 65001` antes de executar.
