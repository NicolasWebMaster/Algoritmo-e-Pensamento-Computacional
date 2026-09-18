# Análise de 20 Números

## 1. Identificação

Nome do aluno: Nicolas de Araújo Ribeiro

Disciplina: Algoritmo e Pensamento Computacional

Professora: Profa. Karla Sartin

Título do projeto: Análise de 20 Números com Vetor

## 2. Objetivo

O objetivo do programa é receber 20 números inteiros e armazená-los em um vetor. Depois, o programa realiza alguns cálculos e verificações, mostrando a soma, a média, os números negativos, a quantidade de números positivos, o maior e o menor valor.

Ao final, todos os números armazenados no vetor são exibidos.

## 3. Funcionamento do programa

Primeiro, o programa solicita ao usuário 20 números inteiros.

Cada número digitado é armazenado no vetor `vet[20]`. Dessa forma, os valores ficam guardados para serem analisados posteriormente.

Durante a leitura dos números, o programa calcula a soma de todos os valores e verifica quais são positivos para fazer a contagem.

Depois que os 20 números são armazenados, o programa percorre o vetor para encontrar o maior e o menor valor.

Em seguida, calcula a média dividindo a soma pela quantidade de números, que é 20.

O programa também percorre o vetor para encontrar os números negativos e exibi-los na tela.

Por último, apresenta todos os resultados de forma organizada e mostra novamente todos os números armazenados no vetor.

## 4. Estruturas utilizadas

O programa utiliza a estrutura de repetição `for`.

O primeiro `for` é utilizado para receber os 20 números e armazená-los no vetor.

Outro `for` é utilizado para comparar os valores e encontrar o maior e o menor número.

Também é utilizado um `for` para verificar os números negativos e outro para mostrar todos os valores armazenados.

O `for` foi escolhido porque já sabemos quantas vezes precisamos repetir cada ação. Como o vetor possui 20 posições, fica mais simples utilizar essa estrutura para percorrer seus valores.

## 5. Variáveis principais

A variável `vet[20]` armazena os 20 números.

A variável `i` controla as posições do vetor nos laços de repetição.

A variável `soma` armazena a soma de todos os números.

A variável `media` armazena a média dos valores.

A variável `contPos` conta quantos números positivos foram digitados.

As variáveis `maior` e `menor` armazenam, respectivamente, o maior e o menor número encontrado.

## 6. Como executar

Para executar o programa, é necessário ter um compilador de linguagem C, como o GCC.

O código deve estar salvo no arquivo `monitoramento.c`.

No terminal, dentro da pasta do projeto, utilize:

gcc monitoramento.c -o monitoramento

Para executar no Linux ou macOS:

./monitoramento

No Windows, utilizando GCC/MinGW:

monitoramento.exe

## 7. Estrutura do repositório
O projeto pode ser organizado da seguinte forma:

desafio-vetor/
│
├── monitoramento.c
└── README.md

O arquivo monitoramento.c contém o código-fonte do programa.

O arquivo README.md contém a documentação do projeto.

## 8. Conclusão
O programa recebe 20 números e armazena todos eles em um vetor. Depois, percorre os valores para realizar os cálculos e verificações.

Com isso, consegue mostrar a soma, a média, os números negativos, a quantidade de positivos, o maior e o menor valor.

No final, o programa também mostra todos os números que foram digitados.

De forma resumida, o funcionamento acontece assim:

Entrada dos números → armazenamento no vetor → processamento → cálculos → apresentação dos resultados.



