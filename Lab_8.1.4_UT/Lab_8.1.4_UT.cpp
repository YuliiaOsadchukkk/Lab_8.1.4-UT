#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab814UT
{
	TEST_CLASS(Lab814UT)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str("df***u");
			bool functionResult = IsOrNot(str);
			Assert::AreEqual(true, functionResult);
		}
	};
}
