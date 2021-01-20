#include "carro.h"


struct carro{
    int movimento;
    char placa[7];
};

void carro_criar(Carro* car, char placa[7]){

    *car = malloc( sizeof(struct carro) );

    if(*car != NULL){
        (*car)->movimento = 0;
        strcpy((*car)->placa, placa);
    }
}

char* carro_toString(Carro car){
    char* texto;
    texto = (char*) malloc(256 * sizeof(char));
    sprintf(texto, "Carro: %s | Movimentos: %d", car->placa, car->movimento);
    return texto;
}

void carro_movimentar(Carro* car){
    if(*car != NULL){
        (*car)->movimento += 1;
    }
}

void carro_destruir(Carro *car){
    free(*car);
    *car = NULL;
}

int carro_comparaPlaca(Carro car, char placa[7]){
    int iguais = FALSE;
    if(car != NULL){
        if(strcmp(car->placa, placa) == 0){
            iguais = TRUE;
        }
    }
    return iguais;
}
