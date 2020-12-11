#include <stdio.h>
#include <stdlib.h>
#include "lse.h"

int main()
{
    Lista minha_lista;
    Lista meu_no;

    lista_iniciar(&minha_lista);

    printf("%s\n", lista_insere(&minha_lista, 10) ? "Inserido" : "Erro");
    printf("%s\n", lista_insere(&minha_lista, 15) ? "Inserido" : "Erro");
    printf("%s\n", lista_insere(&minha_lista, 20) ? "Inserido" : "Erro");
    printf("%s\n", lista_insere(&minha_lista, 25) ? "Inserido" : "Erro");

    printf("%s\n", lista_insereFinal(&minha_lista, 100) ? "Inserido" : "Erro");
    printf("%s\n", lista_insereFinal(&minha_lista, 115) ? "Inserido" : "Erro");
    printf("%s\n", lista_insereFinal(&minha_lista, 120) ? "Inserido" : "Erro");
    printf("%s\n", lista_insereFinal(&minha_lista, 125) ? "Inserido" : "Erro");

    for(int i=0; i<10; i++){
        meu_no = lista_recuperaPosicao(minha_lista, i);
        if(meu_no != NULL)
            printf("Info: %d\n", extraiInfo(meu_no));
        else
            printf("Vazio\n");
    }

    while(!lista_estaVazia(minha_lista)){
        meu_no = lista_recuperaPosicao(minha_lista, 0);
        if(meu_no != NULL)
            printf("Info do finado: %d\n", extraiInfo(meu_no));
        else
            printf("Vazio\n");
        lista_apagaPosicao(&minha_lista, 0);
    }

    for(int i=0; i<10; i++){
        meu_no = lista_recuperaPosicao(minha_lista, i);
        if(meu_no != NULL)
            printf("Info: %d\n", extraiInfo(meu_no));
        else
            printf("Vazio\n");
    }

    return 0;
}
