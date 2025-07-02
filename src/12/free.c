#include <stdio.h>
#include <stdlib.h>
/**
 * A função free serve para liberar memória que foi previamente alocada
 * Já estão em <stdlib.h>
 * free(ptr); - ptr é o ponteiro para a memória alocada.
 * Após o free, aquele ponteiro ainda existe, mas não aponta para nada válido.
 *
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
    free(vetor);
    printf("Liberado a memoria do vetor: %d \n", *vetor);



    return 0;
}
