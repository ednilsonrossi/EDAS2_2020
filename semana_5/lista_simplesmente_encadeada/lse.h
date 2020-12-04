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


#endif // LSE_H_INCLUDED
