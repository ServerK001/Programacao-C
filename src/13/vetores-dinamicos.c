#include<stdio.h>
#include<stdlib.h>
    /**
     *      O que são vetores dinâmicos?
     *      Um vetor dinâmico é um array cujo tamanho pode ser 
     *      definido em tempo de execução, diferente de vetores estáticos 
     *      com tamanho fixo.
     */

int main(int argc, char const *argv[])
{
    int v[10]; //Vetor fixo

    // tamanho decidido em tempo de execução
    int *vv = malloc(sizeof(int));

    /**
     * Quando usar?
        Quando você não sabe o tamanho necessário previamente
        Quando precisa de crescimento dinâmico (como em uma lista ou fila)
        Para economizar memória, alocando somente o necessário
     */



    free(vv);
    return 0;
}
