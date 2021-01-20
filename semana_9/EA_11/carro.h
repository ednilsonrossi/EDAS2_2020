#ifndef CARRO_H_INCLUDED
#define CARRO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#define TRUE 1
#define FALSE 0

typedef struct carro* Carro;

void carro_criar(Carro* car, char placa[7]);

char* carro_toString(Carro car);

void carro_movimentar(Carro* car);

void carro_destruir(Carro *car);

int carro_comparaPlaca(Carro car, char placa[7]);


#endif // CARRO_H_INCLUDED
