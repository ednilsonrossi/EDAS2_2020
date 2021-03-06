#include "aluno.h"

struct aluno{
    int prontuario;
    char nome[MAX_STR_LEN];
    char email[MAX_STR_LEN];
};

Aluno criar_aluno(int arg_prontuario, char arg_nome[], char arg_email[]){

    Aluno ptr;

    ptr = malloc( sizeof(struct aluno) );

    if( ptr != NULL ){
        ptr->prontuario = arg_prontuario;
        strcpy(ptr->nome, arg_nome);
        strcpy(ptr->email, arg_email);
    }

    return ptr;
}

char* imprimir_aluno(Aluno aluno){

    char* texto = malloc( (3* MAX_STR_LEN) * sizeof(char) );

    if( aluno != NULL){
        sprintf(texto, "%d", aluno->prontuario);
        strcat(texto, " | ");
        strcat(texto, aluno->nome);
        strcat(texto, " | ");
        strcat(texto, aluno->email);
    }else{
        sprintf(texto, "Aluno nulo!");
    }

    return texto;
}

void altera_aluno(Aluno arg_aluno, int arg_prontuario, char arg_nome[], char arg_email[]){

    if(arg_aluno != NULL){
        arg_aluno->prontuario = arg_prontuario;
        strcpy(arg_aluno->nome, arg_nome);
        strcpy(arg_aluno->email, arg_email);
    }

}















