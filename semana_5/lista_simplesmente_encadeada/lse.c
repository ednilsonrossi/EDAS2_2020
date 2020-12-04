#include "lse.h"

struct no{
    INFO info;
    struct no * proximo;
};


void lista_iniciar(Lista* ptr_lista){
    *ptr_lista = NULL;
}

Boolean lista_estaVazia(Lista ptr_lista){
    return ptr_lista == NULL ? TRUE : FALSE;
}

Boolean lista_insere(Lista* ptr_lista, INFO informacao){
    Boolean deuCerto = FALSE;
    struct no* novo;

    //1o - Criar o espaco de memoria
    novo = malloc( sizeof(struct no) );

    if(novo != NULL){
        //2o atribuir o INFO
        novo->info = informacao;

        //3o definir quem eh o proximo
        novo->proximo = *ptr_lista;

        //4o atualizar o inicio da lista
        *ptr_lista = novo;

        deuCerto = TRUE;
    }

    return deuCerto;
}
