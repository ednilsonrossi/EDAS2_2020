#include "lse_CC.h"

struct node{
    INFO info;
    struct node* next;
};

struct lista{
    struct node* head;
    struct node* tail;
};

Boolean deletaPosicao(Lista* ptrList, int posicao){
    Boolean deuCerto;
    struct node* desejado;
    struct node* anterior;
    int contador;

    deuCerto = FALSE;

    if(posicao >= 0 && *ptrList != NULL && !listaVazia(*ptrList)){

        if(posicao == 0){
            /* 1a Situação
             * Deseja-se apagar o primeiro elemento da lista.
             */
            desejado = (*ptrList)->head;
            (*ptrList)->head = desejado->next;
            if(desejado == (*ptrList)->tail){
                (*ptrList)->tail = NULL;
            }
            apagaNode(desejado);
            deuCerto = TRUE;
        }else{
            /* 2a Situação
             * Nó está no meio da lista ou na última posição ou não existe na lista.
             */
            anterior = NULL;
            desejado = (*ptrList)->head;
            contador = 0;

            while(contador < posicao && desejado != (*ptrList)->tail){
                anterior = desejado;
                desejado = desejado->next;
                contador += 1;
            }

            if(contador == posicao){
                anterior->next = desejado->next;
                if(desejado == (*ptrList)->tail){
                    (*ptrList)->tail = anterior;
                }
                apagaNode(desejado);
                deuCerto = TRUE;
            }
        }
    }

    return deuCerto;
}

struct node* recuperaPosicao(Lista list, int posicao){
    int contador;
    struct node* desejado;

    desejado = NULL;

    printf("Lista: %p\tLista.head: %p\tLista.tail: %p\n", list, list->head, list->tail);

    if(posicao >= 0){
        if(list != NULL){
            if(!listaVazia(list)){
                contador=0;
                desejado = list->head;
                while(contador < posicao && desejado->next != NULL){
                    desejado = desejado->next;
                    contador++;
                }
                if(contador != posicao){
                    desejado = NULL;
                }else{
                    printf("NODE: %p\tINFO: %d\tNEXT: %p\n",desejado, desejado->info, desejado->next);
                }
            }
        }
    }

    return desejado;

}

Boolean insereLista(Lista* ptrList, int dado){
    Boolean deuCerto;
    struct node* novo;
    struct node* auxiliar;

    deuCerto = FALSE;

    novo = novoNode(dado);

    if(novo != NULL){
        if( *ptrList != NULL){
            if(listaVazia(*ptrList)){
                /*Lista vazia. head e tail apontam para NULL*/
                (*ptrList)->head = novo;
                (*ptrList)->tail = novo;
                deuCerto = TRUE;
            }else{
                /*Lista não é vazia*/
                auxiliar = (*ptrList)->tail;
                auxiliar->next = novo;
                (*ptrList)->tail = novo;
                deuCerto = TRUE;
            }
            printf("INFO: %d\tNEXT: %p\n", novo->info, novo->next);
        }
    }

    return deuCerto;
}

Boolean listaVazia(Lista list){
    Boolean vazia;

    vazia = FALSE;

    if(list != NULL){
        if(list->head == NULL && list->tail == NULL){
            vazia = TRUE;
        }
        else{
            vazia = FALSE;
        }
    }

    return vazia;
}

void criarLista(Lista* list){
    struct lista* novaLista;

    novaLista = malloc(sizeof(struct lista));

    if(novaLista != NULL){
        novaLista->head = NULL;
        novaLista->tail = NULL;
    }

    *list = novaLista;
}

struct node* novoNode(int dado){
    struct node* novo;

    novo = malloc(sizeof(struct node));

    if(novo != NULL){
        novo->info = dado;
        novo->next = NULL;
    }
    return novo;
}

INFO extraiInfo(struct node* lista){
    return lista->info;
}

void apagaNode(struct node* lista){
    free(lista);
}
