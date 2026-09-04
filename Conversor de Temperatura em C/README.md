# 🌡️ Conversor de Temperatura em C

Um programa simples desenvolvido em **linguagem C** para realizar conversões entre as escalas de temperatura **Celsius, Fahrenheit e Kelvin**.

O projeto possui um menu interativo no terminal e permite realizar várias conversões sem precisar reiniciar o programa.

---

## 🎯 Objetivo

O objetivo do projeto é praticar conceitos fundamentais da linguagem C através da criação de um conversor de temperaturas.

O usuário pode escolher uma das opções disponíveis, informar uma temperatura e receber o valor convertido.

---

## ⚙️ Funcionalidades

O programa possui **6 tipos de conversão**:

| Nº | Conversão |
|---:|---|
| 1 | Celsius → Kelvin |
| 2 | Celsius → Fahrenheit |
| 3 | Kelvin → Fahrenheit |
| 4 | Fahrenheit → Kelvin |
| 5 | Fahrenheit → Celsius |
| 6 | Kelvin → Celsius |
| 0 | Sair |

---

## 🧮 Fórmulas utilizadas

### Celsius → Kelvin

```text
K = C + 273.15
```

No código:

```c
temperatura + 273.15
```

---

### Celsius → Fahrenheit

```text
F = (C × 9 / 5) + 32
```

No código:

```c
(temperatura * 9.0 / 5.0) + 32.0
```

---

### Kelvin → Fahrenheit

```text
F = ((K - 273.15) × 9 / 5) + 32
```

No código:

```c
((temperatura - 273.15) * 9.0 / 5.0) + 32.0
```

---

### Fahrenheit → Kelvin

```text
K = ((F - 32) × 5 / 9) + 273.15
```

No código:

```c
((temperatura - 32.0) * 5.0 / 9.0) + 273.15
```

---

### Fahrenheit → Celsius

```text
C = (F - 32) × 5 / 9
```

No código:

```c
(temperatura - 32.0) * 5.0 / 9.0
```

---

### Kelvin → Celsius

```text
C = K - 273.15
```

No código:

```c
temperatura - 273.15
```

---

## 🛠️ Tecnologias utilizadas

- **Linguagem C**
- Biblioteca `stdio.h`
- Compilador GCC
- Terminal/Console

---

## 📚 Conceitos de C utilizados

### Variáveis

O programa utiliza variáveis para armazenar a opção escolhida e a temperatura informada:

```c
int opcao;
double temperatura;
```

A variável `opcao` armazena a escolha do menu.

A variável `temperatura` armazena o valor que será convertido.

---

### Estrutura de repetição `do while`

O menu utiliza uma estrutura `do while`:

```c
do {
    // menu e operações
} while (opcao != 0);
```

Isso faz com que o menu seja exibido pelo menos uma vez e continue sendo executado enquanto o usuário não escolher `0`.

---

### Estrutura `switch`

As opções são organizadas utilizando `switch`:

```c
switch (opcao) {
    case 1:
        // Celsius para Kelvin
        break;

    case 2:
        // Celsius para Fahrenheit
        break;
}
```

Essa estrutura facilita a organização das diferentes conversões.

---

### Entrada de dados

A função `scanf()` é utilizada para receber os dados digitados pelo usuário:

```c
scanf("%d", &opcao);
```

Para receber temperaturas com casas decimais:

```c
scanf("%lf", &temperatura);
```

---

### Saída de dados

A função `printf()` é utilizada para exibir o menu, mensagens e resultados:

```c
printf("Resultado: %.2f K\n", temperatura + 273.15);
```

O `%.2f` faz com que o resultado seja exibido com **duas casas decimais**.

---

## 💻 Exemplo de execução

```text
====================================
       CONVERSOR DE TEMPERATURA
====================================
1 - Celsius para Kelvin
2 - Celsius para Fahrenheit
3 - Kelvin para Fahrenheit
4 - Fahrenheit para Kelvin
5 - Fahrenheit para Celsius
6 - Kelvin para Celsius
0 - Sair
====================================
Digite uma opcao: 2

Digite a temperatura em Celsius: 25

Resultado: 77.00 F
```

O programa retorna novamente ao menu para que outra conversão possa ser realizada.

---

## 🚪 Encerrando o programa

Para encerrar, basta escolher a opção:

```text
0 - Sair
```

O programa exibirá:

```text
Tchau Tchau bebê 😘!
```

e será encerrado.

---

## ⚠️ Opção inválida

Caso seja digitada uma opção que não esteja no menu, o programa informa:

```text
Digita direito Animal 😤!
```

Depois disso, o menu é exibido novamente.

---

## 🚀 Como executar

### 1. Verifique se o GCC está instalado

No terminal:

```bash
gcc --version
```

Se o terminal mostrar a versão do GCC, o compilador está instalado.

---

### 2. Compile o programa

Supondo que o arquivo se chame:

```text
conversor.c
```

Execute:

```bash
gcc conversor.c -o conversor
```

---

### 3. Execute o programa

#### Windows

```bash
conversor.exe
```

#### Linux/macOS

```bash
./conversor
```

---

## 📂 Estrutura do projeto

```text
Conversor-de-Temperatura/
│
├── conversor.c
│
└── README.md
```

---

## 🔄 Fluxo do programa

```text
              INÍCIO
                 │
                 ▼
          Exibe o menu
                 │
                 ▼
       Usuário escolhe opção
                 │
                 ▼
          switch(opcao)
                 │
       ┌─────────┼─────────┐
       │         │         │
       ▼         ▼         ▼
   Conversão  Conversão   Sair
       │         │         │
       └────┬────┘         │
            │              │
            ▼              ▼
      Exibe resultado      FIM
            │
            ▼
        Volta ao menu
```

---

## 🎓 Objetivo acadêmico

Este projeto foi desenvolvido como exercício para praticar fundamentos da **linguagem C** e **lógica de programação**.

Os principais conceitos praticados foram:

- `printf`;
- `scanf`;
- Variáveis;
- Tipos `int` e `double`;
- Operações matemáticas;
- `switch/case`;
- `do while`;
- `break`;
- `default`;
- Conversão de unidades;
- Formatação de números.

---

## 🔮 Possíveis melhorias

Algumas funcionalidades podem ser adicionadas futuramente:

- [ ] Adicionar conversão para Rankine;
- [ ] Adicionar conversão para Réaumur;
- [ ] Validar valores inválidos;
- [ ] Impedir temperaturas Kelvin negativas;
- [ ] Permitir digitar várias conversões em sequência;
- [ ] Criar um histórico das conversões;
- [ ] Adicionar mais opções de conversão;
- [ ] Criar uma interface gráfica.

---

## 👨‍💻 Autor

Projeto desenvolvido para fins de **estudo e aprendizado em linguagem C**.

---

## 📄 Licença

Este projeto pode ser utilizado, modificado e estudado livremente para fins educacionais.
