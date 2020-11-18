#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main()
{
    int n;
    printf("Informe a quantidade de operaçoes realizadas no cartao: ");
    scanf("%d", &n);

    Operacao operacoes[n];
    Operacao maior;
    int index_operacao;

    for(index_operacao=0; index_operacao < n; index_operacao+=1){
        operacoes[index_operacao] = ler_operacao();
    }

    maior = maior_operacao(operacoes, n);
    printf("Maior valor pago:\n");
    printf("Estabelecimento: %s\n", maior.estabelecimento);
    printf("Valor..........: R$ %.2f\n\n", maior.valor);

    printf("Valor total das operaçoes: R$ %.2f\n\n", soma_operacoes(operacoes, n) );
    printf("Media das operaçoes: R$ %.2f\n\n", soma_operacoes(operacoes, n)/n );
    return 0;
}
