#include "Calculator.h"
#include <math.h>
/*
* Instantiates a new Calculator object.
*/
Calculator::Calculator()
{
}

/*
* Adds two numbers together and returns the sum.
* @param num1 : the first number
* @param num2 : the second number
*/
double Calculator::Add(double num1, double num2)
{
  return num1 + num2;
}

/*
* Subtracts the second number from the first number
* and returns the difference.
* @param num1 : the first number
* @param num2 : the second number
*/
double Calculator::Subtract(double num1, double num2)
{
  return num1 - num2;
}

/*
* Multiplies two numbers together and returns the product.
* @param num1 : the first number
* @param num2 : the second number
*/
double Calculator::Multiply(double num1, double num2)
{
  return num1 * num2;
}

/*
* Divides the first number by the second number
* and returns the quotient.
* If the first number it is divided by zero,
* it will try to approximate it.
* @param num1 : the first number
* @param num2 : the second number
*/
double Calculator::Divide(double num1, double num2)
{
  if (num2 == 0)
  {
    if (num1 > 0)
    {
      return INFINITY;
    }
    else
    {
      return -INFINITY;
    }
  }
  return num1 / num2;
}
