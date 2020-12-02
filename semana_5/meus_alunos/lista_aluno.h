#ifndef LISTA_ALUNO_H_INCLUDED
#define LISTA_ALUNO_H_INCLUDED

#include "aluno.h"
#define TRUE 1
#define FALSE 0

typedef struct lista_aluno * Lista;

Lista iniciar_lista(int tamanho);

int insere_lista(Lista, Aluno);

int lista_cheia(Lista);

Aluno recupera_posicao(Lista, int);

#endif // LISTA_ALUNO_H_INCLUDED
