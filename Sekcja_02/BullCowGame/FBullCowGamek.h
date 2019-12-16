#pragma once
#include <string>

class FBullCowGame {
public:
	void Reset(); // TODO make a more rich return value
	int GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool ChceckGuessValidity(std::string); 

// ^^ Please try and ignore thi and focus on the interface above ^^
private:
	int MyCurrentTry;
	int MyMaxTries
};