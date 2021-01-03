#include <stdlib.h>


#define TRUE 1
#define FALSE 0
typedef int Boolean;

typedef int INFO;

typedef struct lista* Lista;


void criarLista(Lista* );

Boolean listaVazia(Lista);

Boolean insereLista(Lista*, int);

Boolean deletaPosicao(Lista*, int);

struct node* recuperaPosicao(Lista, int);

struct node* novoNode(int);

INFO extraiInfo(struct node*);

void apagaNode(struct node* );




