# 📚 Controle de Notas em C

Um programa simples desenvolvido em **linguagem C** para realizar o cadastro de alunos, receber três notas, calcular a média e informar o resultado de cada aluno.

O projeto foi desenvolvido com foco no aprendizado de conceitos fundamentais da programação em C, como **funções, variáveis, estruturas de repetição, entrada de dados e estruturas condicionais**.

---

## 🎯 Objetivo

O objetivo do programa é permitir o cadastro de vários alunos e, para cada um deles:

1. Informar o nome;
2. Informar três notas;
3. Calcular a média das notas;
4. Exibir a média;
5. Informar se o aluno foi aprovado ou não.

A quantidade de alunos é definida pelo usuário no início do programa.

---

## ⚙️ Funcionalidades

- Cadastro de múltiplos alunos;
- Limite definido de até **50 alunos**;
- Entrada do nome do aluno;
- Entrada de três notas;
- Cálculo da média aritmética;
- Exibição da média com duas casas decimais;
- Verificação do resultado através da média;
- Estrutura de repetição para processar vários alunos.

---

## 🧮 Cálculo da média

A média é calculada através da soma das três notas dividida por três:

```c
media = (n1 + n2 + n3) / 3.0;
```

### Exemplo

```text
Nota 1: 8.0
Nota 2: 7.0
Nota 3: 9.0

Média: 8.00
```

---

## 📊 Critério de resultado

| Média | Resultado |
|---:|---|
| ≥ 6.0 | Aprovado |
| < 6.0 | Reprovado |

Atualmente, as mensagens exibidas pelo programa são:

```text
Resultado: Não fez mais que sua obrigação!
```

para médias iguais ou superiores a `6.0`, e:

```text
Resultado: SE FEROU KAKAKKK! :(
```

para médias abaixo de `6.0`.

> 😅 As mensagens são propositalmente descontraídas e podem ser alteradas facilmente no código.

---

## 🛠️ Tecnologias utilizadas

- **Linguagem C**
- Biblioteca `stdio.h`
- Compilador GCC
- Terminal/Console

---

## 📖 Conceitos de C utilizados

### Variáveis

O programa utiliza variáveis para armazenar a quantidade de alunos, notas, média e nome:

```c
int quantidade, i;
char nome[50];
float n1, n2, n3, media;
```

### Constante

Foi definida uma constante para representar o limite máximo de alunos:

```c
#define MAX_ALUNOS 50
```

### Funções

O programa possui duas funções criadas para organizar as operações:

```c
float calcular_media(float n1, float n2, float n3);
```

Responsável por calcular a média.

E:

```c
void mostrar_resultado(char nome[], float media);
```

Responsável por mostrar o nome, a média e o resultado do aluno.

### Estrutura de repetição

O cadastro dos alunos é realizado utilizando `while`:

```c
i = 1;

while (i <= quantidade)
{
    // cadastro do aluno
    i = i + 1;
}
```

Isso permite repetir o processo até que todos os alunos informados sejam cadastrados.

### Estrutura condicional

O resultado é determinado através de `if/else`:

```c
if (media >= 6.0)
    printf("Resultado: Não fez mais que sua obrigação!\n");
else
    printf("Resultado: SE FEROU KAKAKKK! :(\n");
```

---

## 💻 Exemplo de execução

```text
=== CONTROLE DE NOTAS ===
Quantos alunos serão cadastrados? 2

Aluno 1
Nome: João
Nota 1: 8
Nota 2: 7
Nota 3: 9

Aluno: João
Média: 8.00
Resultado: Não fez mais que sua obrigação!

Aluno 2
Nome: Maria
Nota 1: 4
Nota 2: 5
Nota 3: 3

Aluno: Maria
Média: 4.00
Resultado: SE FEROU KAKAKKK! :(

---- IT'S OVER! ----
```

---

## 🚀 Como executar

### 1. Verifique se o GCC está instalado

No terminal:

```bash
gcc --version
```

Se aparecer a versão do GCC, o compilador está instalado.

### 2. Compile o programa

Supondo que o arquivo seja:

```text
notas.c
```

Execute:

```bash
gcc notas.c -o notas
```

### 3. Execute

No Windows:

```bash
notas.exe
```

No Linux/macOS:

```bash
./notas
```

---

## 📂 Estrutura do projeto

```text
Controle-de-Notas/
│
├── notas.c
│
└── README.md
```

---

## 🔮 Possíveis melhorias

Algumas funcionalidades podem ser adicionadas futuramente:

- [ ] Armazenar todos os alunos em um vetor;
- [ ] Exibir todos os alunos cadastrados ao final;
- [ ] Calcular a maior média;
- [ ] Calcular a menor média;
- [ ] Calcular a média da turma;
- [ ] Contar quantos alunos foram aprovados;
- [ ] Contar quantos foram reprovados;
- [ ] Validar notas entre 0 e 10;
- [ ] Permitir consultar um aluno pelo nome;
- [ ] Criar um menu interativo;
- [ ] Salvar os resultados em um arquivo.

---

## 🎓 Objetivo acadêmico

Este projeto foi desenvolvido como exercício de **lógica de programação e fundamentos da linguagem C**, buscando praticar principalmente:

- `printf` e `scanf`;
- Variáveis;
- Tipos `int`, `float` e `char`;
- Funções;
- Parâmetros e retorno;
- `while`;
- `if/else`;
- Arrays de caracteres;
- Operações matemáticas.

---

## 👨‍💻 Autor

Projeto desenvolvido para fins de **estudo e aprendizado em linguagem C**.

---

## 📄 Licença

Este projeto pode ser utilizado, modificado e estudado livremente para fins educacionais.
