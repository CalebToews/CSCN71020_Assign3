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

		TEST_METHOD(Player1Invalid)
		{
			//player 1 inputs invalid input
			char player1[] = { "WOW" };
			char player2[] = { "rock" };

			char* result = winnerCheck(player1, player2);

			Assert::AreEqual("Invalid", result);
		}

		TEST_METHOD(Player2Invalid)
		{
			//player 2 inputs invalid input
			char player1[] = { "rock" };
			char player2[] = { "WOW" };

			char* result = winnerCheck(player1, player2);

			Assert::AreEqual("Invalid", result);
		}

		TEST_METHOD(Player1WinRock)
		{
			// Player 1 wins with rock
			char player1[] = { "rock" };
			char player2[] = { "scissor" };

			char* result = winnerCheck(player1, player2);

			Assert::AreEqual("Player1", result);
		}

		TEST_METHOD(Player1WinPaper)
		{
			// Player 1 wins with paper
			char player1[] = { "paper" };
			char player2[] = { "rock" };

			char* result = winnerCheck(player1, player2);

			Assert::AreEqual("Player1", result);
		}

	};
}
