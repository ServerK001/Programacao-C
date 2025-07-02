#include <stdio.h>
#include <stdlib.h>
/**
 * Alocação dinâmica de memória com a função calloc, Não Aloca Lixo
 * Já estão em <stdlib.h>
 * Retorna um ponteiro para a região de memória alocada ou NULL.
 * recebe a quantidade de bytes e  a quantidade de elementos
 */
int main(int argc, char const *argv[])
{
    int *vetor;
    vetor = calloc( 1,sizeof(int) );

    if (vetor)
    {
        printf("Ponteiro alocou o seguinte endereco: %d \n", vetor);
        printf("Tudo certo, ponteiro alocou o seguinte conteudo: %d - Possivelmente 0 \n", *vetor);
        // Alterando valor apontado
        *vetor = 50;
        printf("Valor alterado: %d\n ", *vetor);
    }
    else
    {
        printf("Erro\n");
    }




    return 0;
}
