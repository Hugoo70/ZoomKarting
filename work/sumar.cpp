#include <stdio.h>
#include <stdlib.h>

#define OP1 2
#define OP2 3

int main (int argc, char *argv[]){

    int resultado = OP1 + OP2;

    printf("N Argumentos = %i\n", argc);

    printf("%i + %i = %i\n", OP1, OP2,resultado);
}
