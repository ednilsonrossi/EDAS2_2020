#include <stdio.h>
#include <stdlib.h>

#include "carro.h"
#include "pilha.h"

int menu();

int main()
{
    Pilha estacionamento;
    Pilha temporario;
    Carro veiculo;
    Carro achado;
    int selecao, achou;
    char placa[7];

    pilha_init(&estacionamento, 5);
    pilha_init(&temporario, 5);

    selecao = 0;
    while(selecao != 3){
        selecao = menu();
        switch(selecao){
            case 1:
                printf("**ENTRADA**\n");
                printf("Digite placa: ");
                scanf("%s", &placa);
                carro_criar(&veiculo, placa);
                if(pilha_push(&estacionamento, veiculo)){
                    printf("Veiculo estacionado\n");
                }else{
                    printf("Estacionamento cheio\n");
                }
                break;
            case 2:
                printf("**SAIDA**\n");
                printf("Digite placa: ");
                scanf("%s", &placa);

                achou = FALSE;
                achado = NULL;
                while(!achou && !pilha_isEmpty(estacionamento)){
                    pilha_pop(&estacionamento, &veiculo);
                    if(carro_comparaPlaca(veiculo, placa)){
                        achado = veiculo;
                        achou = TRUE;
                    }else{
                        pilha_push(&temporario, veiculo);
                    }
                }
                while(!pilha_isEmpty(temporario)){
                    pilha_pop(&temporario, &veiculo);
                    carro_movimentar(&veiculo);
                    pilha_push(&estacionamento, veiculo);
                }

                if(achou){
                    printf("Saiu:\n%s\n", carro_toString(achado));
                    carro_destruir(&achado);
                }else{
                    printf("Veiculo %s nao localizado\n", placa);
                }
                break;
            case 3:
                printf("**FECHANDO ESTACIONAMENTO**\n");
                while(!pilha_isEmpty(estacionamento)){
                    pilha_pop(&estacionamento, &veiculo);
                    printf("Saindo: %s\n", carro_toString(veiculo));
                    carro_destruir(&veiculo);
                }
        }

    }
    return 0;
}

int menu(){
    int opcao=0;
    do{
        printf("\nMENU\n\t1 - Entrar\n\t2 - Sair\n\t3 - Fechar estacionamento\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
    }while(opcao < 1 || opcao > 3);
    return opcao;
}

