#include <stdio.h>
#include <stdlib.h>
#include "minhas_funcoes.h"


#define QTD_MAXIMA 100

int main()
{
    int qtd_exercicios, qtd_questionarios, qtd_alunos;
    float notas[QTD_MAXIMA];
    float media_exercicio, media_questionario, nota_trabalho, media_final;

    printf("Informe quantidade de alunos: ");
    scanf("%d", &qtd_alunos);

    printf("Informe quantidade de exercicios aplicados: ");
    scanf("%d", &qtd_exercicios);

    printf("Informe quantidade de questionarios aplicados: ");
    scanf("%d", &qtd_questionarios);

    for(int i = 0; i < qtd_alunos; i++){
        printf("Digite as notas dos exercicios\n\n");
        le_notas(notas, qtd_exercicios);
        media_exercicio = media_notas(notas, qtd_exercicios);

        printf("Digite as notas dos questionarios\n\n");
        le_notas(notas, qtd_questionarios);
        media_questionario = media_notas(notas, qtd_questionarios);

        printf("Digite as notas do Trabalho\n\n");
        scanf("%f", &nota_trabalho);

        media_final = (media_exercicio + media_questionario + nota_trabalho) / 3;

        printf("Media do aluno: %.2f\n\n", media_final);
    }

    return 0;
}
