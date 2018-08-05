#include "FbullCowGame.h"

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

FBullCowGame::FBullCowGame(){	Reset();}

void FBullCowGame::Reset()
{
	MyCurrentTry = 1;
	MyMaxTries = 5;
	return;
}

bool FBullCowGame::IsGameWon() const { return false; }

bool FBullCowGame::CheckGuessValidity(std::string)
{
	return false;
}
