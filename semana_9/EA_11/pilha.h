#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

#include "carro.h"

#define TRUE 1
#define FALSE 0

typedef struct Stack* Pilha;

typedef Carro INFO;

void pilha_init(Pilha* pilha, int maxsize);

int pilha_isFull(Pilha pilha);

int pilha_isEmpty(Pilha pilha);

int pilha_push(Pilha* pilha, INFO elemento);

int pilha_pop(Pilha* pilha, INFO* elemento);

#endif // PILHA_H_INCLUDED
