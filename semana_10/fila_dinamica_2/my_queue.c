#include "my_queue.h"

struct node{
    INFO info;
    struct node* next;
};

struct fila {
    struct node* inicio;
    struct node* fim;
};

Boolean fila_init(Fila* queue){
    *queue = malloc( sizeof(struct fila) );
    if(*queue == NULL)
        return FALSE;
    else{
        (*queue)->inicio = NULL;
        (*queue)->fim = NULL;
        return TRUE;
    }
}

Boolean fila_isFull(Fila queue){
    return FALSE;
}

Boolean fila_isEmpty(Fila queue){
    return queue->inicio == NULL && queue->fim == NULL ? TRUE : FALSE;
}

Boolean fila_enqueue(Fila* queue, INFO dado){
    Boolean deuCerto = FALSE;
    if(*queue != NULL){
        struct node* novo;
        novo = malloc (sizeof(struct node));
        novo->info = dado;
        novo->next = NULL;

        if( fila_isEmpty(*queue)){
            (*queue)->inicio = novo;
            (*queue)->fim = novo;
            deuCerto = TRUE;
        }else{
            (*queue)->fim->next = novo;
            (*queue)->fim = novo;
            deuCerto = TRUE;
        }
    }
    return deuCerto;
}

Boolean fila_dequeue(Fila* queue, INFO* dado){
    Boolean deuCerto = FALSE;
    struct node* finado;
    if(*queue != NULL){
        if(!fila_isEmpty(*queue)){
            finado = (*queue)->inicio;
            *dado = finado->info;

            if((*queue)->inicio == (*queue)->fim){
                //Apenas um node na fila
                (*queue)->inicio = NULL;
                (*queue)->fim = NULL;
            }else{
                //Mais de um node na fila
                (*queue)->inicio = finado->next;
            }

            free(finado);
            deuCerto = TRUE;
        }
    }
    return deuCerto;
}
