#ifndef LSE_H_INCLUDED
#define LSE_H_INCLUDED

#include <stdlib.h>
#include "pilha.h"

#define TRUE 1
#define FALSE 0
typedef int Boolean;

typedef Carro INFO;

typedef struct no* Lista;

void lista_iniciar(Lista* );

Boolean lista_estaVazia(Lista);

Boolean lista_insere(Lista*, INFO);

Boolean lista_insereFinal(Lista*, INFO);

Lista lista_recuperaPosicao(Lista, int);

Boolean lista_apagaPosicao(Lista*, int);

void lista_liberaNode(struct no*);

INFO extraiInfo(struct no*);

#endif // LSE_H_INCLUDED




























