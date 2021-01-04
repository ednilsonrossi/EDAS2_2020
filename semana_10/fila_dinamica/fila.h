#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

#include "lse.h"
#define TRUE 1
#define FALSE 0

typedef int Boolean;

typedef struct fila* Fila;

Boolean fila_init(Fila* queue);

Boolean fila_isFull(Fila queue);

Boolean fila_isEmpty(Fila queue);

Boolean fila_enqueue(Fila* queue, int dado);

Boolean fila_dequeue(Fila* queue, int* dado);

#endif // FILA_H_INCLUDED
