#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

int main()
{
    int A[BOUNDS][BOUNDS] = {
                            {1, 29, 3, 400},
                            {52, 36, 79, 81},
                            {9, 101, 119, 12},
                            {13, 14, 15, 16}
                            };

    int n = 4;
    int maior, linha, coluna;

    printf("Elemento\tLinha\tColuna\n");
    for(int i=0; i < n; i++){
        for(int j=0; j<n; j++){
            sou_o_maximo(n, A, &maior, &linha, &coluna);
            printf("%7d\t%7d\t%7d\n", maior, linha, coluna);
            A[linha][coluna] = A[linha][coluna] * -1;
        }
    }

    return 0;
}
