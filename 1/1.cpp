#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My1
{
	TEST_CLASS(My1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 1;
			int n = 2;
			double t;
			t = x / n;
		}
	};
}
