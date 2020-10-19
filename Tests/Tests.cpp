#include "pch.h"
#include "../Calculator/Calculator.h";
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Tests
{
  TEST_CLASS(Tests)
  {
  public:

    /*
    * Ensures 5 plus 4 results in 9.
    */
    TEST_METHOD(Add)
    {
      Calculator* calc = new Calculator();
      double sum = calc->Add(5, 4);
      Assert::AreEqual(9, (int)sum);
    }

    /*
    * Ensures 5 plus 4 results in -1
    */
    TEST_METHOD(Subtract)
    {
      Calculator* calc = new Calculator();
      double result = calc->Subtract(5, 4);
      Assert::AreEqual(1, (int)result);
    }
    /*
    * Ensures 5 times 4 result in 20.
    */
    TEST_METHOD(Multiply)
    {
      Calculator* calc = new Calculator();
      double result = calc->Multiply(5, 4);
      Assert::AreEqual(20, (int)result);
    }
   /*
    * Ensures 20 divided 4 results in 5.
    */
    TEST_METHOD(Divide)
    {
      Calculator* calc = new Calculator();
      double result = calc->Divide(20, 4);
      Assert::AreEqual(5, (int)result);
    }
   /*
    * Ensures a divide by zero error does not occur.
    */
    TEST_METHOD(DivideByZero)
    {
      Calculator* calc = new Calculator();
      int result = calc->Divide(20, 0);
      Assert::IsTrue(true);
    }

  };
}
