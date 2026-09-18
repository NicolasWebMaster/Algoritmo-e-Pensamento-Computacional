# Análise de 10 Números

## 1. Identificação

Nome do aluno: Nicolas de Araújo Ribeiro

Disciplina: Algoritmo e Pensamento Computacional

Professora: Profa. Karla Sartin

Título do projeto: Análise de 10 Números com Vetor

## 2. Objetivo

O objetivo do programa é receber 10 números, armazenar esses valores em um vetor e realizar algumas operações com eles.

O programa organiza os números em ordem crescente e decrescente, encontra a moda, calcula a média e encontra a mediana.

O programa também permite trabalhar com números negativos e números decimais.

## 3. Funcionamento do programa

Primeiro, o programa solicita que o usuário digite 10 números.

Os valores são armazenados no vetor `v[10]`. Ao mesmo tempo, cada número digitado é somado na variável `soma`.

Depois que os 10 números são armazenados, o programa utiliza o método de ordenação Bubble Sort para colocar os valores em ordem crescente.

Após a ordenação, a sequência crescente é formada pelas posições do vetor do início até o final.

A sequência decrescente é apresentada percorrendo o vetor do final para o início.

A média é calculada somando todos os números e dividindo o resultado por 10.

A mediana é encontrada utilizando os dois valores que ficam no meio do vetor ordenado. Como existem 10 números, são utilizadas as posições 4 e 5, e os dois valores são somados e divididos por 2.

Para encontrar a moda, o programa compara cada número com todos os outros valores do vetor. A variável `qtd` conta quantas vezes cada número aparece. O valor que aparecer mais vezes é armazenado na variável `md`.

Caso todos os números apareçam somente uma vez, o programa informa que não existe moda.

## 4. Estruturas utilizadas

O programa utiliza estruturas de repetição `for`.

O primeiro `for` é utilizado para receber os 10 números e armazená-los no vetor.

Os dois `for` seguintes são usados para ordenar os números em ordem crescente. Eles fazem parte do método Bubble Sort, comparando os valores vizinhos e trocando suas posições quando necessário.

Depois, outros `for` são utilizados para encontrar a moda, comparar os números e apresentar as sequências na tela.

O uso dos `for` facilita o trabalho porque permite percorrer as posições do vetor sem precisar repetir o mesmo código várias vezes.

## 5. Principais variáveis

A variável `v[10]` armazena os 10 números digitados.

A variável `t` é utilizada temporariamente durante a troca de posição dos números na ordenação.

A variável `soma` guarda a soma dos 10 números.

A variável `med` guarda o resultado da média.

A variável `mediana` guarda o resultado da mediana.

A variável `md` guarda o número que possui a maior quantidade de repetições.

A variável `qtd` conta quantas vezes um determinado número aparece.

A variável `maior` guarda a maior quantidade de vezes que um número apareceu.

As variáveis `i` e `j` são utilizadas para controlar os laços `for`.

## 6. Como executar

É necessário ter um compilador de linguagem C instalado, como o GCC.

O código deve ser salvo em um arquivo com extensão `.c`, por exemplo:

analise.c

Para compilar o programa, abra o terminal na pasta onde o arquivo está salvo e utilize:

gcc analise.c -o analise

Para executar no Linux ou macOS:

./analise

No Windows, utilizando GCC/MinGW:

analise.exe

## 7. Resultados apresentados
Depois que o usuário informa os 10 números, o programa apresenta:

Sequência dos números em ordem crescente;

Sequência dos números em ordem decrescente;

Moda;

Média;

Mediana.

Os resultados são apresentados de forma organizada por meio de um menu visual no terminal.

## 8. Conclusão
O programa recebe 10 números e armazena os valores em um vetor. Depois, organiza os números e realiza os cálculos necessários.

Primeiro acontece a entrada dos valores, depois o armazenamento no vetor, a ordenação dos números e os cálculos da moda, média e mediana.

No final, todas as informações são apresentadas de forma organizada para o usuário.

O programa utiliza números do tipo float, por isso aceita valores decimais e negativos.

De forma resumida, o funcionamento acontece assim:

Entrada dos números → armazenamento no vetor → ordenação → cálculos → apresentação dos resultados.
