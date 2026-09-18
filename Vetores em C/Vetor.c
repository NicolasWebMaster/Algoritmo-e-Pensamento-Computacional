#include <stdio.h>

int main() {
    int vet[20];
    int i;
    int soma = 0;
    int contPos = 0;
    int maior, menor;
    float media;

    printf("Digite os 20 numeros:\n\n");

    for (i = 0; i < 20; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vet[i]);

        soma += vet[i];

        if (vet[i] > 0) {
            contPos++;
        }
    }

    maior = vet[0];
    menor = vet[0];

    for (i = 1; i < 20; i++) {

        if (vet[i] > maior) {
            maior = vet[i];
        }

        if (vet[i] < menor) {
            menor = vet[i];
        }
    }

    media = (float)soma / 20;

    printf("\n\n");
    printf("============================================\n");
    printf("              RESULTADOS\n");
    printf("============================================\n");

    printf("\nSoma dos numeros: %d\n", soma);

    printf("Media dos numeros: %.2f\n", media);

    printf("Quantidade de numeros positivos: %d\n", contPos);

    printf("\nNumeros negativos: ");

    for (i = 0; i < 20; i++) {
        if (vet[i] < 0) {
            printf("%d ", vet[i]);
        }
    }

    printf("\n");

    printf("\nMaior valor: %d\n", maior);

    printf("Menor valor: %d\n", menor);

    printf("\n============================================\n");
    printf("           NUMEROS DO VETOR\n");
    printf("============================================\n");

    for (i = 0; i < 20; i++) {
        printf("%d ", vet[i]);
    }

    printf("\n");
    printf("============================================\n");
    printf("              FIM DO PROGRAMA\n");
    printf("============================================\n");

    return 0;
}
