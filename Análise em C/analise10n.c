#include <stdio.h>

int main() {
    float v[10], t, soma = 0, med, mediana, md = 0;
    int i, j, qtd, maior = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%f", &v[i]);
        soma += v[i];
    }

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (v[j] > v[j + 1]) {
                t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
            }
        }
    }

    med = soma / 10;
    mediana = (v[4] + v[5]) / 2;

    for (i = 0; i < 10; i++) {
        qtd = 0;

        for (j = 0; j < 10; j++) {
            if (v[i] == v[j]) {
                qtd++;
            }
        }

        if (qtd > maior) {
            maior = qtd;
            md = v[i];
        }
    }

    printf("\n\n=====================================\n");
    printf("             RESULTADOS\n");
    printf("=====================================\n");

    printf("\n[1] SEQUENCIA CRESCENTE\n");
    printf("    ");
    for (i = 0; i < 10; i++) {
        printf("%.2f  ", v[i]);
    }

    printf("\n\n[2] SEQUENCIA DECRESCENTE\n");
    printf("    ");
    for (i = 9; i >= 0; i--) {
        printf("%.2f  ", v[i]);
    }

    printf("\n\n[3] MODA\n");
    if (maior == 1)
        printf("    Nao existe moda.\n");
    else
        printf("    %.2f (aparece %d vezes)\n", md, maior);

    printf("\n[4] MEDIA\n");
    printf("    %.2f\n", med);

    printf("\n[5] MEDIANA\n");
    printf("    %.2f\n", mediana);

    printf("\n=====================================\n");
    printf("               FIM\n");
    printf("=====================================\n");

    return 0;
}
