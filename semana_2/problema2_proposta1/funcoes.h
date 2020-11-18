#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

#define STR_LEN 255


//Essa estrtutura est definida aqui temporariamente.
struct operacao{
    char estabelecimento[STR_LEN];
    float valor;
};


typedef struct operacao Operacao;

Operacao ler_operacao();

Operacao maior_operacao(Operacao[], int );

float soma_operacoes(Operacao[], int );


#endif // FUNCOES_H_INCLUDED
