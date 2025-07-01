#include<stdio.h>
#include<stdlib.h>

//Qual o tamanho de um ponteiro na linguagem C? Aula 185
int main(int argc, char const *argv[]){

    int *p;
    char *p2;
    float *p3;


    printf("============================== \n");
    printf("Tamanho da Variavel: %d \n",sizeof(int) );  //Int tem 4 bytes
    printf("Tamanho da Variavel: %d \n",sizeof(p) );  //Ponteiros tem entre 4 e 8 bytes
    printf("Tamanho da Variavel: %d \n",sizeof(p2) );  //Ponteiros tem entre 4 e 8 bytes
    printf("Tamanho da Variavel: %d \n",sizeof(p3) );  //Ponteiros tem entre 4 e 8 bytes
    printf("============================== \n");
    // Ele aponta para um endereço de memória, o endereço sempre tem o mesmo tamanho.

    /* code */
    return 0;
}
