#include <iostream>
#include <string>
#include "FbullCowGame.h"

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();
FBullCowGame BCGame;

void PrintIntro()
{
	constexpr int WORLD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows.\n";
	cout << "Can you guess the " << WORLD_LENGTH;
	cout << " letter isogram I'm thinking of?\n";
	cout << endl;
	return;
}

string GetGuess()
{
	
	int CurrentTry = BCGame.GetCurrentTry();
	cout << "Enter your guess: ";
	string Guess = "";
	
	getline(cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again? ";
	string Response = "";
	getline(cin, Response);

	if (Response[0] == 'y' || Response[0] == 'Y')
	{
		return true;
	}
	else return false;
}

void PlayGame()
{
	BCGame.Reset();
	int MaxTries = BCGame.GetMaxTries();
	cout << MaxTries << endl;
	for (int count = 1; count <= MaxTries; count++)
	{
		GetGuess();
	}
}


int main()
{
	PrintIntro();
	do
	{
		PlayGame();
	} while (AskToPlayAgain());

	return 0;
}