/*
 * File:   main.c
 * Author: Ednilson Rossi
 *
 * Created on 22 de Agosto de 2015, 12:00
 */

#include <stdio.h>
#include <stdlib.h>
#include "pilha_estatica.h"

/*
 *
 */
int main(int argc, char** argv) {
    Pilha minhaPilha;
    int menu, valor;


    init(&minhaPilha);


    do{
        printf("\n1 - Empilha");
        printf("\n2 - Desempilha");
        printf("\n3 - Esvaziar");
        printf("\n4 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &menu);

        switch(menu){
            case 1:
                printf("\nEmpilha\n\n\tValor: ");
                scanf("%d", &valor);
                if(push(&minhaPilha, valor)){
                    printf("\nEmpilhado com sucesso\n");
                }else{
                    printf("\nEstouro de pilha\n");
                }
                break;
            case 2:
                if(pop(&minhaPilha, &valor)){
                    printf("\nDesempilha\n\n\tValor: %d", valor);
                }else{
                    printf("\nPilha vazia\n");
                }
                break;
            case 3:
                while(!isEmpty(minhaPilha)){
                    pop(&minhaPilha, &valor);
                    printf("\nValor: %d", valor);
                }
                break;
            case 4:
                break;
            default:
                printf("Opcao invalida");

        }
    }while(menu != 4);
    return (EXIT_SUCCESS);
}

