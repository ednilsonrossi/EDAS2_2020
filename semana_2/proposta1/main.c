#include <stdio.h>
#include <stdlib.h>

#include "funcoes.h"

int main()
{
    char alunos[ALUNOS][40];
    float n1[ALUNOS];
    float n2[ALUNOS];
    float n3[ALUNOS];
    float n4[ALUNOS];
    float media[ALUNOS];
    int index_menor;

    for(int a=0; a < ALUNOS; a++){

        __fpurge(stdin);
        printf("Nome do aluno: ");
        scanf("%40[^\n]", &alunos[a]);

        printf("Nota 1: ");
        scanf("%f", &n1[a]);
        printf("Nota 2: ");
        scanf("%f", &n2[a]);
        printf("Nota 3: ");
        scanf("%f", &n3[a]);
        printf("Nota 4: ");
        scanf("%f", &n4[a]);

        media[a] = media_aritmetica(n1[a], n2[a], n3[a], n4[a]);

    }

    index_menor = 0;
    for(int a=1; a < ALUNOS; a++){
        if(media[a] < media[index_menor]){
            index_menor = a;
        }
    }
    printf("\n\nMenor media: %.2f - Aluno: %s\n\n", media[index_menor], alunos[index_menor]);

    printf("Media avaliacao 1: %.2f\n", media__aritmetica(n1));
    printf("Media avaliacao 2: %.2f\n", media__aritmetica(n2));
    printf("Media avaliacao 3: %.2f\n", media__aritmetica(n3));
    printf("Media avaliacao 4: %.2f\n", media__aritmetica(n4));

    printf("\n\nAlunos aprovados\n");
    for(int a=0; a < ALUNOS; a++){
        if(media[a] >= 6){
            printf("%s\n", alunos[a]);
        }
    }

    printf("\n\nAlunos reaprovados\n");
    for(int a=0; a < ALUNOS; a++){
        if(media[a] < 6){
            printf("%s\n", alunos[a]);
        }
    }

    return 0;
}
