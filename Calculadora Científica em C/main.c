#include <stdio.h>

int main()
{
    int opcao;
    int sair;
    double num1, num2, resultado;
    char entrada[20];

    sair = 0;

    while (sair == 0)
    {
        printf("\n");
        printf("========================================\n");
        printf("          CALCULADORA EM C              \n");
        printf("========================================\n");
        printf("|  1 - Adicao                          |\n");
        printf("|  2 - Subtracao                       |\n");
        printf("|  3 - Multiplicacao                   |\n");
        printf("|  4 - Divisao                         |\n");
        printf("|  5 - Resto da divisao                |\n");
        printf("|  6 - Quadrado                        |\n");
        printf("|  7 - Cubo                            |\n");
        printf("|  8 - Media                           |\n");
        printf("|  9 - Porcentagem                     |\n");
        printf("| 10 - Aumento percentual              |\n");
        printf("| 11 - Desconto percentual             |\n");
        printf("| 12 - Dobro                           |\n");
        printf("| 13 - Triplo                          |\n");
        printf("| 14 - Metade                          |\n");
        printf("| 15 - Area do quadrado                |\n");
        printf("| 16 - Area do retangulo               |\n");
        printf("| 17 - Perimetro do quadrado           |\n");
        printf("| 18 - Perimetro do retangulo          |\n");
        printf("| 19 - Celsius para Fahrenheit         |\n");
        printf("| 20 - Fahrenheit para Celsius         |\n");
        printf("|  0 - SAIR                            |\n");
        printf("========================================\n");

        printf("Escolha uma opcao: ");

        scanf("%19s", entrada);

        /*
           VERIFICACAO DA PALAVRA SAIR
        */
        if (entrada[0] == 'S' &&
            entrada[1] == 'A' &&
            entrada[2] == 'I' &&
            entrada[3] == 'R' &&
            entrada[4] == '\0')
        {
            sair = 1;
        }

        else
        {
            opcao = 0;

            /*
               CONVERTE A ENTRADA PARA NUMERO
            */
            if (entrada[0] >= '0' && entrada[0] <= '9')
            {
                opcao = entrada[0] - '0';

                if (entrada[1] >= '0' && entrada[1] <= '9')
                {
                    opcao = opcao * 10 + (entrada[1] - '0');

                    if (entrada[2] != '\0')
                    {
                        opcao = 0;
                    }
                }
                else
                {
                    if (entrada[1] != '\0')
                    {
                        opcao = 0;
                    }
                }
            }

            /*
               OPCAO 0 - SAIR
            */
            if (opcao == 0)
            {
                sair = 1;
            }

            /*
               OPCAO 1 - ADICAO
            */
            else if (opcao == 1)
            {
                printf("\n--- ADICAO ---\n");

                printf("Digite o primeiro numero: ");
                scanf("%lf", &num1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &num2);

                resultado = num1 + num2;

                printf("Resultado: %.2lf\n", resultado);
            }

            /*
               OPCAO 2 - SUBTRACAO
            */
            else if (opcao == 2)
            {
                printf("\n--- SUBTRACAO ---\n");

                printf("Digite o primeiro numero: ");
                scanf("%lf", &num1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &num2);

                resultado = num1 - num2;

                printf("Resultado: %.2lf\n", resultado);
            }

            /*
               OPCAO 3 - MULTIPLICACAO
            */
            else if (opcao == 3)
            {
                printf("\n--- MULTIPLICACAO ---\n");

                printf("Digite o primeiro numero: ");
                scanf("%lf", &num1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &num2);

                resultado = num1 * num2;

                printf("Resultado: %.2lf\n", resultado);
            }

            /*
               OPCAO 4 - DIVISAO
            */
            else if (opcao == 4)
            {
                printf("\n--- DIVISAO ---\n");

                printf("Digite o primeiro numero: ");
                scanf("%lf", &num1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &num2);

                if (num2 == 0)
                {
                    printf("ERRO: nao e possivel dividir por zero.\n");
                }
                else
                {
                    resultado = num1 / num2;

                    printf("Resultado: %.2lf\n", resultado);
                }
            }

            /*
               OPCAO 5 - RESTO DA DIVISAO
            */
            else if (opcao == 5)
            {
                printf("\n--- RESTO DA DIVISAO ---\n");

                printf("Digite o primeiro numero inteiro: ");
                scanf("%lf", &num1);

                printf("Digite o segundo numero inteiro: ");
                scanf("%lf", &num2);

                if ((int)num2 == 0)
                {
                    printf("ERRO: nao e possivel dividir por zero.\n");
                }
                else
                {
                    resultado = (int)num1 % (int)num2;

                    printf("Resto: %.0lf\n", resultado);
                }
            }

            /*
               OPCAO 6 - QUADRADO
            */
            else if (opcao == 6)
            {
                printf("\n--- QUADRADO ---\n");

                printf("Digite um numero: ");
                scanf("%lf", &num1);

                resultado = num1 * num1;

                printf("Quadrado: %.2lf\n", resultado);
            }

            /*
               OPCAO 7 - CUBO
            */
            else if (opcao == 7)
            {
                printf("\n--- CUBO ---\n");

                printf("Digite um numero: ");
                scanf("%lf", &num1);

                resultado = num1 * num1 * num1;

                printf("Cubo: %.2lf\n", resultado);
            }

            /*
               OPCAO 8 - MEDIA
            */
            else if (opcao == 8)
            {
                printf("\n--- MEDIA ---\n");

                printf("Digite o primeiro numero: ");
                scanf("%lf", &num1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &num2);

                resultado = (num1 + num2) / 2;

                printf("Media: %.2lf\n", resultado);
            }

            /*
               OPCAO 9 - PORCENTAGEM
            */
            else if (opcao == 9)
            {
                printf("\n--- PORCENTAGEM ---\n");

                printf("Digite o valor: ");
                scanf("%lf", &num1);

                printf("Digite a porcentagem: ");
                scanf("%lf", &num2);

                resultado = (num1 * num2) / 100;

                printf("%.2lf%% de %.2lf = %.2lf\n",
                       num2, num1, resultado);
            }

            /*
               OPCAO 10 - AUMENTO PERCENTUAL
            */
            else if (opcao == 10)
            {
                printf("\n--- AUMENTO PERCENTUAL ---\n");

                printf("Digite o valor: ");
                scanf("%lf", &num1);

                printf("Digite o percentual de aumento: ");
                scanf("%lf", &num2);

                resultado = num1 + ((num1 * num2) / 100);

                printf("Valor com aumento: %.2lf\n", resultado);
            }

            /*
               OPCAO 11 - DESCONTO PERCENTUAL
            */
            else if (opcao == 11)
            {
                printf("\n--- DESCONTO PERCENTUAL ---\n");

                printf("Digite o valor: ");
                scanf("%lf", &num1);

                printf("Digite o percentual de desconto: ");
                scanf("%lf", &num2);

                resultado = num1 - ((num1 * num2) / 100);

                printf("Valor com desconto: %.2lf\n", resultado);
            }

            /*
               OPCAO 12 - DOBRO
            */
            else if (opcao == 12)
            {
                printf("\n--- DOBRO ---\n");

                printf("Digite um numero: ");
                scanf("%lf", &num1);

                resultado = num1 * 2;

                printf("Dobro: %.2lf\n", resultado);
            }

            /*
               OPCAO 13 - TRIPLO
            */
            else if (opcao == 13)
            {
                printf("\n--- TRIPLO ---\n");

                printf("Digite um numero: ");
                scanf("%lf", &num1);

                resultado = num1 * 3;

                printf("Triplo: %.2lf\n", resultado);
            }

            /*
               OPCAO 14 - METADE
            */
            else if (opcao == 14)
            {
                printf("\n--- METADE ---\n");

                printf("Digite um numero: ");
                scanf("%lf", &num1);

                resultado = num1 / 2;

                printf("Metade: %.2lf\n", resultado);
            }

            /*
               OPCAO 15 - AREA DO QUADRADO
            */
            else if (opcao == 15)
            {
                printf("\n--- AREA DO QUADRADO ---\n");

                printf("Digite o lado: ");
                scanf("%lf", &num1);

                resultado = num1 * num1;

                printf("Area: %.2lf\n", resultado);
            }

            /*
               OPCAO 16 - AREA DO RETANGULO
            */
            else if (opcao == 16)
            {
                printf("\n--- AREA DO RETANGULO ---\n");

                printf("Digite a base: ");
                scanf("%lf", &num1);

                printf("Digite a altura: ");
                scanf("%lf", &num2);

                resultado = num1 * num2;

                printf("Area: %.2lf\n", resultado);
            }

            /*
               OPCAO 17 - PERIMETRO DO QUADRADO
            */
            else if (opcao == 17)
            {
                printf("\n--- PERIMETRO DO QUADRADO ---\n");

                printf("Digite o lado: ");
                scanf("%lf", &num1);

                resultado = num1 * 4;

                printf("Perimetro: %.2lf\n", resultado);
            }

            /*
               OPCAO 18 - PERIMETRO DO RETANGULO
            */
            else if (opcao == 18)
            {
                printf("\n--- PERIMETRO DO RETANGULO ---\n");

                printf("Digite a base: ");
                scanf("%lf", &num1);

                printf("Digite a altura: ");
                scanf("%lf", &num2);

                resultado = 2 * (num1 + num2);

                printf("Perimetro: %.2lf\n", resultado);
            }

            /*
               OPCAO 19 - CELSIUS PARA FAHRENHEIT
            */
            else if (opcao == 19)
            {
                printf("\n--- CELSIUS PARA FAHRENHEIT ---\n");

                printf("Digite a temperatura em Celsius: ");
                scanf("%lf", &num1);

                resultado = (num1 * 9 / 5) + 32;

                printf("Fahrenheit: %.2lf F\n", resultado);
            }

            /*
               OPCAO 20 - FAHRENHEIT PARA CELSIUS
            */
            else if (opcao == 20)
            {
                printf("\n--- FAHRENHEIT PARA CELSIUS ---\n");

                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%lf", &num1);

                resultado = (num1 - 32) * 5 / 9;

                printf("Celsius: %.2lf C\n", resultado);
            }

            /*
               OPCAO INVALIDA
            */
            else
            {
                printf("\nOpcao invalida!\n");
                printf("Digite uma opcao de 1 a 20 ou 0 para sair.\n");
            }
        }
    }

    printf("\n");
    printf("========================================\n");
    printf("          PROGRAMA ENCERRADO            \n");
    printf("========================================\n");

    return 0;
}
