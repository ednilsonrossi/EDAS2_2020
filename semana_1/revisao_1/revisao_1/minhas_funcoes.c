#include "minhas_funcoes.h"

void le_notas(float notas[], int qtdade){

    for(int i=0; i<qtdade; i++){
        printf("Digite nota: ");
        scanf("%f", &notas[i]);
    }
}


float media_notas(float notas[], int qtdade){
    float soma=0;
    for(int i=0; i<qtdade; i++){
        soma += notas[i];
    }
    return soma/qtdade;
}
