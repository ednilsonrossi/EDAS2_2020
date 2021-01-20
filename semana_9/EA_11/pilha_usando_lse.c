#include "pilha.h"
#include "lse.h"

struct Stack{
    Lista node_topo;
    int maximo;
    int atual;
};

void pilha_init(Pilha* pilha, int maxsize){
    if(maxsize > 0){
        *pilha = malloc(sizeof(struct Stack));
        if(*pilha != NULL){
            (*pilha)->node_topo = NULL;
            (*pilha)->atual = 0;
            (*pilha)->maximo = maxsize;
        }
    }
}

int pilha_isFull(Pilha pilha){
    return pilha->atual == pilha->maximo? TRUE : FALSE;
}

int pilha_isEmpty(Pilha pilha){
    return pilha->node_topo == NULL ? TRUE : FALSE;
}

int pilha_push(Pilha* pilha, INFO elemento){
    int deuCerto = FALSE;
    if(*pilha != NULL){
        deuCerto = lista_insere(&(*pilha)->node_topo, elemento);
        (*pilha)->atual += 1;
    }
    return deuCerto;
}

int pilha_pop(Pilha* pilha, INFO* elemento){
    int deuCerto = FALSE;

    if(!pilha_isEmpty(*pilha)){
        *elemento = extraiInfo( lista_recuperaPosicao((*pilha)->node_topo, 0) );
        lista_apagaPosicao(&(*pilha)->node_topo, 0);
        (*pilha)->atual -= 1;
        deuCerto = TRUE;
    }
    return deuCerto;
}





