#include<stdio.h>
#include<stdlib.h>

//O que é e como criar um ponteiro na linguagem C? | Aula 184
int main(int argc, char const *argv[]){
    
    int a = 10;
    int *p = &a;

    printf("============================== \n");
    printf("Valor de a: %d\n", a);     // 10
    printf("Endereco de a: %p\n", &a); // algo como 0x7ffe...
    printf("============================== \n");

    printf("============================== \n");
    printf("Valor de p (endereco): %p\n", p); //algo como 0x7ffe...
    printf("Valor apontado por p: %d\n", *p); // 10
    printf("Endereco de p: %d\n", &p); // algo como 0x7ffe...
    printf("============================== \n");

    
    return 0;
}
