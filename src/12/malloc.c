#include <stdio.h>
#include <stdlib.h>
/**
 * Alocação dinâmica de memória com a função MALLOC
 * Já estão em <stdlib.h>
 * Retorna um ponteiro para a região de memória alocada ou NULL.
 */

int main(int argc, char const *argv[])
{
    int *vetor;
    vetor = malloc(sizeof(int));
    /**
     * Pode ser declarado dessa forma também:
     *  int *vetor = (int *) malloc(n * sizeof(int) );
     */

    if (vetor)
    {
        printf("Tudo certo, ponteiro alocou o seguinte endereco: %p - Lixo de memoria\n", vetor);
        // Alterando valor apontado
        *vetor = 50;
        printf("Valor alterado: %d\n ", *vetor);
    }
    else
    {
        printf("Erro\n");
    }

    /**
     * O malloc aloca um bloco contínuo de memória, ou seja,
     * vários endereços de memória sequenciais na heap.
     * Cada posição desse bloco pode ser acessada por meio de um ponteiro.
     */

    int *vetor2 = (int *)malloc(4 * sizeof(int)); // 16 bytes, divididos em 4 blocos de 4 bytes
    for (int i = 0; i <= 16; i++)
    {
        printf("Valor na memoria: vetor2[%d] \n", vetor2[i]);
    }
    return 0;

    /**
     * ✅ malloc em malwares:
        Garante flexibilidade e stealth
        Ajuda a montar código malicioso em tempo de execução
        É crucial para ações furtivas e evasivas
     */
}
