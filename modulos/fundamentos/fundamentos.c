/*
============================================================
        GUIA DE FUNDAMENTOS DA LINGUAGEM C
============================================================

Este arquivo apresenta os principais fundamentos da linguagem
C de forma teórica, sem exemplos práticos de código.
*/


/*
============================================================
1. INTRODUÇÃO À LINGUAGEM C
============================================================

C é uma linguagem de programação de propósito geral,
conhecida por seu desempenho, eficiência e proximidade com
o funcionamento do computador.

A linguagem permite trabalhar com diferentes níveis de
abstração e oferece recursos para manipulação direta da
memória.

C possui grande importância na computação e influenciou
diversas linguagens de programação modernas.
*/


/*
============================================================
2. VARIÁVEIS E TIPOS DE DADOS
============================================================

Variáveis são espaços de memória utilizados para armazenar
informações durante a execução de um programa.

Cada variável possui um tipo, que determina quais valores
podem ser armazenados e como esses valores serão tratados.

Principais tipos:

- int: números inteiros.
- float: números de ponto flutuante.
- double: números de ponto flutuante com maior precisão.
- char: armazenamento de um caractere.

Também existem modificadores que podem alterar características
dos tipos, como:

- short
- long
- signed
- unsigned
*/


/*
============================================================
3. OPERADORES
============================================================

Operadores são símbolos utilizados para realizar operações
sobre valores e variáveis.

Principais categorias:

Operadores aritméticos:
- Soma
- Subtração
- Multiplicação
- Divisão
- Módulo

Operadores relacionais:
- Maior
- Menor
- Maior ou igual
- Menor ou igual
- Igual
- Diferente

Operadores lógicos:
- AND
- OR
- NOT

Operadores de atribuição:
- Atribuição
- Atribuição com soma
- Atribuição com subtração
- Atribuição com multiplicação
- Atribuição com divisão
*/


/*
============================================================
4. ESTRUTURAS CONDICIONAIS
============================================================

Estruturas condicionais permitem que o programa tome
decisões de acordo com determinadas condições.

As principais estruturas são:

- if
- else
- else if
- switch

O if permite executar uma determinada parte do programa
quando uma condição é verdadeira.

O else permite definir uma alternativa quando a condição
anterior não é satisfeita.

O switch é utilizado para trabalhar com diferentes
possibilidades de escolha a partir de um determinado valor.
*/


/*
============================================================
5. ESTRUTURAS DE REPETIÇÃO
============================================================

Estruturas de repetição permitem executar um determinado
bloco de instruções várias vezes.

As principais estruturas são:

- for
- while
- do while

O for é utilizado principalmente quando existe controle
sobre a quantidade ou sequência das repetições.

O while executa uma repetição enquanto determinada condição
for verdadeira.

O do while executa o bloco pelo menos uma vez antes de
verificar a condição.
*/


/*
============================================================
6. ARRAYS
============================================================

Arrays são estruturas utilizadas para armazenar vários
valores do mesmo tipo em uma única estrutura.

Os elementos de um array são organizados em posições
numeradas por índices.

Em C, o primeiro índice de um array é 0.

O tamanho de um array é definido durante sua declaração
e deve ser considerado ao acessar seus elementos.
*/


/*
============================================================
7. STRINGS
============================================================

Strings são sequências de caracteres utilizadas para
representar textos.

Na linguagem C, strings são armazenadas em arrays de
caracteres e terminadas pelo caractere especial '\0'.

A biblioteca padrão da linguagem fornece funções para
trabalhar com strings, como funções de cópia, comparação,
concatenação e obtenção do tamanho.
*/


/*
============================================================
8. FUNÇÕES
============================================================

Funções são blocos de código responsáveis por executar
determinadas tarefas.

Elas permitem organizar melhor o programa, reduzir
repetição de código e facilitar a manutenção.

Uma função pode:

- Receber parâmetros.
- Executar operações.
- Retornar um valor.
- Não retornar nenhum valor.

A utilização de funções também permite dividir programas
maiores em partes menores e mais organizadas.
*/


/*
============================================================
9. PONTEIROS
============================================================

Ponteiros são variáveis utilizadas para armazenar endereços
de memória.

Eles permitem acessar e manipular dados indiretamente por
meio de seus endereços.

Os ponteiros são importantes para diversos recursos da
linguagem C, incluindo:

- Manipulação de memória.
- Arrays.
- Funções.
- Estruturas de dados.
- Alocação dinâmica de memória.

O uso incorreto de ponteiros pode causar erros de memória
e comportamento inesperado no programa.
*/


/*
============================================================
10. STRUCT
============================================================

Struct é um recurso utilizado para criar tipos de dados
personalizados.

Uma struct permite agrupar diferentes tipos de informações
em uma única estrutura.

É muito utilizada para representar entidades que possuem
várias características.

Por exemplo, uma estrutura pode representar um aluno,
cliente, produto ou funcionário.
*/


/*
============================================================
11. ENTRADA E SAÍDA DE DADOS
============================================================

A linguagem C possui recursos para realizar entrada e saída
de informações.

A biblioteca stdio.h disponibiliza funções importantes
para comunicação com o usuário e manipulação de arquivos.

Entre os recursos mais conhecidos estão:

- printf: saída de dados.
- scanf: entrada formatada de dados.

Esses recursos permitem que programas recebam informações
e apresentem resultados.
*/


/*
============================================================
12. BIBLIOTECAS
============================================================

Bibliotecas fornecem funções e recursos que podem ser
utilizados pelos programas.

A linguagem C possui uma biblioteca padrão com recursos
para diversas tarefas.

Algumas bibliotecas importantes incluem:

- stdio.h
- stdlib.h
- string.h
- math.h
- time.h

A utilização de bibliotecas permite reutilizar recursos
sem precisar implementar todas as funcionalidades
manualmente.
*/


/*
============================================================
13. GERENCIAMENTO DE MEMÓRIA
============================================================

C permite trabalhar diretamente com a memória do computador.

A linguagem possui recursos para alocação e liberação
dinâmica de memória.

As principais funções relacionadas à alocação dinâmica
estão disponíveis na biblioteca stdlib.h.

Entre elas estão:

- malloc
- calloc
- realloc
- free

O gerenciamento correto da memória é importante para evitar
vazamentos de memória e acessos inválidos.
*/


/*
============================================================
14. COMPILAÇÃO
============================================================

C é uma linguagem normalmente compilada.

O código-fonte escrito pelo programador passa por um processo
de compilação que transforma o código em uma forma que pode
ser executada pelo computador.

O compilador também verifica diversos aspectos do código
e pode apresentar erros e avisos durante o processo.

Um dos compiladores mais utilizados para C é o GCC.
*/


/*
============================================================
15. RESUMO
============================================================

Os fundamentos apresentados neste guia formam uma base para
o desenvolvimento utilizando a linguagem C.

Os principais conceitos são:

- Variáveis
- Tipos de dados
- Operadores
- Condicionais
- Repetições
- Arrays
- Strings
- Funções
- Ponteiros
- Structs
- Entrada e saída
- Bibliotecas
- Gerenciamento de memória
- Compilação

O domínio desses fundamentos facilita o aprendizado de
conceitos mais avançados da programação e da linguagem C.
*/