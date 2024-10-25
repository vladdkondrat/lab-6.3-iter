#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.3 iter/lab 6.3 iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest21
{
	TEST_CLASS(UnitTest21)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 5;
			int arr[size] = { 10, 7, 7, 3, 1 };
			Assert::IsTrue(isSortedNonIncreasing(arr, size), L"Array should be sorted in non-increasing order.");
		}
	};
}
