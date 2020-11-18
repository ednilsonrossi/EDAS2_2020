#include <stdio.h>
#include <stdlib.h>
#include "implementacao.h"

int main()
{
    int n = 2;
    Operacao operacoes[n];
    Operacao maior;
    int index_operacao;

    for(index_operacao=0; index_operacao < n; index_operacao+=1){
        operacoes[index_operacao] = ler_operacao();
    }

    maior = maior_operacao(operacoes, n);
    printf("Maior valor pago:\n");
    printf("Estabelecimento: %s\n", maior.estabelecimento);
    printf("Valor..........: R$ %.2f\n", maior.valor);
    printf("Data...........: %d/%d/%d\n\n", maior.data.dia, maior.data.mes, maior.data.ano);



    return 0;
}
