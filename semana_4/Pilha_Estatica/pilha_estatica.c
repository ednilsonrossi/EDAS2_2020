#include "pilha_estatica.h"

#define STACKSIZE 2
#define TRUE 1
#define FALSE 0

struct Stack{
    int itens[STACKSIZE];
    int top;
};


void init(Pilha* pilha){

	*pilha = malloc(sizeof(struct Stack));

	if(*pilha != NULL){
		(*pilha)->top = -1;
	}
}

int isFull(Pilha pilha){
	int resposta = FALSE;
	if(pilha->top == STACKSIZE-1){
		resposta = TRUE;
	}
	return resposta;
}

int isEmpty(Pilha pilha){
	int resposta = FALSE;
	if(pilha->top == -1){
		resposta = TRUE;
	}
	return resposta;
}

int push(Pilha* pilha, int elemento){
	int deuCerto = FALSE;

	if( *pilha != NULL ){
		if(!isFull(*pilha)){
			(*pilha)->top = (*pilha)->top + 1;
			(*pilha)->itens[(*pilha)->top] = elemento;
			deuCerto = TRUE;
		}
	}

	return deuCerto;
}

int pop(Pilha* pilha, int* elemento){
	int deuCerto = FALSE;

	if( *pilha != NULL ){
		if(!isEmpty(*pilha)){
			*elemento = (*pilha)->itens[(*pilha)->top];
			(*pilha)->top = (*pilha)->top - 1;
			deuCerto = TRUE;
		}
	}

	return deuCerto;
}



