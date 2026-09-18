#Desafio de Monitoramento de Temperatura
##1. Identificação

Nome do aluno: Nicolas de Araújo Ribeiro
Disciplina: Algoritmo e Pensamento Computacional
Professora: Profa. Karla Sartin
Título do projeto: Sistema de Monitoramento de Temperatura

#2. Objetivo

O objetivo deste projeto é desenvolver um programa em linguagem C capaz de realizar o monitoramento de temperaturas informadas pelo usuário.

O programa permite que o usuário defina um limite de temperatura e, em seguida, registre diversas leituras. Cada temperatura informada é comparada com o limite estabelecido.

Quando uma temperatura está acima do limite, o programa gera um alerta e incrementa uma contagem de temperaturas consecutivas acima do limite.

O monitoramento é encerrado automaticamente quando são registradas três temperaturas consecutivas acima do limite.

O projeto também realiza o tratamento de entradas inválidas, evitando que valores que não sejam numéricos sejam considerados como leituras válidas.

#3. Funcionamento do programa
##3.1 Definição do limite de temperatura

Inicialmente, o programa solicita ao usuário que informe o limite de temperatura que será utilizado durante o monitoramento.

O valor pode ser inteiro ou decimal, incluindo valores negativos.

###Exemplos:

30
25.5
-10
-5.75


O programa verifica se a entrada realizada é numérica. Caso o usuário digite um valor inválido, uma mensagem de erro é exibida e o limite é solicitado novamente.

A definição do limite utiliza uma estrutura do...while, pois é necessário solicitar o valor pelo menos uma vez e repetir a solicitação enquanto a entrada for inválida.

##3.2 Realização das leituras

Depois que o limite é definido, o programa inicia o monitoramento.

As temperaturas são informadas uma por vez pelo usuário. Para cada leitura, o programa verifica se o valor digitado é uma temperatura numérica válida.

Cada leitura válida é contabilizada no total de leituras realizadas.

O monitoramento é executado dentro de uma estrutura while.

##3.3 Tratamento de valores inválidos

O programa verifica o retorno da função scanf() para identificar se o usuário informou um valor numérico.

Quando uma entrada inválida é detectada, o programa:

Exibe uma mensagem informando que a entrada é inválida;

Limpa os caracteres restantes no buffer do teclado;

Ignora aquela entrada;

Retorna à solicitação de uma nova temperatura.

Dessa forma, valores como:

abc
teste
xyz


não são considerados temperaturas válidas.

##3.4 Identificação de temperaturas acima do limite

Depois que uma temperatura válida é registrada, ela é comparada com o limite definido pelo usuário.

A comparação realizada é:

if (temp > limite)


Caso a temperatura seja maior que o limite, o programa:

Exibe uma mensagem de alerta;

Incrementa a quantidade de temperaturas consecutivas acima do limite;

Informa ao usuário a quantidade atual de ocorrências consecutivas.

Por exemplo, se o limite for 30:

Temperatura: 32
ALERTA: temperatura acima do limite!

Temperatura: 35
ALERTA: temperatura acima do limite!


Nesse caso, existem duas temperaturas consecutivas acima do limite.

##3.5 Contagem de temperaturas consecutivas

O programa utiliza a variável:

int consecutivas = 0;


Essa variável representa a quantidade de temperaturas consecutivas que estão acima do limite.

Quando uma temperatura está acima do limite:

consecutivas++;


Quando uma temperatura está dentro do limite:

consecutivas = 0;


Isso é importante porque uma temperatura dentro do limite interrompe a sequência.

Por exemplo, considerando um limite de 30:

32  -> acima       -> 1 consecutiva
35  -> acima       -> 2 consecutivas
28  -> normal      -> 0 consecutivas
40  -> acima       -> 1 consecutiva


Mesmo que várias temperaturas tenham ficado acima do limite em momentos diferentes, o programa só encerra quando existirem três ocorrências consecutivas.

##3.6 Condição de encerramento

O monitoramento é encerrado automaticamente quando a variável consecutivas atinge o valor 3.

A condição utilizada é:

while (consecutivas < 3)


Portanto, enquanto houver menos de três temperaturas consecutivas acima do limite, novas leituras serão solicitadas.

Quando ocorrer:

1ª temperatura acima
2ª temperatura acima
3ª temperatura acima


o programa encerra automaticamente o monitoramento e apresenta um resumo final.

#4. Estruturas de repetição utilizadas
do...while

A estrutura do...while é utilizada na definição do limite de temperatura.

Ela foi escolhida porque a solicitação do limite precisa acontecer pelo menos uma vez. Caso o usuário informe um valor inválido, o programa repete a solicitação.

Trecho utilizado:

do {
    printf("\nDigite o limite de temperatura: ");

    entrada_valida = scanf("%f", &limite);

    while (getchar() != '\n');

    if (entrada_valida != 1) {
        printf("Entrada invalida! Digite um numero.\n");
    }

} while (entrada_valida != 1);

while

A estrutura while é utilizada para controlar o monitoramento das temperaturas.

O programa continua solicitando novas leituras enquanto a quantidade de temperaturas consecutivas acima do limite for menor que três.

Trecho principal:

while (consecutivas < 3) {
    // leitura e processamento da temperatura
}


Também é utilizado um while para limpar o buffer do teclado após a utilização do scanf():

while (getchar() != '\n');


A utilização dessas estruturas permite que o programa trabalhe de maneira repetitiva e controlada, encerrando o monitoramento somente quando a condição estabelecida pelo desafio for atingida.

#5. Como executar
Pré-requisitos

É necessário possuir um compilador de linguagem C instalado, como o GCC.

O código-fonte está no arquivo:

monitoramento.c

Compilação

Abra o terminal dentro da pasta do projeto e execute:

gcc monitoramento.c -o monitoramento

Execução no Linux ou macOS
./monitoramento

Execução no Windows

Caso esteja utilizando GCC/MinGW:

monitoramento.exe

#6. Testes realizados

Foram realizados três cenários de teste para verificar o funcionamento do programa.

##Teste 1 — Validação de entradas inválidas

Objetivo: verificar se o programa identifica entradas que não são numéricas.

Procedimento

Foi informado um valor inválido durante a definição do limite e também durante o monitoramento.

Exemplo:

Digite o limite de temperatura: abc
Entrada invalida! Digite um numero.

Digite o limite de temperatura: 30
Limite definido: 30.00 graus

Digite a temperatura: teste
Entrada invalida! Digite uma temperatura numerica.

Resultado esperado

O programa rejeita as entradas inválidas, exibe uma mensagem de erro e solicita uma nova entrada.

Resultado obtido

O comportamento esperado foi confirmado. As entradas inválidas não foram contabilizadas como leituras válidas e o programa continuou funcionando normalmente.

Evidência
evidencias/teste01.png

##Teste 2 — Temperaturas acima do limite, porém não consecutivas

Objetivo: verificar se a contagem de temperaturas consecutivas é reiniciada quando uma temperatura fica dentro do limite.

Limite utilizado
30

Temperaturas utilizadas
35
28
40
25
32

Comportamento esperado
35 -> acima do limite -> 1 consecutiva
28 -> dentro do limite -> 0 consecutivas
40 -> acima do limite -> 1 consecutiva
25 -> dentro do limite -> 0 consecutivas
32 -> acima do limite -> 1 consecutiva


Como nunca ocorreram três temperaturas consecutivas acima de 30, o programa não deveria ser encerrado automaticamente durante essa sequência.

Resultado obtido

O programa identificou corretamente as temperaturas acima do limite e reiniciou a contagem sempre que uma temperatura dentro do limite foi registrada.

Evidência
evidencias/teste02.png

##Teste 3 — Três temperaturas consecutivas acima do limite

Objetivo: verificar o encerramento automático do monitoramento.

Limite utilizado
30

Temperaturas utilizadas
25
32
35
40

Comportamento esperado
25 -> dentro do limite -> 0 consecutivas
32 -> acima do limite -> 1 consecutiva
35 -> acima do limite -> 2 consecutivas
40 -> acima do limite -> 3 consecutivas


Ao registrar a terceira temperatura consecutiva acima do limite, o programa deve encerrar automaticamente o monitoramento.

Resultado obtido

O programa identificou corretamente três temperaturas consecutivas acima do limite, exibiu a mensagem de alerta e encerrou o monitoramento automaticamente.

Evidência
evidencias/teste03.png

##7. Estrutura do repositório

O projeto está organizado da seguinte maneira:

desafio-monitoramento/
│
├── monitoramento.c
├── README.md
│
└── evidencias/
    ├── teste01.png
    ├── teste02.png
    └── teste03.png


O arquivo monitoramento.c contém o código-fonte do programa.

O arquivo README.md contém a documentação técnica, explicando o objetivo, funcionamento, estruturas de repetição, execução e testes.

A pasta evidencias contém as capturas de tela utilizadas para comprovar os testes realizados.

#8. Conclusão

O projeto implementa um sistema simples de monitoramento de temperatura utilizando a linguagem C e as estruturas de repetição while e do...while.

O programa permite definir um limite de temperatura, realizar leituras sucessivas, tratar entradas inválidas, identificar temperaturas acima do limite e controlar a quantidade de ocorrências consecutivas.

O monitoramento é encerrado automaticamente após três temperaturas consecutivas acima do limite, conforme a condição estabelecida para o desafio.

#9. Justificativa sobre a escolha das estruturas de repetição

Foi escolhida uma combinação das estruturas do...while e while porque cada uma delas atende melhor a uma parte diferente do algoritmo.

A estrutura do...while foi utilizada para definir o limite de temperatura. Nesse momento, o programa precisa obrigatoriamente solicitar uma entrada ao usuário pelo menos uma vez. Depois de realizar a tentativa de entrada, o programa verifica se o valor informado é válido. Se a entrada não for numérica, a condição do do...while faz com que a solicitação seja repetida.

Essa escolha é importante porque o do...while executa o bloco de comandos antes de testar a condição. Assim, a primeira solicitação do limite acontece obrigatoriamente, mesmo antes de existir uma entrada válida para ser analisada.

Já o while foi utilizado no monitoramento das temperaturas porque a repetição deve continuar somente enquanto a condição de monitoramento for verdadeira.

A condição utilizada é:

while (consecutivas < 3)


Nesse caso, a condição é verificada antes de cada nova execução do bloco. Enquanto o número de temperaturas consecutivas acima do limite for menor que três, o programa continua solicitando novas temperaturas.

A diferença entre as duas estruturas foi importante principalmente na validação do limite e no encerramento do monitoramento:

No do...while, a execução da solicitação ocorre primeiro e a condição é testada depois. Isso garante que o usuário tenha pelo menos uma oportunidade de informar o limite.

No while, a condição é testada antes de uma nova leitura. Isso permite que o programa pare de solicitar temperaturas assim que a quantidade de três ocorrências consecutivas for atingida.

Dessa forma, a combinação das duas estruturas torna o algoritmo adequado ao problema: o do...while garante a realização inicial da entrada que precisa ser validada, enquanto o while controla a continuidade do monitoramento de acordo com a condição de encerramento.


Esse conteúdo já está estruturado com **títulos, subtítulos, listas, blocos de código e exemplos**, então pode ser salvo diretamente como `README.md`.
