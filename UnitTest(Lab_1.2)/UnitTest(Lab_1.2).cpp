#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1.2/Stek.cpp"
#include "../Lab_1.2/Kilkist_elements.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab12
{
	TEST_CLASS(UnitTestLab12)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Stek obj_top;
			obj_top.set_top(NULL);

			obj_top.Set_element(12);
			obj_top.Set_element(89);
			obj_top.Set_element(329);

			Assert::AreEqual(Kil_elem(obj_top) , 3);
		}
	};
}
