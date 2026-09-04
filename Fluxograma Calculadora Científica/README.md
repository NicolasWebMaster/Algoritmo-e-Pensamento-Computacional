# 🧮 Calculadora Científica - Flowgorithm

Projeto de uma **calculadora científica desenvolvida em Flowgorithm**, utilizando um fluxograma para representar a lógica e o funcionamento das operações matemáticas.

O arquivo do projeto utiliza a extensão `.fprg`, formato utilizado pelo **Flowgorithm** para armazenar fluxogramas.

---

## 🎯 Objetivo

O objetivo deste projeto é praticar **lógica de programação através de fluxogramas**, utilizando estruturas como:

- Condicionais `if`;
- Estrutura de repetição `while`;
- Estrutura de repetição `for`;
- Variáveis;
- Operações matemáticas;
- Entrada e saída de dados;
- Validação de opções;
- Cálculos científicos.

---

## 🧮 Operações científicas

O fluxograma possui diversas operações matemáticas e científicas.

Entre elas estão:

| Opção | Operação | Descrição |
|---:|---|---|
| 13 | Arco tangente | Calcula a função `arctan(a)` |
| 14 | Logaritmo base 10 | Calcula `log10(a)` |
| 15 | Logaritmo natural | Calcula `log(a)` |
| 16 | Exponencial | Calcula `exp(a)` |
| 17 | Valor absoluto | Calcula `abs(a)` |
| 18 | Parte inteira | Obtém a parte inteira de `a` |
| 19 | Sinal | Retorna o sinal de `a` |
| 20 | Fatorial | Calcula o fatorial de `a` |

> O arquivo completo pode conter outras operações além das apresentadas no trecho analisado.

---

## 🔢 Operação de fatorial

A opção `20` calcula o fatorial de um número utilizando um laço `for`.

Inicialmente, o resultado recebe `1`:

```text
result = 1
```

Depois, o programa percorre os números de `1` até o valor informado:

```text
for i = 1 até int(a)
```

A cada repetição:

```text
result = result * i
```

### Exemplo

Para:

```text
a = 5
```

O cálculo será:

```text
1 × 1 = 1
1 × 2 = 2
2 × 3 = 6
6 × 4 = 24
24 × 5 = 120
```

Resultado:

```text
120
```

---

## 🔬 Funções matemáticas utilizadas

O projeto utiliza funções matemáticas disponíveis no ambiente do Flowgorithm.

### Arco tangente

```text
arctan(a)
```

Calcula o arco tangente do valor informado.

---

### Logaritmo base 10

```text
log10(a)
```

Calcula o logaritmo de `a` na base 10.

Exemplo:

```text
log10(100) = 2
```

---

### Logaritmo natural

```text
log(a)
```

Calcula o logaritmo natural de `a`.

---

### Exponencial

```text
exp(a)
```

Calcula:

```text
e^a
```

---

### Valor absoluto

```text
abs(a)
```

Retorna o valor absoluto de `a`.

Exemplo:

```text
abs(-10) = 10
```

---

### Parte inteira

```text
int(a)
```

Obtém a parte inteira do valor.

---

### Sinal

```text
sgn(a)
```

Verifica o sinal do número.

De forma geral:

```text
sgn(a) = -1  → número negativo
sgn(a) =  0  → número igual a zero
sgn(a) =  1  → número positivo
```

---

## 🔄 Estruturas de repetição

O projeto utiliza estruturas de repetição para controlar o funcionamento da calculadora.

### While

O `while` permite que o programa continue executando operações até que o usuário escolha sair.

Fluxo simplificado:

```text
        INÍCIO
           ↓
      Exibe o menu
           ↓
    Usuário escolhe
           ↓
      Opção é válida?
       ↙          ↘
     SIM          NÃO
      ↓             ↓
Realiza operação  Mensagem
      ↓           de erro
      └──────┬──────┘
             ↓
        Volta ao menu
             ↓
         Escolheu 0?
          ↙      ↘
        NÃO      SIM
         ↓        ↓
      Continua    FIM
```

---

### For

O `for` é utilizado especificamente no cálculo do fatorial:

```text
result = 1

for i = 1 até int(a)
    result = result * i
```

---

## 🚨 Tratamento de opções inválidas

Caso o usuário informe uma opção que não existe, o fluxograma apresenta:

```text
Opcao Invalida!
```

A verificação é realizada através de uma estrutura condicional:

```text
if op != 0
    output "Opcao Invalida!"
```

Isso permite diferenciar uma opção inválida da opção `0`, utilizada para encerrar o programa.

---

## 📤 Exibição dos resultados

Depois que uma operação válida é realizada, o resultado é apresentado ao usuário utilizando uma mensagem semelhante a:

```text
=====> Resultado: [resultado]
```

Exemplo:

```text
=====> Resultado: 120
```

---

## 🧠 Lógica geral do projeto

O funcionamento básico pode ser representado da seguinte maneira:

```text
              INÍCIO
                 │
                 ▼
          ┌─────────────┐
          │ Exibe menu  │
          └──────┬──────┘
                 │
                 ▼
          ┌─────────────┐
          │ Lê opção   │
          └──────┬──────┘
                 │
                 ▼
          ┌─────────────┐
          │ Opção = 0?  │
          └──────┬──────┘
             SIM │ NÃO
              ↓  │
             FIM │
                 ▼
          ┌─────────────┐
          │ Opção válida?│
          └──────┬──────┘
             NÃO │ SIM
              ↓  │
     "Opção inválida" 
                 │
                 ▼
          Executa cálculo
                 │
                 ▼
          Exibe resultado
                 │
                 ▼
           Volta ao menu
```

---

## 🛠️ Tecnologias utilizadas

- **Flowgorithm**
- Arquivo `.fprg`
- Fluxogramas
- Operações matemáticas
- Estruturas condicionais
- Estruturas de repetição

---

## 📂 Estrutura do projeto

```text
Calculadora-Cientifica/
│
├── calculadora.fprg
│
└── README.md
```

---

## ▶️ Como executar

### 1. Instale o Flowgorithm

Faça a instalação do Flowgorithm em seu computador.

### 2. Abra o arquivo

Abra o arquivo:

```text
calculadora.fprg
```

diretamente no Flowgorithm.

### 3. Execute o fluxograma

Utilize a opção de execução do Flowgorithm para iniciar o programa.

O fluxograma exibirá o menu e permitirá que o usuário escolha as operações disponíveis.

---

## 📚 Conceitos praticados

Este projeto foi desenvolvido para praticar:

- Lógica de programação;
- Fluxogramas;
- Variáveis;
- Operadores matemáticos;
- Estruturas `if/else`;
- Estrutura `while`;
- Estrutura `for`;
- Funções matemáticas;
- Entrada de dados;
- Saída de dados;
- Validação de opções;
- Cálculo de fatorial.

---

## 🔮 Possíveis melhorias

Algumas melhorias podem ser adicionadas futuramente:

- [ ] Adicionar mais operações científicas;
- [ ] Adicionar potência;
- [ ] Adicionar raiz quadrada;
- [ ] Adicionar seno;
- [ ] Adicionar cosseno;
- [ ] Adicionar conversões de temperatura;
- [ ] Melhorar a validação dos valores inseridos;
- [ ] Criar um histórico de operações;
- [ ] Organizar as operações em categorias;
- [ ] Adicionar mensagens de erro para valores matematicamente inválidos.

---

## 🎓 Objetivo acadêmico

Este projeto tem como objetivo auxiliar no aprendizado de **lógica de programação e construção de algoritmos**, utilizando uma representação visual através de fluxogramas.

O uso do Flowgorithm permite visualizar de maneira mais clara o fluxo de execução do algoritmo antes de sua implementação em uma linguagem de programação tradicional.

---

## 👨‍💻 Autor

Projeto desenvolvido para fins de **estudo e aprendizado em lógica de programação**.

---

## 📄 Licença

Este projeto pode ser utilizado, modificado e estudado livremente para fins educacionais.
