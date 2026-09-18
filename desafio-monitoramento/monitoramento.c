#include <stdio.h>

int main() {
    float limite, temp;
    int consecutivas = 0;
    int qtd_leituras = 0;
    int entrada_valida;

    do {
        printf("\nDigite o limite de temperatura: ");

        entrada_valida = scanf("%f", &limite);

        while (getchar() != '\n');

        if (entrada_valida != 1) {
            printf("Entrada invalida! Digite um numero.\n");
        } else {
            printf("Limite definido: %.2f graus\n", limite);
        }

    } while (entrada_valida != 1);

    printf("\n============================================\n");
    printf("        INICIO DO MONITORAMENTO\n");
    printf("============================================\n");
    printf("Digite as temperaturas uma por vez.\n");
    printf("O monitoramento sera encerrado quando\n");
    printf("forem registradas 3 temperaturas consecutivas\n");
    printf("acima do limite definido.\n");

    while (consecutivas < 3) {

        printf("\nDigite a temperatura: ");

        entrada_valida = scanf("%f", &temp);

        while (getchar() != '\n');

        if (entrada_valida != 1) {
            printf("Entrada invalida! Digite uma temperatura numerica.\n");
            continue;
        }

        qtd_leituras++;

        printf("Temperatura registrada: %.2f graus\n", temp);

        if (temp > limite) {
            consecutivas++;

            printf("ALERTA: temperatura acima do limite!\n");
            printf("Temperaturas consecutivas acima do limite: %d/3\n",
                   consecutivas);

            if (consecutivas == 3) {
                printf("\n*** LIMITE DE SEGURANCA ATINGIDO ***\n");
                printf("Tres temperaturas consecutivas acima do limite.\n");
                printf("Monitoramento encerrado automaticamente.\n");
            }

        } else {
            consecutivas = 0;

            printf("Temperatura dentro do limite.\n");
            printf("Contagem de consecutivas reiniciada.\n");
        }
    }

    printf("\n============================================\n");
    printf("              RESUMO FINAL\n");
    printf("============================================\n");
    printf("Limite definido: %.2f graus\n", limite);
    printf("Total de leituras validas: %d\n", qtd_leituras);
    printf("Motivo do encerramento: 3 temperaturas\n");
    printf("consecutivas acima do limite.\n");
    printf("============================================\n");

    return 0;
}
