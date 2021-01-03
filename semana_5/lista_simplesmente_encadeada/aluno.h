#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED

#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 100

typedef struct aluno * Aluno;

Aluno criar_aluno(int arg_prontuario, char arg_nome[], char arg_email[]);

char* imprimir_aluno(Aluno aluno);

void altera_aluno(Aluno arg_aluno, int arg_prontuario, char arg_nome[], char arg_email[]);

#endif // ALUNO_H_INCLUDED
