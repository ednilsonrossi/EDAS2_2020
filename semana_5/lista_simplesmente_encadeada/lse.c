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


Boolean lista_insereFinal(Lista* ptr_lista, INFO informacao){
    struct no* novo;
    struct no* caminhante;
    Boolean deuCerto = FALSE;

    novo = malloc( sizeof(struct no) );

    if(novo != NULL){
        novo->info = informacao;
        novo->proximo = NULL;

        if(lista_estaVazia(*ptr_lista)){
            //Situaço lista vazia
            *ptr_lista = novo;
            deuCerto = TRUE;
        }else{
            //Situaço em que existe elementos na lista
            //Localizar o ultimo

            caminhante = *ptr_lista;
            while(caminhante->proximo != NULL){
                caminhante = caminhante->proximo;
            }
            caminhante->proximo = novo;
            deuCerto = TRUE;
        }
    }

    return deuCerto;
}

Lista lista_recuperaPosicao(Lista ptr_lista, int posicao){
    int contador;
    struct no* desejado;

    desejado = NULL;

    if(posicao >= 0){
        if(!lista_estaVazia(ptr_lista)){
            contador = 0;
            desejado = ptr_lista;
            while(contador < posicao && desejado->proximo != NULL){
                desejado = desejado->proximo;
                contador += 1;
            }
            if(contador != posicao){
                desejado = NULL;
            }
        }
    }

    return desejado;
}

INFO extraiInfo(struct no* node){

    return node->info;

}


































