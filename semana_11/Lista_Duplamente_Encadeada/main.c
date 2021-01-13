#include <stdio.h>
#include <stdlib.h>
#include "LDE.h"

int main()
{


    Lista lst = NULL;
    Info informacao;
    int i;

    lst = lista_criar();

    lista_adicionaInicio(&lst, 5);
    lista_adicionaInicio(&lst, 10);
    lista_adicionaInicio(&lst, 15);
    lista_adicionaInicio(&lst, 20);

    printf("20: %s.\n", lista_existe(lst, 20)?"Achei":"Não achei");
    printf("30: %s.\n", lista_existe(lst, 30)?"Achei":"Não achei");

    for(i=0; i<4; i++){
        informacao = lista_obtemInfo(lst, i);
        printf("Lista[%d]: %d\n", i, informacao);
    }

    lista_destroi(&lst);

    for(i=0; i<4; i++){
        informacao = lista_obtemInfo(lst, i);
        printf("Lista[%d]: %d\n", i, informacao);
    }
    return 0;
}
