#include "FBullCowGamek.h"

int FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void FBullCowGame::Reset()
{
	return;
}




bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::ChceckGuessValidity(std::string)
{
	return false;
}
