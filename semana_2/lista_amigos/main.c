#include <stdio.h>
#include <stdlib.h>

#include "implementacao.h"


int main()
{
    Data natal = {25, 12, 2020};
    Data independencia = {7, 9, 1822};
    Data independence_day = {4, 7, 1776};

    printf("Natal: ");
    print_data_br(natal);
    printf("\n\n");

    printf("Independencia: ");
    print_data_br(independencia);
    printf("\n\n");

    printf("Independencia USA: ");
    print_data_us(independence_day);
    printf("\n\n");

    return 0;
}
