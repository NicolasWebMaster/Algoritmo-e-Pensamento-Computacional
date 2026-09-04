import java.util.Scanner;

/**
 * Calculadora Científica
 *
 * Programa que apresenta um menu com diversas operações matemáticas:
 * adição, subtração, multiplicação, divisão, potência,
 * raiz quadrada, fatorial, porcentagem, funções trigonométricas,
 * logaritmos e conversões de temperatura.
 *
 * O nome da classe é "Main" porque o OnlineGDB utiliza o arquivo Main.java.
 */
public class Main {

    // Scanner utilizado para receber dados do usuário
    static Scanner scanner = new Scanner(System.in);

    /**
     * Método principal do programa.
     */
    public static void main(String[] args) {

        int opcao;

        // O programa continua executando até o usuário escolher 0
        do {

            mostrarMenu();

            opcao = lerInteiro("Escolha uma opção: ");

            System.out.println();

            switch (opcao) {

                case 1:
                    adicao();
                    break;

                case 2:
                    subtracao();
                    break;

                case 3:
                    multiplicacao();
                    break;

                case 4:
                    divisao();
                    break;

                case 5:
                    restoDivisao();
                    break;

                case 6:
                    potencia();
                    break;

                case 7:
                    raizQuadrada();
                    break;

                case 8:
                    quadrado();
                    break;

                case 9:
                    cubo();
                    break;

                case 10:
                    fatorial();
                    break;

                case 11:
                    porcentagem();
                    break;

                case 12:
                    seno();
                    break;

                case 13:
                    cosseno();
                    break;

                case 14:
                    tangente();
                    break;

                case 15:
                    logaritmoBase10();
                    break;

                case 16:
                    logaritmoNatural();
                    break;

                case 17:
                    celsiusParaFahrenheit();
                    break;

                case 18:
                    fahrenheitParaCelsius();
                    break;

                case 19:
                    celsiusParaKelvin();
                    break;

                case 20:
                    kelvinParaCelsius();
                    break;

                case 0:
                    System.out.println("==============================================");
                    System.out.println("       CALCULADORA ENCERRADA!");
                    System.out.println("       Obrigado por utilizar o programa.");
                    System.out.println("==============================================");
                    break;

                default:
                    System.out.println("Opção inválida!");
                    System.out.println("Escolha uma opção entre 0 e 20.");
            }

            // Pequena pausa visual entre as operações
            if (opcao != 0) {
                System.out.println();
                System.out.println("----------------------------------------------");
                System.out.println("             Operação concluída!");
                System.out.println("----------------------------------------------");
                System.out.println();
            }

        } while (opcao != 0);

        scanner.close();
    }

    // ============================================================
    //                       MENU PRINCIPAL
    // ============================================================

    /**
     * Exibe o menu principal da calculadora.
     */
    public static void mostrarMenu() {

        System.out.println();
        System.out.println("==================================================");
        System.out.println("             CALCULADORA CIENTÍFICA              ");
        System.out.println("==================================================");
        System.out.println("|  1 - Adição                                   |");
        System.out.println("|  2 - Subtração                                |");
        System.out.println("|  3 - Multiplicação                            |");
        System.out.println("|  4 - Divisão                                  |");
        System.out.println("|  5 - Resto da divisão                         |");
        System.out.println("|  6 - Potência                                 |");
        System.out.println("|  7 - Raiz quadrada                            |");
        System.out.println("|  8 - Quadrado                                 |");
        System.out.println("|  9 - Cubo                                     |");
        System.out.println("| 10 - Fatorial                                 |");
        System.out.println("| 11 - Porcentagem                              |");
        System.out.println("| 12 - Seno                                     |");
        System.out.println("| 13 - Cosseno                                  |");
        System.out.println("| 14 - Tangente                                 |");
        System.out.println("| 15 - Logaritmo base 10                        |");
        System.out.println("| 16 - Logaritmo natural                        |");
        System.out.println("| 17 - Celsius para Fahrenheit                  |");
        System.out.println("| 18 - Fahrenheit para Celsius                  |");
        System.out.println("| 19 - Celsius para Kelvin                      |");
        System.out.println("| 20 - Kelvin para Celsius                      |");
        System.out.println("|  0 - Sair                                     |");
        System.out.println("==================================================");
    }

    // ============================================================
    //                    OPERAÇÕES BÁSICAS
    // ============================================================

    /**
     * Realiza uma adição.
     */
    public static void adicao() {

        System.out.println("--- ADIÇÃO ---");

        double num1 = lerDouble("Digite o primeiro número: ");
        double num2 = lerDouble("Digite o segundo número: ");

        double resultado = num1 + num2;

        System.out.printf("Resultado: %.2f%n", resultado);
    }

    /**
     * Realiza uma subtração.
     */
    public static void subtracao() {

        System.out.println("--- SUBTRAÇÃO ---");

        double num1 = lerDouble("Digite o primeiro número: ");
        double num2 = lerDouble("Digite o segundo número: ");

        double resultado = num1 - num2;

        System.out.printf("Resultado: %.2f%n", resultado);
    }

    /**
     * Realiza uma multiplicação.
     */
    public static void multiplicacao() {

        System.out.println("--- MULTIPLICAÇÃO ---");

        double num1 = lerDouble("Digite o primeiro número: ");
        double num2 = lerDouble("Digite o segundo número: ");

        double resultado = num1 * num2;

        System.out.printf("Resultado: %.2f%n", resultado);
    }

    /**
     * Realiza uma divisão, verificando se o divisor é zero.
     */
    public static void divisao() {

        System.out.println("--- DIVISÃO ---");

        double num1 = lerDouble("Digite o primeiro número: ");
        double num2 = lerDouble("Digite o segundo número: ");

        if (num2 == 0) {

            System.out.println("Erro: não é possível dividir por zero.");

        } else {

            double resultado = num1 / num2;

            System.out.printf("Resultado: %.2f%n", resultado);
        }
    }

    /**
     * Calcula o resto de uma divisão.
     */
    public static void restoDivisao() {

        System.out.println("--- RESTO DA DIVISÃO ---");

        double num1 = lerDouble("Digite o primeiro número: ");
        double num2 = lerDouble("Digite o segundo número: ");

        if (num2 == 0) {

            System.out.println("Erro: não é possível dividir por zero.");

        } else {

            double resultado = num1 % num2;

            System.out.printf("Resto: %.2f%n", resultado);
        }
    }

    // ============================================================
    //                  OPERAÇÕES MATEMÁTICAS
    // ============================================================

    /**
     * Calcula uma potência.
     */
    public static void potencia() {

        System.out.println("--- POTÊNCIA ---");

        double base = lerDouble("Digite a base: ");
        double expoente = lerDouble("Digite o expoente: ");

        double resultado = Math.pow(base, expoente);

        System.out.printf(
            "%.2f elevado a %.2f = %.2f%n",
            base,
            expoente,
            resultado
        );
    }

    /**
     * Calcula a raiz quadrada.
     */
    public static void raizQuadrada() {

        System.out.println("--- RAIZ QUADRADA ---");

        double numero = lerDouble("Digite um número: ");

        if (numero < 0) {

            System.out.println(
                "Erro: não existe raiz quadrada real de número negativo."
            );

        } else {

            double resultado = Math.sqrt(numero);

            System.out.printf(
                "Raiz quadrada de %.2f = %.2f%n",
                numero,
                resultado
            );
        }
    }

    /**
     * Calcula o quadrado de um número.
     */
    public static void quadrado() {

        System.out.println("--- QUADRADO ---");

        double numero = lerDouble("Digite um número: ");

        double resultado = numero * numero;

        System.out.printf(
            "%.2f² = %.2f%n",
            numero,
            resultado
        );
    }

    /**
     * Calcula o cubo de um número.
     */
    public static void cubo() {

        System.out.println("--- CUBO ---");

        double numero = lerDouble("Digite um número: ");

        double resultado = numero * numero * numero;

        System.out.printf(
            "%.2f³ = %.2f%n",
            numero,
            resultado
        );
    }

    /**
     * Calcula o fatorial de um número inteiro.
     *
     * O maior fatorial calculado é 20!, pois valores maiores
     * podem ultrapassar o limite do tipo long.
     */
    public static void fatorial() {

        System.out.println("--- FATORIAL ---");

        double valor = lerDouble(
            "Digite um número inteiro não negativo: "
        );

        // Verifica se o número possui casas decimais
        if (valor != Math.floor(valor)) {

            System.out.println(
                "Erro: o fatorial deve ser um número inteiro."
            );

            return;
        }

        if (valor < 0) {

            System.out.println(
                "Erro: o fatorial não pode ser negativo."
            );

            return;
        }

        if (valor > 20) {

            System.out.println(
                "Erro: digite um número entre 0 e 20."
            );

            return;
        }

        int numero = (int) valor;

        long resultado = 1;

        for (int i = 1; i <= numero; i++) {

            resultado *= i;
        }

        System.out.println(
            numero + "! = " + resultado
        );
    }

    /**
     * Calcula uma porcentagem.
     */
    public static void porcentagem() {

        System.out.println("--- PORCENTAGEM ---");

        double valor = lerDouble("Digite o valor: ");
        double porcentagem = lerDouble("Digite a porcentagem: ");

        double resultado = valor * porcentagem / 100;

        System.out.printf(
            "%.2f%% de %.2f = %.2f%n",
            porcentagem,
            valor,
            resultado
        );
    }

    // ============================================================
    //                  FUNÇÕES TRIGONOMÉTRICAS
    // ============================================================

    /**
     * Calcula o seno de um ângulo em graus.
     */
    public static void seno() {

        System.out.println("--- SENO ---");

        double angulo = lerDouble(
            "Digite o ângulo em graus: "
        );

        // Math.sin utiliza radianos.
        double resultado = Math.sin(
            Math.toRadians(angulo)
        );

        System.out.printf(
            "Seno de %.2f° = %.6f%n",
            angulo,
            resultado
        );
    }

    /**
     * Calcula o cosseno de um ângulo em graus.
     */
    public static void cosseno() {

        System.out.println("--- COSSENO ---");

        double angulo = lerDouble(
            "Digite o ângulo em graus: "
        );

        double resultado = Math.cos(
            Math.toRadians(angulo)
        );

        System.out.printf(
            "Cosseno de %.2f° = %.6f%n",
            angulo,
            resultado
        );
    }

    /**
     * Calcula a tangente de um ângulo em graus.
     *
     * A tangente não é definida para:
     * 90°, 270°, 450°... e assim por diante.
     */
    public static void tangente() {

        System.out.println("--- TANGENTE ---");

        double angulo = lerDouble(
            "Digite o ângulo em graus: "
        );

        // Normaliza o ângulo para facilitar a verificação
        double resto = angulo % 180;

        if (Math.abs(Math.abs(resto) - 90) < 0.0000001) {

            System.out.println(
                "Erro: a tangente não é definida para esse ângulo."
            );

            return;
        }

        double resultado = Math.tan(
            Math.toRadians(angulo)
        );

        System.out.printf(
            "Tangente de %.2f° = %.6f%n",
            angulo,
            resultado
        );
    }

    // ============================================================
    //                       LOGARITMOS
    // ============================================================

    /**
     * Calcula o logaritmo na base 10.
     */
    public static void logaritmoBase10() {

        System.out.println("--- LOGARITMO BASE 10 ---");

        double numero = lerDouble(
            "Digite um número maior que zero: "
        );

        if (numero <= 0) {

            System.out.println(
                "Erro: o número deve ser maior que zero."
            );

        } else {

            double resultado = Math.log10(numero);

            System.out.printf(
                "Log10(%.2f) = %.6f%n",
                numero,
                resultado
            );
        }
    }

    /**
     * Calcula o logaritmo natural (ln).
     */
    public static void logaritmoNatural() {

        System.out.println("--- LOGARITMO NATURAL ---");

        double numero = lerDouble(
            "Digite um número maior que zero: "
        );

        if (numero <= 0) {

            System.out.println(
                "Erro: o número deve ser maior que zero."
            );

        } else {

            double resultado = Math.log(numero);

            System.out.printf(
                "Ln(%.2f) = %.6f%n",
                numero,
                resultado
            );
        }
    }

    // ============================================================
    //                 CONVERSÃO DE TEMPERATURA
    // ============================================================

    /**
     * Converte Celsius para Fahrenheit.
     *
     * Fórmula:
     * F = (C × 9 / 5) + 32
     */
    public static void celsiusParaFahrenheit() {

        System.out.println("--- CELSIUS PARA FAHRENHEIT ---");

        double celsius = lerDouble(
            "Digite a temperatura em Celsius: "
        );

        double fahrenheit = (celsius * 9 / 5) + 32;

        System.out.printf(
            "%.2f °C = %.2f °F%n",
            celsius,
            fahrenheit
        );
    }

    /**
     * Converte Fahrenheit para Celsius.
     *
     * Fórmula:
     * C = (F - 32) × 5 / 9
     */
    public static void fahrenheitParaCelsius() {

        System.out.println("--- FAHRENHEIT PARA CELSIUS ---");

        double fahrenheit = lerDouble(
            "Digite a temperatura em Fahrenheit: "
        );

        double celsius = (fahrenheit - 32) * 5 / 9;

        System.out.printf(
            "%.2f °F = %.2f °C%n",
            fahrenheit,
            celsius
        );
    }

    /**
     * Converte Celsius para Kelvin.
     *
     * Fórmula:
     * K = C + 273.15
     */
    public static void celsiusParaKelvin() {

        System.out.println("--- CELSIUS PARA KELVIN ---");

        double celsius = lerDouble(
            "Digite a temperatura em Celsius: "
        );

        double kelvin = celsius + 273.15;

        System.out.printf(
            "%.2f °C = %.2f K%n",
            celsius,
            kelvin
        );
    }

    /**
     * Converte Kelvin para Celsius.
     *
     * Fórmula:
     * C = K - 273.15
     */
    public static void kelvinParaCelsius() {

        System.out.println("--- KELVIN PARA CELSIUS ---");

        double kelvin = lerDouble(
            "Digite a temperatura em Kelvin: "
        );

        if (kelvin < 0) {

            System.out.println(
                "Erro: a temperatura em Kelvin não pode ser negativa."
            );

            return;
        }

        double celsius = kelvin - 273.15;

        System.out.printf(
            "%.2f K = %.2f °C%n",
            kelvin,
            celsius
        );
    }

    // ============================================================
    //                    MÉTODOS DE ENTRADA
    // ============================================================

    /**
     * Lê um número inteiro com validação.
     *
     * O método continua solicitando a entrada até o usuário
     * digitar um número inteiro válido.
     */
    public static int lerInteiro(String mensagem) {

        while (true) {

            System.out.print(mensagem);

            if (scanner.hasNextInt()) {

                return scanner.nextInt();

            } else {

                System.out.println(
                    "Entrada inválida! Digite um número inteiro."
                );

                // Descarta a entrada inválida
                scanner.next();
            }
        }
    }

    /**
     * Lê um número decimal com validação.
     *
     * Aceita tanto ponto quanto vírgula como separador decimal.
     *
     * Exemplos:
     * 10.5
     * 10,5
     */
    public static double lerDouble(String mensagem) {

        while (true) {

            System.out.print(mensagem);

            String entrada = scanner.next();

            // Permite utilizar vírgula ou ponto
            entrada = entrada.replace(",", ".");

            try {

                return Double.parseDouble(entrada);

            } catch (NumberFormatException e) {

                System.out.println(
                    "Entrada inválida! Digite um número."
                );
            }
        }
    }
}
