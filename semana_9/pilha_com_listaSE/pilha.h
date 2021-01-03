#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include <stdlib.h>

typedef struct Stack* Pilha;

void init(Pilha* pilha);

int isFull(Pilha pilha);

int isEmpty(Pilha pilha);

int push(Pilha* pilha, int elemento);

int pop(Pilha* pilha, int* elemento);

#endif // PILHA_H_INCLUDED
