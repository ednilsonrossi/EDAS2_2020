#include <stdio.h>
#include <stdlib.h>

#include "ListaSimplesmenteEncadeadaHeadAndTail.h"

int main()
{
    int i;
    Lista minhaLista;
    struct node* dado;

    criarLista(&minhaLista);

    printf("%s", insereLista(&minhaLista, 6)?"Inserido":"Erro");
    printf("%s", insereLista(&minhaLista, 50)?"Inserido":"Erro");
    printf("%s", insereLista(&minhaLista, 7)?"Inserido":"Erro");
    printf("%s", insereLista(&minhaLista, 30)?"Inserido":"Erro");
    printf("%s", insereLista(&minhaLista, 5)?"Inserido":"Erro");


    printf("Lista inserida\n\n");


    for(i=0; (dado=recuperaPosicao(minhaLista, i)) != NULL; i++){
        printf("Posição: %d\tInfo: %d\n", i, extraiInfo(dado));
    }

    //for(;deletaPosicao(&minhaLista, 0););
    deletaPosicao(&minhaLista, 2);

    printf("Lista inserida\n\n");

    for(i=0; (dado=recuperaPosicao(minhaLista, i)) != NULL; i++){
        printf("Posição: %d\tInfo: %d\n", i, extraiInfo(dado));
    }

    return 0;
}
