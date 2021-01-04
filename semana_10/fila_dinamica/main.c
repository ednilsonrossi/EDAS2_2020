#include <stdio.h>
#include <stdlib.h>

#include "fila.h"

int main()
{
    int inteiro;
    Fila minha_fila;

    fila_init(&minha_fila);

    inteiro = 5;
    printf("%d - %s\n", inteiro, fila_enqueue(&minha_fila, inteiro)?"Enfeleirado":"Erro");
    inteiro = 10;
    printf("%d - %s\n", inteiro, fila_enqueue(&minha_fila, inteiro)?"Enfeleirado":"Erro");
    inteiro = 15;
    printf("%d - %s\n", inteiro, fila_enqueue(&minha_fila, inteiro)?"Enfeleirado":"Erro");
    inteiro = 5;
    printf("%d - %s\n", inteiro, fila_enqueue(&minha_fila, inteiro)?"Enfeleirado":"Erro");
    inteiro = 50;
    printf("%d - %s\n", inteiro, fila_enqueue(&minha_fila, inteiro)?"Enfeleirado":"Erro");


    printf("Esvaziando fila:\n");
    while(!fila_isEmpty(minha_fila)){
        fila_dequeue(&minha_fila, &inteiro);
        printf("%d\n", inteiro);
    }
    return 0;
}
