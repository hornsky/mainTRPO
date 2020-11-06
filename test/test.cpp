#include <iostream>
#include <stdlib.h>
#include "../src/func.cpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("test_Addition")
{
    REQUIRE(Addition(3,3) == 6);
    REQUIRE(Addition(0,3) == 3);
    REQUIRE(Addition(-10,0) == -10);
    REQUIRE(Addition(9,0) == 9);
    REQUIRE(Addition(-3,-3) == -6);
    cout << "test_Addition : correct\n" << endl;
}

TEST_CASE("test_Subtraction")
{
    REQUIRE(Subtraction(3,3) == 0);
    REQUIRE(Subtraction(0,3) == -3);
    REQUIRE(Subtraction(-10,0) == -10);
    REQUIRE(Subtraction(9,0) == 9);
    REQUIRE(Subtraction(0,9) == -9);
    REQUIRE(Subtraction(-3,-3) == 0);
    cout << "test_Subtraction : correct\n" << endl;
}

TEST_CASE("test_Multiplication")
{
    REQUIRE(Multiplication(3,3) == 9);
    REQUIRE(Multiplication(0,3) == 0);
    REQUIRE(Multiplication(22,22) == 484);
    REQUIRE(Multiplication(9,0) == 0);
    REQUIRE(Multiplication(-3,-3) == 9);
    REQUIRE(Multiplication(-7,3) == -21);
    cout << "test_Multiplication : correct\n" << endl;
}

TEST_CASE("test_Division")
{
    REQUIRE(Division(3,3) == 1);
    REQUIRE(Division(0,3) == 0);
    REQUIRE(Division(22,22) == 1);
    REQUIRE(Division(-8,4) == -2);
    REQUIRE(Division(-8,0) == 0); // + text error
    cout << "test_Division : correct\n" << endl;
}

TEST_CASE("test_Factorial")
{
    REQUIRE(Factorial(55) == 1); //0
    cout << "test_Factorial : Number isn't unsigned or Your factorial will be greater than 4.294.967.295. Try using a lower number." << endl;
    REQUIRE(Factorial(-5) == 1); //0
    cout << "test_Factorial : Number isn't unsigned or Your factorial will be greater than 4.294.967.295. Try using a lower number." << endl;
    REQUIRE(Factorial(0) == 1);
    REQUIRE(Factorial(12) == 479001600);
    REQUIRE(Factorial(3) == 6);
    REQUIRE(Factorial(1) == 1);
    cout << "test_Factorial : correct" << endl;
}
