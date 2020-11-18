#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

Operacao ler_operacao(){
    Operacao compra;
    printf("\n\nCadastro de Operacao");
    printf("Estabelecimento: ");
    __fpurge(stdin);
    scanf("%255[^\n]", &compra.estabelecimento);
    printf("Valor..........: R$ ");
    scanf("%f", &compra.valor);

    return compra;
}

Operacao maior_operacao(Operacao vetor[], int n){
    int index_maior = 0;
    for(int i=1; i<n; i++){
        if(vetor[i].valor > vetor[index_maior].valor){
            index_maior = i;
        }
    }
    return vetor[index_maior];
}

float soma_operacoes(Operacao dados[], int n){
    float soma=0;
    for(int i=0; i<n; i++){
        soma+= dados[i].valor;
    }
    return soma;
}
