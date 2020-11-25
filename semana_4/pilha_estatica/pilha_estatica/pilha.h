#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED


#include <stdlib.h>
#define TRUE 1
#define FALSE 0

typedef struct Stack* Pilha;

void init(Pilha* pilha);

int isEmpty(Pilha pilha);

int isFull(Pilha pilha);

int push(Pilha* pilha, int elemento);

int pop(Pilha* pilha, int* elemento);

#endif // PILHA_H_INCLUDED
