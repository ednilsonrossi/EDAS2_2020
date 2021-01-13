#include "node.h"

struct node{
    Info info;
    struct node * next;
    struct node * prev;
};


Node node_criar(){
    Node novo;
    novo = malloc(sizeof(struct node));
    return novo;
}

void node_apagar(Node node){
    free(node);
}

void node_alteraInfo(Node* node, Info info){
    if(*node != NULL){
        (*node)->info = info;
    }
}

void node_alteraNext(Node* node, Node next){
    if(*node != NULL){
        (*node)->next = next;
    }
}

void node_alteraPrev(Node* node, Node prev){
    if(*node != NULL){
        (*node)->prev = prev;
    }
}

Info node_obtemInfo(Node node){
    Info retorno;
    if(node != NULL){
        retorno = node->info;
    }
    return retorno;
}

Node node_obtemNext(Node node){
    Node retorno = NULL;
    if(node != NULL){
        retorno = node->next;
    }
    return retorno;
}

Node node_obtemPrev(Node node){
    Node retorno = NULL;
    if(node != NULL){
        retorno = node->prev;
    }
    return retorno;
}
