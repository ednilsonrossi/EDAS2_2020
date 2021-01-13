#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int Info;

typedef struct node * Node;

/*
 * Aloca (instancia) um espaço na memória para armazenar um novo node.
 */
Node node_criar();

void node_apagar(Node);

void node_alteraInfo(Node*, Info);

void node_alteraNext(Node*, Node);

void node_alteraPrev(Node*, Node);

Info node_obtemInfo(Node);

Node node_obtemNext(Node);

Node node_obtemPrev(Node);

#endif // NODE_H_INCLUDED
