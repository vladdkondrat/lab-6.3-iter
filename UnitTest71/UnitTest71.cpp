#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.1/lab 6.01.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest7
{
    TEST_CLASS(UnitTest71)
    {
    public:

        TEST_METHOD(TestCreate)
        {
            int a[] = { 1, 5, 3, 7, 10, -2, 4 };
            int size = 7;
            int A = 2, B = 6;
            int expected_sum = 12; // Sum of elements: 5, 3, 4
            int sum = SumElementsInRange(a, size, A, B);

            Assert::AreEqual(expected_sum, sum);
            }
        }

 
}
