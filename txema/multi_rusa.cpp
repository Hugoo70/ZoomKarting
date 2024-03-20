#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"


int
funcion_rusa (int opA, int opB){
    int resultado=0;
    int s1, s2;

    opA = abs(opA);
    opB = abs(opB);

    while (opB>0){
        if (opB%2)
            resultado+=opA;
          opA*=2;
          opB/=2;
        }
        return resultado;
    }

int
signo(int op){
   /* int signo=0;
    if (op>0)
        signo=1;
    else if(op<0)
        signo=-1;
    else
        signo=0;*/
    return signo;
}



TEST_SUITE("Función multi rusa"){

    TEST_CASE("multiplicacion"){
        CHECK_EQ(6,funcion_rusa(2,3));
        CHECK_EQ(-6,funcion_rusa(-2,3));
    }
}


TEST_SUITE("Función signo"){

    TEST_CASE("op>0"){
       CHECK_EQ(1,signo(3));
       CHECK_EQ(0,signo(0));
}
}
