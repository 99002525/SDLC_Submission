#include <calculator_operations.h>
#include <math.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

int square(int operand1)
{
    return operand1*operand1;
}

int power(int operand1, int operand2)
{
    if(operand2==0)
        return 1;
    else if(operand2==1)
        return operand1;
    else
        return pow(operand1, operand2);
}
