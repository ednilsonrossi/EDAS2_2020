#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

int main()
{

    Pilha minhaPilha;
    int saida;

    init(&minhaPilha);

    printf("%d\n", push(&minhaPilha, 3));
    printf("%d\n", push(&minhaPilha, 6));
    printf("%d\n", push(&minhaPilha, 9));
    printf("%d\n", push(&minhaPilha, 12));

    if(pop(&minhaPilha, &saida) == TRUE)
        printf("-> %d\n", saida);
    else{
        printf("pilha vazia\n");
    }

    if(pop(&minhaPilha, &saida) == TRUE)
        printf("-> %d\n", saida);
    else{
        printf("pilha vazia\n");
    }
    if(pop(&minhaPilha, &saida) == TRUE)
        printf("-> %d\n", saida);
    else{
        printf("pilha vazia\n");
    }
    if(pop(&minhaPilha, &saida) == TRUE)
        printf("-> %d\n", saida);
    else{
        printf("pilha vazia\n");
    }
    if(pop(&minhaPilha, &saida) == TRUE)
        printf("-> %d\n", saida);
    else{
        printf("pilha vazia\n");
    }
    if(pop(&minhaPilha, &saida) == TRUE)
        printf("-> %d\n", saida);
    else{
        printf("pilha vazia\n");
    }


    return 0;
}
