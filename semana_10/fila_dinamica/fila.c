#include "fila.h"

struct fila{
    Lista inicio;
};

Boolean fila_init(Fila* queue){
    Boolean deuCerto = FALSE;

    *queue = malloc(sizeof(struct fila));
    if(*queue != NULL){
         lista_iniciar(& (*queue)->inicio );
         deuCerto = TRUE;
    }

    return deuCerto;
}

Boolean fila_isFull(Fila queue){
    return FALSE;
}

Boolean fila_isEmpty(Fila queue){
    return lista_estaVazia(queue->inicio);
}

Boolean fila_enqueue(Fila* queue, int dado){
    return lista_insereFinal(&(*queue)->inicio, dado);
}

Boolean fila_dequeue(Fila* queue, int* dado){
    *dado = extraiInfo( lista_recuperaPosicao((*queue)->inicio, 0) );
    lista_apagaPosicao(&(*queue)->inicio, 0);
    return TRUE;
}
