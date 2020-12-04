#include <stdio.h>
#include <stdlib.h>
#include "lse.h"

int main()
{
    Lista minha_lista;

    lista_iniciar(&minha_lista);

    printf("%s\n", lista_insere(&minha_lista, 10) ? "Inserido" : "Erro");
    printf("%s\n", lista_insere(&minha_lista, 15) ? "Inserido" : "Erro");
    printf("%s\n", lista_insere(&minha_lista, 20) ? "Inserido" : "Erro");
    printf("%s\n", lista_insere(&minha_lista, 25) ? "Inserido" : "Erro");

    return 0;
}
