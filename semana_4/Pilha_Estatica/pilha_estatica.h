/*
 * File:   pilha_estatica.h
 * Author: Ednilson Rossi
 *
 * Created on 22 de Agosto de 2015, 11:00
 */
#include <stdlib.h>

typedef struct Stack* Pilha;

void init(Pilha* pilha);

int isFull(Pilha pilha);

int isEmpty(Pilha pilha);

int push(Pilha* pilha, int elemento);

int pop(Pilha* pilha, int* elemento);
