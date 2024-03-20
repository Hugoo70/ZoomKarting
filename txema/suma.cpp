#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"


int
suma (int op1, int op2){
    return op1+op2;
};

int
multi (int op1, int op2){
    return op1*op2;
}; 

TEST_SUITE("Función suma"){

    TEST_CASE("Naturales"){
        CHECK_EQ(4,suma(2,2));
        CHECK_EQ(12,suma(5,7));
        CHECK_EQ(-12,suma(-5,-7));
    }
    TEST_CASE("ENTEROS"){
        CHECK_EQ(48, multi (6,8));
    }
}
