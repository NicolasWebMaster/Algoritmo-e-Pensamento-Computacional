# 🧮 Calculadora Científica em Java

> Projeto desenvolvido durante a disciplina de **Algoritmo e Pensamento Computacional**, com o objetivo de praticar lógica de programação, estruturas de controle, métodos e operações matemáticas utilizando Java.

---

## 📖 Sobre o projeto

A **Calculadora Científica em Java** é um programa desenvolvido para colocar em prática os conhecimentos adquiridos durante a disciplina de **Algoritmo e Pensamento Computacional**.

O projeto possui um menu interativo no terminal, permitindo que o usuário escolha entre diferentes operações matemáticas e conversões de temperatura.

A calculadora foi desenvolvida com foco no aprendizado e na prática de conceitos fundamentais da programação, como:

- Variáveis;
- Tipos de dados;
- Entrada e saída de informações;
- Estruturas condicionais;
- Estruturas de repetição;
- `switch/case`;
- Métodos;
- Operadores matemáticos;
- Validação de dados;
- Tratamento de entradas inválidas;
- Funções matemáticas da classe `Math`.

---

## 🎯 Objetivos

O principal objetivo do projeto é **transformar os conceitos estudados em sala de aula em um programa funcional**.

Com o desenvolvimento da calculadora, foi possível praticar:

- 🧠 Raciocínio lógico;
- 🔢 Operações matemáticas;
- 💻 Programação em Java;
- 🔄 Estruturas de repetição;
- 🔀 Estruturas de decisão;
- 🧩 Organização de código;
- 🛡️ Validação de entradas;
- 🧪 Testes e correção de erros;
- 📚 Aplicação prática dos conhecimentos adquiridos na disciplina.

---

## ⚙️ Funcionalidades

A calculadora possui **20 operações**, além da opção de encerramento.

| Opção | Operação |
|:---:|---|
| 1 | ➕ Adição |
| 2 | ➖ Subtração |
| 3 | ✖️ Multiplicação |
| 4 | ➗ Divisão |
| 5 | 📐 Resto da divisão |
| 6 | 🔢 Potência |
| 7 | √️ Raiz quadrada |
| 8 | ² Quadrado |
| 9 | ³ Cubo |
| 10 | ❗ Fatorial |
| 11 | % Porcentagem |
| 12 | 📈 Seno |
| 13 | 📉 Cosseno |
| 14 | 📐 Tangente |
| 15 | 🔟 Logaritmo base 10 |
| 16 | `ln` Logaritmo natural |
| 17 | 🌡️ Celsius → Fahrenheit |
| 18 | 🌡️ Fahrenheit → Celsius |
| 19 | 🌡️ Celsius → Kelvin |
| 20 | 🌡️ Kelvin → Celsius |
| 0 | 🚪 Sair |

---

## 🧮 Exemplos de operações

### Adição

```text
--- ADIÇÃO ---

Digite o primeiro número: 10
Digite o segundo número: 5

Resultado: 15.00
```

### Potência

```text
--- POTÊNCIA ---

Digite a base: 2
Digite o expoente: 3

2.00 elevado a 3.00 = 8.00
```

### Fatorial

```text
--- FATORIAL ---

Digite um número inteiro não negativo: 5

5! = 120
```

### Raiz quadrada

```text
--- RAIZ QUADRADA ---

Digite um número: 25

Raiz quadrada de 25.00 = 5.00
```

### Conversão de temperatura

```text
--- CELSIUS PARA FAHRENHEIT ---

Digite a temperatura em Celsius: 25

25.00 °C = 77.00 °F
```

---

## 🛡️ Validações

O programa possui algumas validações para evitar resultados incorretos e melhorar a experiência de utilização.

### Divisão por zero

A calculadora verifica se o segundo número é `0` antes de realizar uma divisão.

```text
Erro: não é possível dividir por zero.
```

### Raiz quadrada de número negativo

A calculadora não permite calcular uma raiz quadrada real de um número negativo.

```text
Erro: não existe raiz quadrada real de número negativo.
```

### Logaritmos

Os logaritmos verificam se o número informado é maior que zero.

```text
Erro: o número deve ser maior que zero.
```

### Fatorial

O programa verifica se o número:

- É inteiro;
- É positivo ou zero;
- Está dentro do limite de `20`.

Isso evita problemas de overflow no tipo `long`.

### Tangente

A calculadora também verifica ângulos nos quais a tangente não é definida, como:

```text
90°
270°
450°
```

---

## 🛠️ Tecnologias utilizadas

### Java

O projeto foi desenvolvido utilizando a linguagem **Java**, utilizando recursos básicos e a biblioteca padrão da linguagem.

Principais recursos utilizados:

```java
Scanner
Math.pow()
Math.sqrt()
Math.sin()
Math.cos()
Math.tan()
Math.log()
Math.log10()
Math.toRadians()
```

---

## 📚 Conceitos de programação utilizados

Durante o desenvolvimento foram utilizados diversos conceitos estudados na disciplina.

### Variáveis

```java
double num1;
double num2;
double resultado;
int opcao;
```

### Estruturas condicionais

```java
if
else
```

Utilizadas principalmente para validar situações como divisão por zero, números negativos e entradas inválidas.

### Estrutura `switch`

O `switch/case` é utilizado para identificar a operação escolhida pelo usuário.

```java
switch (opcao) {

    case 1:
        adicao();
        break;

    case 2:
        subtracao();
        break;

    // ...

}
```

### Estruturas de repetição

O programa utiliza estruturas de repetição para manter o menu funcionando até que o usuário escolha a opção `0`.

```java
do {
    // menu
} while (opcao != 0);
```

### Métodos

Cada operação possui seu próprio método, facilitando a organização e manutenção do código.

Exemplo:

```java
public static void adicao() {

    double num1 = lerDouble("Digite o primeiro número: ");
    double num2 = lerDouble("Digite o segundo número: ");

    double resultado = num1 + num2;

    System.out.printf("Resultado: %.2f%n", resultado);
}
```

---

## 📂 Estrutura do projeto

A estrutura pode ser organizada da seguinte maneira:

```text
Calculadora-Cientifica-Java/
│
├── Main.java
└── README.md
```

O arquivo `Main.java` contém toda a implementação da calculadora.

O `README.md` contém a documentação e explicação do projeto.

---

## ▶️ Como executar

### 1. Pré-requisito

É necessário ter o **Java JDK** instalado no computador.

Verifique a instalação executando:

```bash
java -version
```

e:

```bash
javac -version
```

---

### 2. Clonar o repositório

```bash
git clone https://github.com/NicolasWebMaster/Algoritmo-e-Pensamento-Computacional.git
```

Depois, entre na pasta correspondente ao projeto da calculadora.

---

### 3. Compilar

Caso o arquivo seja `Main.java`, utilize:

```bash
javac Main.java
```

---

### 4. Executar

Depois da compilação:

```bash
java Main
```

---

## 💻 Execução pelo terminal

Ao iniciar o programa, será apresentado um menu semelhante a:

```text
==================================================
             CALCULADORA CIENTÍFICA
==================================================
|  1 - Adição                                   |
|  2 - Subtração                                |
|  3 - Multiplicação                            |
|  4 - Divisão                                  |
|  5 - Resto da divisão                         |
|  6 - Potência                                 |
|  7 - Raiz quadrada                            |
|  8 - Quadrado                                 |
|  9 - Cubo                                     |
| 10 - Fatorial                                 |
| 11 - Porcentagem                              |
| 12 - Seno                                     |
| 13 - Cosseno                                  |
| 14 - Tangente                                 |
| 15 - Logaritmo base 10                        |
| 16 - Logaritmo natural                        |
| 17 - Celsius para Fahrenheit                  |
| 18 - Fahrenheit para Celsius                  |
| 19 - Celsius para Kelvin                      |
| 20 - Kelvin para Celsius                      |
|  0 - Sair                                     |
==================================================

Escolha uma opção:
```

O usuário pode escolher uma das operações e informar os valores solicitados.

---

## 🌱 Evolução do projeto

Este projeto faz parte do meu processo de aprendizado na disciplina de **Algoritmo e Pensamento Computacional**.

A calculadora representa uma oportunidade de aplicar, na prática, diversos conceitos aprendidos durante as aulas.

O projeto também poderá receber melhorias conforme meu conhecimento em programação evoluir.

Algumas possíveis melhorias futuras:

- [ ] Criar uma interface gráfica;
- [ ] Separar as operações em diferentes classes;
- [ ] Criar histórico de operações;
- [ ] Adicionar mais funções matemáticas;
- [ ] Implementar porcentagens mais avançadas;
- [ ] Melhorar a interface do terminal;
- [ ] Adicionar testes automatizados;
- [ ] Melhorar o tratamento de exceções;
- [ ] Organizar o projeto utilizando conceitos de orientação a objetos.

---

## 🎓 Contexto acadêmico

Este projeto foi desenvolvido como parte dos estudos da disciplina:

**Algoritmo e Pensamento Computacional**

O objetivo não é apenas criar uma calculadora funcional, mas também **praticar e consolidar os conhecimentos adquiridos durante a disciplina**.

Cada implementação representa uma etapa do meu aprendizado e contribui para o desenvolvimento do meu raciocínio lógico e das minhas habilidades de programação.

---

## 👨‍💻 Autor

**Nicolas**

Estudante de tecnologia e programação.

Este projeto faz parte do meu repositório acadêmico, onde registro exercícios, testes, projetos e conhecimentos adquiridos durante minha formação.

---

## 📌 Observação

Este é um projeto **acadêmico e educacional**, desenvolvido com o objetivo de praticar programação e documentar minha evolução.

O código poderá ser modificado, refatorado e aprimorado conforme novos conhecimentos forem adquiridos.

---

⭐ **Projeto desenvolvido para aprender, praticar e evoluir em programação.**

> 🧠 **Algoritmos transformam problemas em passos. Programar é transformar esses passos em soluções.**
