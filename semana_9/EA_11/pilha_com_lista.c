#include <stdlib.h>
#include "pilha.h"

struct node{
    INFO dado;
    struct node* proximo;
};

struct Stack{
    struct node* topo;
    int maximo;
};


void pilha_init(Pilha* pilha, int maxsize){
    if(maxsize > 0){
        *pilha = malloc( sizeof(struct Stack) );
        if( *pilha != NULL){
            (*pilha)->topo = NULL;
            (*pilha)->maximo = maxsize;
        }
    }else{
        *pilha = NULL;
    }
}

int pilha_isFull(Pilha pilha){
    struct node* caminhante;
    int contador=0;
    int estaCheia = FALSE;

    if(!pilha_isEmpty(pilha)){
        caminhante = pilha->topo;
        while(caminhante->proximo != NULL){
            contador++;
            caminhante = caminhante->proximo;
        }

        if(contador == pilha->maximo-1)
            estaCheia = TRUE;
    }

    return estaCheia;
}

int pilha_isEmpty(Pilha pilha){
    return pilha->topo == NULL ? TRUE : FALSE;
}

int pilha_push(Pilha* pilha, INFO elemento){
    struct node* novo;
    int deuCerto = FALSE;
    if(*pilha != NULL){
        if(!pilha_isFull(*pilha)){
            novo = malloc( sizeof(struct node) );
            if(novo != NULL){
                novo->dado = elemento;
                if(pilha_isEmpty(*pilha)){
                    //Primeiro elemento
                    novo->proximo = NULL;
                }else{
                    //Ja existem elementos na pilha
                    novo->proximo = (*pilha)->topo;
                }
                (*pilha)->topo = novo;
                deuCerto = TRUE;
            }
        }
    }
    return deuCerto;
}

int pilha_pop(Pilha* pilha, INFO* elemento){
    struct node* saida;
    int deuCerto = FALSE;
    if(*pilha != NULL){
        if(!pilha_isEmpty(*pilha)){
            saida = (*pilha)->topo;
            (*pilha)->topo = saida->proximo;
            *elemento = saida->dado;
            free(saida);
            deuCerto = TRUE;
        }
    }
    return deuCerto;
}





















