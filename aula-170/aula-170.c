#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * De quanta memória uma STRUCT precisa? | Aula 170
 * usanso sizeof()
 */
    typedef struct {
        int dia,mes,ano;
    }Nascimento;
    typedef struct {
        Nascimento data;
        int idade;
        char sexo;
        char nome[100];

    }Pessoa;

int main(int argc, char const *argv[]){

        
    Pessoa p1;

    printf("Tamanho da variavel: %d \n",sizeof(p1.data));
    printf("Tamanho da variavel: %d \n",sizeof(p1));
    

    printf("Digite seu nome: \n");
    fgets(p1.nome, 100,stdin);

    printf("Digite sua idade: \n");
    scanf("%d", &p1.idade);

    printf("Digite se sexo, sendo F ou M: \n");
    scanf("%s", &p1.sexo);

    printf("===== Pessoa 1 =====  \n");
    printf("| Nome: %s  \n", p1.nome);
    printf("| Idade: %d  \n", p1.idade);
    printf("| Sexo: %c  \n", p1.sexo);
    printf("===== ******** =====  \n");

    

    return 0;
}
