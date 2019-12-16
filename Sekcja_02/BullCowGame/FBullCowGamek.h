#pragma once
#include <string>

class FBullCowGame {
public:
	FBullCowGame(); // constructor

	int GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); // TODO make a more rich return value
	bool ChceckGuessValidity(std::string); 


// ^^ Please try and ignore thi and focus on the interface above ^^
private:
	int MyCurrentTry = 1;
	int MyMaxTries = 5;
};