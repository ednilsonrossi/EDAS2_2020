#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lidos[90];
    int i, nro;

    for(i=0; i<90; lidos[i++]=0);

    for(i=0; i<40; i++){
        do{
            printf("Digite %dº numero: ", i+1);
            scanf("%d", &nro);
        }while(nro < 10 || nro > 100);
        if(lidos[nro-10] == 0){
            lidos[nro-10] = 1;
            printf("---> %d\n", nro);
        }
    }

    return 0;
}
