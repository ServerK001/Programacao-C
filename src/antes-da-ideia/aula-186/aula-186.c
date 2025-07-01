#include<stdio.h>
#include<stdlib.h>

//Por que não usamos & ao ler uma string com a função scanf? | Aula 186
int main(int argc, char const *argv[]){

    char palavra[100];

    scanf("%100[^\n]", palavra);
    printf("Oque foi digitado: %s\n", palavra);

    printf("Endereco da palavra: %p\n", palavra);
    printf("Endereco da palavra: %p\n", &palavra);
    printf("Endereco da palavra: %p\n", &palavra[0]);


    return 0;
}
