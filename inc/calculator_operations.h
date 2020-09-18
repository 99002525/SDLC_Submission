/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <math.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int add(int operand1, int operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int subtract(int operand1, int operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
int multiply(int operand1, int operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int divide(int operand1, int operand2);

/**
* gives the square of the number
* @param[in] operand1 
* @return integer value of the square operand1 
*/
int divide(int operand1, int operand2);

/**
* raises the power of operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 ^ operand2
*/
int power(int operand1, int operand2);

/**
* Calculates the factorial of integer number
* @param[in] num to check whether a prime number or not
* @return 1 for prime and 0 for non prime
* @note Returns -1 for negative values
*/
int prime(int operand1);

/**
* Gives the greater of operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of greater operand of operand1 and operand2
*/
int greater(int operand1, int operand2);

/**
* Gives the smaller of operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of smaller operand of operand1 and operand2
*/
int smaller(int operand1, int operand2);
#endif  /* #define __CALCULATOR_OPERATIONS_H__ */

/**
* Calculates the factorial of integer number
* @param[in] num to check whether a prime number or not
* @return 1 for prime and 0 for non prime
* @note Returns -1 for negative values
*/
int prime(int operand1);



