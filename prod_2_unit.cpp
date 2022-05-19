#include "stdafx.h"

#include "../WindowsProject/check.h"

using namespace	System;
using namespace	System::Text;
using namespace	System::Collections::Generic;
using namespace	Microsoft::VisualStudio::TestTools::UnitTesting;

namespace UnitTest1
{
	[TestClass]
	public ref class UnitTest
	{
	public:
		[TestMethod]
		void TestMethod1()
		{
			auto actual = CheckE2('e', 2);
			auto expected = true;
			Assert::AreEqual(expected, actual);
		}
		[TestMethod]
		void TestMethod2()
		{
			auto actual = CheckE2('f', 3);
			auto expected = false;
			Assert::AreEqual(expected, actual);
		}
		[TestMethod]
		void TestMethod3()
		{
			auto actual = CheckE2('g', 8);
			auto expected = true;
			Assert::AreEqual(expected, actual);
		}
		[TestMethod]
		void TestMethod4()
		{
			auto actual = CheckE2('e', 11);
			auto expected = false;
			Assert::AreEqual(expected, actual);
		}
		[TestMethod]
		void TestMethod5()
		{
			auto actual = CheckE2('f', 4);
			auto expected = false;
			Assert::AreEqual(expected, actual);
		}
		[TestMethod]
		void TestMethod6()
		{
			auto actual = CheckE2('g', 7);
			auto expected = true;
			Assert::AreEqual(expected, actual);
		}		[TestMethod]
		void TestMethod7()
		{
			auto actual = CheckE2('e', 6);
			auto expected = false;
			Assert::AreEqual(expected, actual);
		}
		[TestMethod]
		void TestMethod8()
		{
			auto actual = CheckE2('f', 23);
			auto expected = false;
			Assert::AreEqual(expected, actual);
		}
		[TestMethod]
		void TestMethod9()
		{
			auto actual = CheckE2('g', 15);
			auto expected = true;
			Assert::AreEqual(expected, actual);
		}	
		[TestMethod]
		void TestMethod10()
		{
			auto actual = CheckE2('e', 2);
			auto expected = true;
			Assert::AreEqual(expected, actual);
		}
		[TestMethod]
		void TestMethod11()
		{
			auto actual = CheckE2('f', 3);
			auto expected = false;
			Assert::AreEqual(expected, actual);
		}
		[TestMethod]
		void TestMethod12()
		{
			auto actual = CheckE2('g', 8);
			auto expected = true;
			Assert::AreEqual(expected, actual);
		}
		[TestMethod]
		void TestMethod13()
		{
			auto actual = CheckE2('e', 11);
			auto expected = false;
			Assert::AreEqual(expected, actual);
		}
		[TestMethod]
		void TestMethod14()
		{
			auto actual = CheckE2('f', 4);
			auto expected = false;
			Assert::AreEqual(expected, actual);
		}
		[TestMethod]
		void TestMethod15()
		{
			auto actual = CheckE2('g', 7);
			auto expected = true;
			Assert::AreEqual(expected, actual);
		}		[TestMethod]
		void TestMethod16()
		{
			auto actual = CheckE2('e', 6);
			auto expected = false;
			Assert::AreEqual(expected, actual);
		}
		[TestMethod]
		void TestMethod17()
		{
			auto actual = CheckE2('f', 23);
			auto expected = false;
			Assert::AreEqual(expected, actual);
		}
		[TestMethod]
		void TestMethod18()
		{
			auto actual = CheckE2('g', 15);
			auto expected = true;
			Assert::AreEqual(expected, actual);
		}	
	};
}