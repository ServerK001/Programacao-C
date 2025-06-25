#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * Como preencher uma STRUCT com dados lidos do teclado? | Aula 168
 */

    typedef struct {
        int idade;
        char sexo[2];
        char nome[100];

    }Pessoa;

int main(int argc, char const *argv[]){

    Pessoa p1;
    printf("Digite seu nome: \n");
    fgets(p1.nome, 100,stdin);

    printf("Digite sua idade: \n");
    scanf("%d", &p1.idade);

    printf("Digite se sexo, sendo F ou M: \n");
    scanf("%c",&p1.sexo);

    printf("===== Pessoa 1 =====  \n");
    printf("| Nome: %s  \n", p1.nome);
    printf("| Idade: %d  \n", p1.idade);
    printf("| Sexo: %c  \n", p1.sexo);
    printf("===== ******** =====  \n");

    

    return 0;
}
