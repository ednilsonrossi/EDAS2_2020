#include "pilha.h"

#define MAX_STACK_SIZE 10
#define TRUE 1
#define FALSE 0

struct Stack{
    int itens[MAX_STACK_SIZE];
    int topo;
};

void init(Pilha* pilha){

    *pilha = malloc(sizeof(struct Stack));

    if( *pilha != NULL){
        (*pilha)->topo = -1;
    }
}

int isEmpty(Pilha pilha){
    int resposta = FALSE;
    if(pilha->topo == -1){
        resposta = TRUE;
    }
    return resposta;
}

int isFull(Pilha pilha){
    int resposta = FALSE;
    if(pilha->topo == MAX_STACK_SIZE-1){
        resposta = TRUE;
    }
    return resposta;
}

int push(Pilha* pilha, int elemento){
    int deuCerto = FALSE;

    if(!isFull(*pilha)){
        (*pilha)->topo = (*pilha)->topo + 1;
        (*pilha)->itens[(*pilha)->topo] = elemento;
        deuCerto = TRUE;
    }

    return deuCerto;
}

int pop(Pilha* pilha, int* elemento){
    int deuCerto = FALSE;

    if( !isEmpty(*pilha)){
        *elemento = (*pilha)->itens[(*pilha)->topo];
        (*pilha)->topo = (*pilha)->topo - 1;
        deuCerto = TRUE;
    }

    return deuCerto;
}
