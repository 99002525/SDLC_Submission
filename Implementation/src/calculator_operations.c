#include <calculator_operations.h>

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

int factorial(int number)
{
  /* Return -1 for negative numbers */
  if(number < 0)
    return -1;

  /* Return 1 for 0 */
  if(number == 0)
    return 1;

  /* Recursively calculate Factorial of the number */
  return number * factorial(number-1);
}

int prime(int num)
{
    /* return -1 if a negative number*/
    int i,count=0;
    if (num<0)
        return -1;

    for(i=1;i<=num;i++)
    {
        if((num%i)==0)
        {
            count++;
        }
    }
    /*return 1 for a prime number*/
    if(count==2)
        return 1;
    /*return 0 for a non prime number*/
    else
        return 0;
}

int greater(int num1, int num2)
{
    if(num1>num2)
      return num1;
    else 
      return num2;
}

int smaller(int num1, int num2)
{
    if(num1>num2)
      return num1;
    else 
      return num2;
}

