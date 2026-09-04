#include <stdio.h>
#define MAX_ALUNOS 50

float calcular_media(float n1, float n2,float n3);
void mostrar_resultado(char nome[], float media);

int main() {
    int quantidade, i;
    char nome[50];
    float n1, n2, n3, media;
    
    printf("=== CONTROLE DE NOTAS ===\n");
    printf("Quantos alunos serão cadastrados?");
    scanf("%d", &quantidade);
    
    i = 1;
    while (i <= quantidade) {
        printf("\nAluno %d\n", i );
        printf("Nome: ");
        scanf(" %[^\n]", nome);
        printf("Nota 1: "); scanf("%f", &n1);
        printf("Nota 2: "); scanf("%f", &n2);
        printf("Nota 3: "); scanf("%f", &n3);
        
        media = calcular_media(n1, n2, n3);
        mostrar_resultado(nome, media);
        i = i + 1;
    }
    
    printf("\n---- IT'S OVER! ----");
    return 0;
}

float calcular_media(float n1, float n2, float n3) {
    float media;
    media = (n1 + n2 + n3) / 3.0;
    return media;
}

void mostrar_resultado(char nome [], float media) {
    printf("Aluno: %s\n", nome);
    printf("Média: %.2f ", media);
    if (media >= 6.0)
        printf("Resultado: Não fez mais que sua obrigação!\n");
    else
        printf("Resultado: SE FEROU KAKAKKK! :(\n");
    
}
