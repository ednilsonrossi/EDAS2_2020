#include <stdio.h>
#include <stdlib.h>
#include "lse.h"
#include "aluno.h"

int main(){

    Lista alunos_lista;
    struct no* rec;
    Aluno estudante;

    lista_iniciar(&alunos_lista);

    estudante = criar_aluno(123, "Ednilson", "ednilson@ifsp");
    lista_insereFinal(&alunos_lista, estudante);

    estudante = criar_aluno(456, "Edson", "edson@ifsp");
    lista_insereFinal(&alunos_lista, estudante);

    estudante = criar_aluno(789, "Matheus", "matheus@ifsp");
    lista_insereFinal(&alunos_lista, estudante);

    for(int i=0; i<3; i++){
        estudante = extraiInfo(lista_recuperaPosicao(alunos_lista, i));
        if(estudante != NULL){
            printf("%s \n", imprimir_aluno(estudante));
        }
    }

    return 0;
}

/*
int main()
{
    Lista minha_lista;
    Lista meu_no;

    lista_iniciar(&minha_lista);

    printf("%s\n", lista_insere(&minha_lista, 10) ? "Inserido" : "Erro");
    printf("%s\n", lista_insere(&minha_lista, 15) ? "Inserido" : "Erro");
    printf("%s\n", lista_insere(&minha_lista, 20) ? "Inserido" : "Erro");
    printf("%s\n", lista_insere(&minha_lista, 25) ? "Inserido" : "Erro");

    printf("%s\n", lista_insereFinal(&minha_lista, 100) ? "Inserido" : "Erro");
    printf("%s\n", lista_insereFinal(&minha_lista, 115) ? "Inserido" : "Erro");
    printf("%s\n", lista_insereFinal(&minha_lista, 120) ? "Inserido" : "Erro");
    printf("%s\n", lista_insereFinal(&minha_lista, 125) ? "Inserido" : "Erro");

    for(int i=0; i<10; i++){
        meu_no = lista_recuperaPosicao(minha_lista, i);
        if(meu_no != NULL)
            printf("Info: %d\n", extraiInfo(meu_no));
        else
            printf("Vazio\n");
    }

    while(!lista_estaVazia(minha_lista)){
        meu_no = lista_recuperaPosicao(minha_lista, 0);
        if(meu_no != NULL)
            printf("Info do finado: %d\n", extraiInfo(meu_no));
        else
            printf("Vazio\n");
        lista_apagaPosicao(&minha_lista, 0);
    }

    for(int i=0; i<10; i++){
        meu_no = lista_recuperaPosicao(minha_lista, i);
        if(meu_no != NULL)
            printf("Info: %d\n", extraiInfo(meu_no));
        else
            printf("Vazio\n");
    }

    return 0;
}
*/
