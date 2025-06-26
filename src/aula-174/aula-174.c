#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *  Como criar uma função que retorna uma struct? | Aula 173
 * 
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

    void imprimirPessoa(Pessoa p){
        printf("\tNome: %s\n", p.nome);
        printf("\tIdade: %d\n", p.idade);
        printf("\tIdade: %c\n", p.sexo);
        printf("\tData de Nascimento: %d/%d/%d \n",
               p.data.dia, 
               p.data.mes, 
               p.data.ano);

    }

    /*Função */
    Pessoa lerPessoa(){
    Pessoa p1;
    printf("Digite seu nome: \n");
    fgets(p1.nome, 100,stdin);

    printf("Digite sua idade: \n");
    scanf("%d", &p1.idade);

    printf("Digite se sexo, sendo F ou M: \n");
    scanf("%s", &p1.sexo);
    printf("Digite sua data de Nascimeto | Formato dd mm aa: \n");
    scanf("%d%d%d", &p1.data.dia, &p1.data.mes, &p1.data.ano);

    return p1;
    }

    
int main(int argc, char const *argv[]){
    Pessoa pessoa;
    pessoa = lerPessoa();
    
    imprimirPessoa(pessoa);

    int vet[10];
    char p[11];
    Pessoa pp;

    return 0;
}
