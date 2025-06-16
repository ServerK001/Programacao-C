#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * Como passar uma struct como parâmetro para um procedimento? | Aula 172
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
    printf("Digite sua data de Nascimeto | Formato dd mm aa: \n");
    scanf("%d%d%d", &p1.data.dia, &p1.data.mes, &p1.data.ano);



    imprimirPessoa(p1);

    

    return 0;
}
