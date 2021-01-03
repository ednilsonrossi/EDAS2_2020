#include "pilha.h"
#include "lse.h"

struct Stack{
    Lista node_topo;
};

void init(Pilha* pilha){
    *pilha = malloc(sizeof(struct Stack));
    if(*pilha != NULL)
        (*pilha)->node_topo = NULL;
}

int isFull(Pilha pilha){
    return FALSE;
}

int isEmpty(Pilha pilha){
    return pilha->node_topo == NULL ? TRUE : FALSE;
}

int push(Pilha* pilha, int elemento){
    int deuCerto = FALSE;
    if(*pilha != NULL){
        deuCerto = lista_insere(&(*pilha)->node_topo, elemento);
    }
    return deuCerto;
}

int pop(Pilha* pilha, int* elemento){
    int deuCerto = FALSE;

    if(!isEmpty(*pilha)){
        *elemento = extraiInfo( lista_recuperaPosicao((*pilha)->node_topo, 0) );
        lista_apagaPosicao(&(*pilha)->node_topo, 0);
        deuCerto = TRUE;
    }
    return deuCerto;
}





