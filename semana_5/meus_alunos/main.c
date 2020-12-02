#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"
#include "lista_aluno.h"


int main()
{
    printf("Hello world!\n");


    Aluno edson, mariana;

    edson = criar_aluno(300281, "Edson Nascimento", "edson@aluno.ifsp.edu.br");
    mariana = criar_aluno(123, "Mariana", "mariana@aluno.ifsp.edu.br");

    printf("Dados dos alunos: \n");
    printf("%s \n", imprimir_aluno(edson));
    printf("%s \n", imprimir_aluno(mariana));


    Lista dados;
    dados = iniciar_lista(5);
    insere_lista(dados, edson);
    insere_lista(dados, mariana);

    printf("Lista de alunos\n\n");
    for(int i=0; i<5; i++){
        printf("%s \n", imprimir_aluno(recupera_posicao(dados, i)));
    }



    return 0;
}
