#include <stdio.h>

int main() {
    int opcao;
    double temperatura;

    do {
        printf("\n====================================\n");
        printf("       CONVERSOR DE TEMPERATURA\n");
        printf("====================================\n");
        printf("1 - Celsius para Kelvin\n");
        printf("2 - Celsius para Fahrenheit\n");
        printf("3 - Kelvin para Fahrenheit\n");
        printf("4 - Fahrenheit para Kelvin\n");
        printf("5 - Fahrenheit para Celsius\n");
        printf("6 - Kelvin para Celsius\n");
        printf("0 - Sair\n");
        printf("====================================\n");
        printf("Digite uma opcao: ");

        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("\nDigite a temperatura em Celsius: ");
                scanf("%lf", &temperatura);

                printf("Resultado: %.2f K\n",
                       temperatura + 273.15);
                break;

            case 2:
                printf("\nDigite a temperatura em Celsius: ");
                scanf("%lf", &temperatura);

                printf("Resultado: %.2f F\n",
                       (temperatura * 9.0 / 5.0) + 32.0);
                break;

            case 3:
                printf("\nDigite a temperatura em Kelvin: ");
                scanf("%lf", &temperatura);

                printf("Resultado: %.2f F\n",
                       ((temperatura - 273.15) * 9.0 / 5.0) + 32.0);
                break;

            case 4:
                printf("\nDigite a temperatura em Fahrenheit: ");
                scanf("%lf", &temperatura);

                printf("Resultado: %.2f K\n",
                       ((temperatura - 32.0) * 5.0 / 9.0) + 273.15);
                break;

            case 5:
                printf("\nDigite a temperatura em Fahrenheit: ");
                scanf("%lf", &temperatura);

                printf("Resultado: %.2f C\n",
                       (temperatura - 32.0) * 5.0 / 9.0);
                break;

            case 6:
                printf("\nDigite a temperatura em Kelvin: ");
                scanf("%lf", &temperatura);

                printf("Resultado: %.2f C\n",
                       temperatura - 273.15);
                break;

            case 0:
                printf("\nTchau Tchau bebê 😘!\n");
                break;

            default:
                printf("\nDigita direito Animal 😤!\n");
        }

    } while (opcao != 0);

    return 0;
}
