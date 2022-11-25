#include "pch.h"
#include "CppUnitTest.h"
#include "../PR8.2.IT/PR8.2.IT.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = { "Hell o      wor l   d" };
			int count = 0;
			int len = strlen(str);
			int* arr = new int[len];
			count_(str, count, arr, len);
			Assert::AreEqual(count, 0);
		}
	};
}
