// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/**
* A calculator application that performs addition, multiplication, subtraction, and
* division.Input is given by typing a number and hitting enter on the console.
* After performing an operation, the user is given an option to quit. By entering 1,
* the program will exit. Otherwise it will prompt the user for another operation.
*/
#include "Calculator.h"
#include <iostream>
using std::cin;
using std::cout;
int main()
{
  double firstNumber = 0;
  double secondNumber = 0;
  double result = 0;
  int operation = -1;
  bool correctOperation = false;
  bool done = false;
  Calculator* calc = new Calculator();
  printf("Welcome to my calculator program!\n");
  printf("Please type the first number. \n");
  scanf_s("%lf", &firstNumber);
  printf("Please type the second number. \n");
  scanf_s("%lf", &secondNumber);
  while (done == false)
  {
    while (correctOperation == false)
    {
      printf("Options: \n 1 : Add \n 2: Subtract \n 3: Multiply \n 4: Divide \n ");
      scanf_s("%i", &operation);
      if (operation < 1 || operation > 4)
      {
        printf("Choice not recognized. Please try again. \n");
        printf("Options: \n 1 : Add \n 2: Subtract \n 3: Multiply \n 4: Divide \n >");
        scanf_s("%i", &operation);
      }
      else
      {
        correctOperation = true;
      }
    }

    if (operation == 1)
    {
      result = calc->Add(firstNumber, secondNumber);
      printf("Result is %lf \n", result);
    }
    else if (operation == 2)
    {
      result = calc->Subtract(firstNumber, secondNumber);
      printf("Result is %lf \n", result);
    }
    else if (operation == 3)
    {
      result = calc->Multiply(firstNumber, secondNumber);
      printf("Result is %lf \n", result);
    }
    else if (operation == 4)
    {
      result = calc->Divide(firstNumber, secondNumber);
      printf("Result is %lf \n", result);
    }

    int doneYet = 0;
    printf("Type 1 and hit enter to quit. Otherwise type any other number to continue.\n");
    scanf_s("%d", &doneYet);
    if (doneYet == 1)
    {
      printf("Shutting down. \n");
      done = true;
    }
    correctOperation = false;
  }

  return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
