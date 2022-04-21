#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\LEGION\source\repos\Lab_oop_2.8\Lab_oop_2.8\Fraction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTOOP18
{
	TEST_CLASS(UTOOP18)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Fraction::LongLong g, g1;
			g.set_a(6);
			g.set_b(6);
			g1.set_a(6);
			g1.set_b(6);
			Assert::AreEqual(operator == (g, g1), true);
		}
	};
}