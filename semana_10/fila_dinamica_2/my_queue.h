#ifndef MY_QUEUE_H_INCLUDED
#define MY_QUEUE_H_INCLUDED

#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int Boolean;
typedef int INFO;
typedef struct fila* Fila;

Boolean fila_init(Fila* queue);

Boolean fila_isFull(Fila queue);

Boolean fila_isEmpty(Fila queue);

Boolean fila_enqueue(Fila* queue, INFO dado);

Boolean fila_dequeue(Fila* queue, INFO* dado);


#endif // MY_QUEUE_H_INCLUDED
