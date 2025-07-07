#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor, tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int *) malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro de alocação.\n");
        return 1;
    }

    for (int i = 0; i < tamanho; i++) {
        printf("Digite valor para vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Valores armazenados:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);
    return 0;
}
