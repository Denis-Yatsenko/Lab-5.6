#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.6/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest56
{
	TEST_CLASS(UnitTest56)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int g;
			g = sum(2, 3);
			Assert::AreEqual(g, 5);

		}
	};
}
