#include "LDE.h"

struct lista{
	Node head;
};

Lista lista_criar(){
    struct lista * novo;
    novo = malloc(sizeof(struct lista));
    novo->head = NULL;
    return novo;
}

int lista_estaVazia(Lista aLista){
    int logico = TRUE;
    if(aLista != NULL){
        if(aLista->head != NULL){
            logico = FALSE;
        }
    }
    return logico;
}

int lista_adiciona(Lista* aLista, Info dado){
    int deuCerto = FALSE;
    Node caminhante;
    Node novo;

    /** Verifica se a lista existe */
    if(*aLista != NULL){
        novo = node_criar();
        node_alteraInfo(&novo, dado);
        node_alteraNext(&novo, NULL);
        node_alteraPrev(&novo, NULL);

        if(lista_estaVazia(*aLista)){
            /**
             * O head da lista apontará para o novo e o próximo
             * de novo aponta para o próprio novo.
             */
            (*aLista)->head = novo;
            node_alteraNext(&novo, novo);
            node_alteraPrev(&novo, novo);
            deuCerto = TRUE;
        }else{
            /**
             * A lista não está vazia. Percorrer a lista em busca do último
             * node da lista que é o node com o next apontando para o head da
             * listas.
             * Nesse caso deve-se: fazer o último apontar para o novo e o novo
             * apontar para head da lista.
             */
            caminhante = (*aLista)->head;
            while(node_obtemNext(caminhante) != (*aLista)->head){
                    caminhante = node_obtemNext(caminhante);
            }
            node_alteraNext(&novo, node_obtemNext(caminhante));
            node_alteraPrev(&novo, caminhante);
            node_alteraNext(&caminhante, novo);

            deuCerto = TRUE;
        }
    }

    return deuCerto;
}

int lista_adicionaInicio(Lista* aLista, Info dado){
    int deuCerto = FALSE;
    Node novo, caminhante;

    if(*aLista != NULL){
        novo = node_criar();
        node_alteraInfo(&novo, dado);
        node_alteraNext(&novo, NULL);
        node_alteraPrev(&novo, NULL);

        if(lista_estaVazia(*aLista)){
            /** Lista está vazia. */
            node_alteraNext(&novo, novo);
            node_alteraPrev(&novo, novo);
            (*aLista)->head = novo;
            deuCerto = TRUE;
        }else{
            /** lista não está vazia. */
            caminhante = (*aLista)->head;
            while(node_obtemNext(caminhante) != (*aLista)->head){
                caminhante = node_obtemNext(caminhante);
            }
            node_alteraNext(&caminhante, novo);
            node_alteraPrev(&novo, caminhante);
            node_alteraNext(&novo, (*aLista)->head);
            node_alteraPrev(&(*aLista)->head, novo);
            (*aLista)->head = novo;
            deuCerto = TRUE;
        }
    }

    return deuCerto;
}

Info lista_obtemInfo(Lista aLista, int posicao){
    Info dado;
    int contaPasso=0;
    Node caminhante;

    if(!lista_estaVazia(aLista) && posicao >= 0){
        /**
         * Só posso percorrer a lista se ela existe e
         * se a posição desejada for válida.
         */
        contaPasso=0;
        caminhante = aLista->head;
        while(node_obtemNext(caminhante) != aLista->head && contaPasso < posicao){
            contaPasso++;
            caminhante = node_obtemNext(caminhante);
        }
        if(posicao == contaPasso){
            /** Existe a posição desejada */
            dado = node_obtemInfo(caminhante);
        }
    }

    return dado;
}

int lista_existe(Lista aLista, Info chave){
    int existe = FALSE;
    Node caminhante;

    if(!lista_estaVazia(aLista)){
        caminhante = aLista->head;
        while(node_obtemNext(caminhante) != aLista->head && !existe){
            if(node_obtemInfo(caminhante) == chave){
                existe = TRUE;
            }
            caminhante = node_obtemNext(caminhante);
        }
    }

    return existe;
}

int lista_destroi(Lista* aLista){
    int deuCerto = FALSE;
    Node finado;

    while(!lista_estaVazia(*aLista)){
        finado = (*aLista)->head;
        if(node_obtemNext(finado) == (*aLista)->head){
            /** apenas um elemento */
            node_apagar(finado);
            free(*aLista);
            *aLista = NULL;
            deuCerto = TRUE;
        }else{
            /** vários elementos */
            finado = node_obtemNext(finado);
            node_alteraNext(&(*aLista)->head, node_obtemNext(finado));
            node_apagar(finado);
        }
    }

    return deuCerto;
}
