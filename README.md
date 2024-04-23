# Linguagem de Programação - Engenharia Mecatrônica

> Este repositório contém os trabalhos da disciplina de *Linguagem de Programação* do curso de Engenharia Mecatrônica no [IFCE](https://ifce.edu.br/) 

### Observações:
- Os comandos de execução do projeto orientados a seguir funcionam apenas em sitemas operacionais Linux
- Há um diretório [/lib](lib) com funções utilizadas em mais de arquivo, como: fatorial e raiz quadrada

## 1 - Trabalho de introdução à linguagem de programação **C**

### Parte 1
 - [Questão 1](quadratic/main.c): Dados os coeficientes de uma função do 2° grau, encontrar as raízes reais da função.
 ```
 >>> make quadratic
 ```
 - [Questão 2](cosine/main.c): Dado um ângulo x em radianos, calcular o cosseno.
 ```
 >>> make cosine
 ```
 - [Questão 3](contest/main.c): Ler uma quantidade desconhecida de notas até que seja digitado um número negativo e imprimir o número de candidatos, a média, a maior e a menor das notas.
 ```
 >>> make contest
 ```
 - [Questão 4](fibonacci/main.c): Calcular os primeiros 20 termos da série de Fibonacci.
 ```
 >>> make fibonacci
 ```
 - [Questão 5](temperature/main.c): Ler uma quantidade desconhecida de temperaturas até que seja digitado o número 1000 e imprimir a quantidade de dados coletados, a média, o maior e o menor valor das temperaturas.
 ```
 >>> make temperature
 ```

### Parte 2
 - [Questão](menu/main.c): Ler um número e executar uma operação, dentre as quais são:
    > 1 - Calcular o fatorial do número.
    > 2 - Calcular a raiz quadrada do número.
    > 3 - Verificar se o número é primo.
    > 4 - Calcular o somatório dos dígitos do número.
 ```
 >>> make menu
 ```

## 2 - Funções e bibliotecas em **C**

### Partes 1 e 2
 - [Questão](calculator/main.c): Ler um número e executar a operação correspodente com as funções da [biblioteca](calculator/calculator.c).
 ```
 >>> make calculator
 ```

## 3 - Arquivos em **C**

### Parte 1
 - [Questão](fileOperations/main.c): Ler números em um arquivo e verificar se são primos, além de calcular o seu fatorial e raiz quadrada.
 ```
 >>> make fileOperations
 ```

### Parte 2
 - [Questão](fileTriangle/main.c): Ler os números de cada linha de um arquivo e verificar se podem formar um triângulo, caso possam, informar qual.
 ```
 >>> make fileTriangle
 ```

## 4 - Vetores e matrizes em **C**

### Parte 1
 - [Questão](vector/main.c): Preencher um vetor com 10 valores e imprimir o maior, o menor,a média e o desvio padrão dos valores, além de retornar se cada número é primo e a soma dos sues dígitos.
 ```
 >>> make vector
 ```

### Parte 2
 - [Questão](matrix/main.c): Preencher uma matriz 3x10, a qual representa as notas de
 10 alunos em 3 disciplinas, verificar se cada aluno foi aprovado com média maior
 ou igual a 6 e calcular a média, a maior e a menor nota de cada disciplina.
 ```
 >>> make matrix
 ```
