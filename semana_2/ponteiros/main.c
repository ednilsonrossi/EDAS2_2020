#include <stdio.h>
#include <stdlib.h>

void funcao(int* ptr){
    printf("valor de ptr: %p\n", ptr);
    *ptr = 0;
}

int main()
{
    int x;

    x = 5;

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);

    funcao(&x);

    printf("%d", x);



    return 0;
}
