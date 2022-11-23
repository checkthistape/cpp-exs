#pragma once
#include <Windows.h>
#include <iostream>

class Calculator
{
public:
    double Calculate(double x, char oper, double y);
    
};

double Calculator::Calculate(double x, char oper, double y)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        return 0.0;
    }
}
