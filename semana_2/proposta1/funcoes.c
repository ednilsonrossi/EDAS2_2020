#include "funcoes.h"

float media_aritmetica(float a, float b, float c, float d){
    return (a + b + c + d) / 4.0;
}

float media__aritmetica(float dados[ALUNOS]){
    float soma=0;
    for(int i=0; i<ALUNOS; i++){
        soma += dados[i];
    }
    return soma/ALUNOS;
}
