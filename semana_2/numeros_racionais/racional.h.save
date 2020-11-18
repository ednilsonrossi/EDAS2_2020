#ifndef RACIONAL_H_INCLUDED
#define RACIONAL_H_INCLUDED


#include <stdlib.h>
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int Boolean;

typedef struct racional *Racional;


/*
 * Instanciar um racional da memória
 */
Racional criarRacional(int, int);

/*
 * Funcionalidade recebe um número racional e
 * simplifica esse número, por exemplo, recebe-se o
 * valor 2/4 que é simplificado para 1/2.
 */
void simplificaRacional(Racional*);

/*
 * Funcionalidade que recebe dois números racionais e
 * retorna a soma destes números.
 */
Racional somaRacional(Racional, Racional);

/*
 * Funcionalidade que recebe dois números racionais e retorna o produto
 * destes números.
 */
Racional multiplicaRacional(Racional, Racional);

/*
 * Funcionalidade que verifica se o número recebido é ou não válido.
 */
Boolean ehValidoRacional(Racional);


/*
 * Escrever na tela o valor racional recebido como argumento.
 * No formato num/den, por exemplo 1/2.
 */
void printRacional(Racional);

/*
 * Funcionalidade que obtem do usuário os valores para um número
 * racional. O racional lido, se válido, é retornado ao programa.
 * Caso o racional não seja válido é retornado o valor zero (0/1).
 */
Racional scanRacional();

int mdc(int, int);

#endif // RACIONAL_H_INCLUDED
