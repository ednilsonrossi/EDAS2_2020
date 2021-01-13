#ifndef LDE_H_INCLUDED
#define LDE_H_INCLUDED

#include <stdlib.h>
#include "node.h"

#define TRUE 1
#define FALSE 0

typedef struct lista * Lista;

//int lista_insere(Lista* aLista, Info dado);

/*
 * Define uma nova lista. A lista definida sempre será vazia.
 */
Lista lista_criar();

/*
 * Em uma lista já existente, inclui-se um novo node.
 * Esse novo node é inserido no final da lista.
 *
 * A operação retorna TRUE(1) se inseriu com sucesso e FALSE(0) se
 * houve algum erro.
 */
int lista_adiciona(Lista*, Info);

/*
 * Em uma lista já existente, inclui-se um novo node contendo uma
 * referência (ponteiro) para uma Info. Esse novo node é inserido
 * no inicio da lista.
 *
 * A operação retorna TRUE(1) se inseriu com sucesso e FALSE(0) se
 * houve algum erro.
 */
int lista_adicionaInicio(Lista*, Info);

/*
 * Verifica se a posição desejada pelo usuário existe na lista passada
 * como argumento para a operação. Caso a posição seja válida e exista
 * na lista, a operação retorna um Indo. Caso a posição
 * seja inválida ou não exista na lista ou a lista esteja vazia retorna-se
 * o valor NULO.
 */
Info lista_obtemInfo(Lista, int);

/*
 * Verifica se uma lista está ou não vazia. Retorna 1 se a lista está vazia
 */
int lista_estaVazia(Lista);

/**
  * Destroi a lista passada como argumento.
  * Operação retorna TRUE se conseguiu destruir a lista e FALSE
  * se não conseguiu destruir a lista.
  **/
int lista_destroi(Lista*);

/**
  * Verifica se uma Informação está ou não na lista. Retorna TRUE se a Info Existe
  * e FALSE se não existir.
 **/
int lista_existe(Lista, Info);




#endif // LDE_H_INCLUDED
