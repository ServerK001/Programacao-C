#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * Como criar novos tipos de dados em C com TYPEDEF STRUCT? | Aula 167
 */

    typedef struct {
        int idade;
        char sexo;
        char nome[100];

    }Pessoa;

    /*Outra forma*/
    struct Pessoa2{
        int idade;
        char sexo;
        char nome[100];
    };

int main(int argc, char const *argv[]){

    Pessoa p1;
    struct Pessoa2 p2;
    
    p1.idade = 23;
    p1.sexo = 'm';
    strcpy(p1.nome,"Mikael Keller");

    p2.idade = 35;
    p2.sexo = 'f';
    strcpy(p2.nome,"Maria");

    printf("===== Pessoa 1 =====  \n");
    printf("| Nome: %s  \n", p1.nome);
    printf("| Idade: %d  \n", p1.idade);
    printf("| Sexo: %c  \n", p1.sexo);
    printf("===== ******** =====  \n");

    

    return 0;
}
