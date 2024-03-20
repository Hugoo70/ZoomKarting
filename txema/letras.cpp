#include <stdio.h>
#include <stdlib.h>

#define NUMLETRAS  ('a')

int main(int argc, char *argv[]) {

    char cebadario[];

    /* Calcular
    for (char i='z'; i>='a'; i--)
        cebadario['z' - i] = i;

    /* Imprimir
    for (char i='a'; i<='z'; i++)
        printf("%c ", cebadario[i - 'a']);
    printf("\n") ;*/
    printf("%c", cebadario['a']);

    return EXIT_SUCCESS;
}


