#include "funcao.h"

void sou_o_maximo(int n, int A[BOUNDS][BOUNDS], int *k, int *Lin, int *Col){

    *Lin = 0;
    *Col = 0;
    *k = A[0][0];

    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            if(A[i][j] > *k){
                *Lin = i;
                *Col = j;
                *k = A[i][j];
            }
        }
    }

}
