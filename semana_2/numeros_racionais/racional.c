#include "racional.h"





struct racional{
    int numerador;
    int denominador;
};


Racional criarRacional(int numerador, int denominador){
    Racional numero; //numero eh um ponteiro para uma estrutura racional.

    numero = malloc(sizeof(struct racional));

    if(numero != NULL){
        numero->numerador = numerador;
        numero->denominador = denominador;

        if(!ehValidoRacional(numero)){
            numero->numerador = 0;
            numero->denominador = 1;
        }
    }

    return numero;
}

Boolean ehValidoRacional(Racional numero){
    return numero->denominador == 0?FALSE:TRUE;
}

Racional scanRacional(){
    int n, d;
    scanf("%d", &n);
    scanf("%d", &d);

    Racional numero;
    numero = criarRacional(n, d);

    return numero;
}

void printRacional(Racional numero){
    printf("%d/%d", numero->numerador, numero->denominador);
}


Racional somaRacional(Racional n1, Racional n2){
    Racional soma;

    soma = criarRacional(0, 1);

    soma->numerador = n1->numerador * n2->denominador + n2->numerador * n1->denominador;
    soma->denominador = (n1->denominador) * (n2->denominador);

    simplificaRacional(&soma);

    return soma;
}

Racional multiplicaRacional(Racional n1, Racional n2){
    Racional produto;

    produto = criarRacional(0, 1);

    produto->numerador = n1->numerador * n2->numerador;
    produto->denominador = n1->denominador * n2->denominador;

    simplificaRacional(&produto);

    return produto;
}


void simplificaRacional(Racional* numero){
    int vMdc;
    vMdc = mdc( (*numero)->numerador, (*numero)->denominador);
    (*numero)->numerador = (*numero)->numerador / vMdc;
    (*numero)->denominador = (*numero)->denominador / vMdc;
}

int mdc(int valor1, int valor2){
    int resto;
    do{
        resto = valor1 % valor2;
        valor1 = valor2;
        valor2 = resto;
    }while(resto != 0);
    return valor1;
}
