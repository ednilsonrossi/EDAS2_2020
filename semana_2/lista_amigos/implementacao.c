#include "implementacao.h"

void print_data_br(Data hoje){

    printf("%d/%d/%d", hoje.dia, hoje.mes, hoje.ano);

}

void print_data_us(Data hoje){

    printf("%d-%d-%d", hoje.ano, hoje.mes, hoje.dia);

}
