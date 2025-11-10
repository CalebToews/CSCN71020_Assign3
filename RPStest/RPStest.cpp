#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* winnerCheck(char[], char[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPStest
{
	TEST_CLASS(RPStest)
	{
	public:
		
		TEST_METHOD(Tie) 
		{
			//player 1 and 2 have same input
			char player1[] = { "rock" };
			char player2[] = { "rock" };

			char* result = winnerCheck(player1, player2);

			Assert::AreEqual("Draw", result);
		}
	};
}
