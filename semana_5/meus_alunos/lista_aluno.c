#include "lista_aluno.h"

struct lista_aluno{
    Aluno * elementos;
    int tamanho_maximo;
    int tamanho_atual;
};

Lista iniciar_lista(int tamanho){

    Lista lista;

    if(tamanho > 0){
        lista->elementos = malloc( tamanho * sizeof(Aluno) );
        lista->tamanho_maximo = tamanho;
        lista->tamanho_atual = 0;
        for(int i=0; i < lista->tamanho_maximo; i++){
            lista->elementos[i] = NULL;
        }
    }else{
        lista = NULL;
    }

    return lista;
}

int lista_cheia(Lista lista){

    if(lista != NULL){
        if(lista->tamanho_atual == lista->tamanho_maximo)
            return TRUE;
        else
            return FALSE;
    }

    return TRUE;
}

int insere_lista(Lista lista, Aluno aluno){

    int deuCerto = FALSE;
    int i;

    if(lista != NULL && aluno != NULL){
        if(!lista_cheia(lista)){
            for(i=0; lista->elementos[i] != NULL; i++);
            lista->elementos[i] = aluno;
            lista->tamanho_atual = lista->tamanho_atual + 1;
            deuCerto = TRUE;
        }
    }

    return deuCerto;
}


Aluno recupera_posicao(Lista lista, int posicao){

    if(lista != NULL){
        if(posicao >= 0 && posicao <= lista->tamanho_maximo){
            return lista->elementos[posicao];
        }
        return NULL;
    }
    return NULL;
}












