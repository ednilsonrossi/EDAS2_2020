#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void moda(int dados[]){

    //Implemente a funçao aqui.
    int contador[10];
    int index_maior;

    for(int i=0; i<10; i++){
        contador[i] = 0;
    }

    for(int i=0; i<MAX; i++){
        contador[dados[i]]++;
    }

    index_maior = 0;
    for(int i=1; i<10; i++){
        if(contador[i] > contador[index_maior]){
            index_maior = i;
        }
    }

    printf("A moda eh %d, que ocorreu %d vezes.\n\n", index_maior, contador[index_maior]);
}

int main()
{
    int resposta[MAX] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
                         7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
                         6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
                         7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
                         6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
                         7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
                         5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
                         7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
                         7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
                         4, 5, 6, 1, 6, 5, 7, 8, 7, 7};

    moda(resposta);

    return 0;
}
