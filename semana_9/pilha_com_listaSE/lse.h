#ifndef LSE_H_INCLUDED
#define LSE_H_INCLUDED

#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int Boolean;

typedef int INFO;

typedef struct no* Lista;

/**
Esta operaçao cria a lista.
Sua funcionalidade e atribuir NULL para o ponteiro lista.
*/
void lista_iniciar(Lista* );

/**
Verifica se a lista passada como argumento esta vazia ou nao.
Uma lista vazia aponta para NULL.
Retorna TRUE caso estaja vazia e FALSE caso nao esteja vazia.
*/
Boolean lista_estaVazia(Lista);

/**
Operacao responsavel por inserir um novo no na lista com o dado (info)
passado como argumento. O no sera inserido no inicio da lista.
*/
Boolean lista_insere(Lista*, INFO);

/**
Operaço responsavel por inserir um no no na lista com o dado (info) passado como argumento.
O novo no sera inserido no final da lista.
*/
Boolean lista_insereFinal(Lista*, INFO);


/**
Esta operacao recupera o no que esta na posicao informada como argumento,
caso nao exista o elemento retorna-se NULL.
*/
Lista lista_recuperaPosicao(Lista, int);

Boolean lista_apagaPosicao(Lista*, int);

void lista_liberaNode(struct no*);

INFO extraiInfo(struct no*);

#endif // LSE_H_INCLUDED




























