/**



Considerando que a informação armazenada em uma pilha são números inteiros, implemente uma
função no módulo principal que insere elementos na pilha. A função não deve permitir a
inclusão de números repetidos (retorna FALSE) e deve manter os números em ordem crescente
(menor número na base e maior no topo). Caso seja inserido um número com sucesso a função
retorna TRUE. Não é permitido o uso de vetores, apenas pilhas.

Entregar diretório do projeto compactado.
*/

#include <stdio.h>
#include <stdlib.h>
#include "pilha_estatica.h"


int empilhar(Pilha*, int);

int main()
{
    int novo;
    Pilha minha_pilha;

    init(&minha_pilha);

    novo = 5;
    printf("%d - %s\n", novo, empilhar(&minha_pilha, novo)?"empilhou":"nao empilhou");
    novo = 10;
    printf("%d - %s\n", novo, empilhar(&minha_pilha, novo)?"empilhou":"nao empilhou");
    novo = 15;
    printf("%d - %s\n", novo, empilhar(&minha_pilha, novo)?"empilhou":"nao empilhou");
    novo = 2;
    printf("%d - %s\n", novo, empilhar(&minha_pilha, novo)?"empilhou":"nao empilhou");
    novo = 5;
    printf("%d - %s\n", novo, empilhar(&minha_pilha, novo)?"empilhou":"nao empilhou");
    novo = 12;
    printf("%d - %s\n", novo, empilhar(&minha_pilha, novo)?"empilhou":"nao empilhou");

    printf("Esvaziando: \n");
    while(!isEmpty(minha_pilha)){
        pop(&minha_pilha, &novo);
        printf("%d\n", novo);
    }

    return 0;
}

int empilhar(Pilha* pilha, int dado){
    int empilhou = FALSE;
    int repetido = FALSE;
    int res;
    int elemento;
    Pilha auxiliar;
    init(&auxiliar);

    if(isEmpty(*pilha)){
        //Pilha vazia, o primeiro elemento ser inserido.
        res = push(pilha, dado);
        empilhou = TRUE;
    }else{
        //Buscar por elementos repetidos ou maiores que o dado.
        while(!empilhou && !repetido && !isEmpty(*pilha)){
            pop(pilha, &elemento);
            if(elemento < dado){
                //o novo dado eh maior que os demais elementos da pilha
                //assim, ser inserido como ultimo elemento
                res = push(pilha, elemento);
                res = push(pilha, dado);
                empilhou = TRUE;
            }else{
                //o novo dado nao eh maior, significa que o elemento
                //do topo sera inserido na pilha auxiliar
                res = push(&auxiliar, elemento);
                if(elemento == dado){
                    //Elemento repetido nao pode ser inserido
                    repetido = TRUE;
                }
            }
        }

        if(isEmpty(*pilha) && !empilhou){
            //Se a pilha foi esvaziada e ainda nao houve o empilhamento
            //indica que o novo dado eh menor que os elementos da pilha
            res = push(pilha, dado);
            empilhou = TRUE;
        }
        while(!isEmpty(auxiliar)){
            //Devolve todos os elementos que foram colocados em auxiliar
            //para a pilha original.
            res = pop(&auxiliar, &elemento);
            res = push(pilha, elemento);
        }
    }

    return empilhou;
}
