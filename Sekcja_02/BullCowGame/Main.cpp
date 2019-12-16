#include <iostream>
#include<string>
#include "FBullCowGamek.h"

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; // instatiate a new game

// the entry point for our application
int main() 
{
	std::cout << BCGame.GetCurrentTry();
	bool bPlayAgain = false; 
	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	}
	while (bPlayAgain);

	return 0; // exit the application
}


//introduce the game
void PrintIntro() 
{
	constexpr int WORD_LENGTH = 9;
	std::cout << "Welcome to Bulls and Cows, a fun word game" << std::endl;
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking off?\n";
	std::cout << std::endl;
	return;
}

void PlayGame()
{
	BCGame.Reset();
	int MaxTries = BCGame.GetMaxTries();
	std::cout << MaxTries << std::endl; 

	// loop for the number asking for guesses
	for (int count = 1; count <= MaxTries; count++){
		std::string Guess = GetGuess(); //TODO make loop checking valid

		//Submit valid guess
		//Print nr

		std::cout << "Your guess was: " << Guess << std::endl;
		std::cout << std::endl;
	}
}

std::string GetGuess() 
{
	int CurrentTry = BCGame.GetCurrentTry();

	//get a gues from the player
	std::cout << "Try" << CurrentTry << ". Enter your guess:" ;
	std::string Guess = "";
	std::getline(std::cin, Guess);
	return Guess; 
}

bool AskToPlayAgain() 
{
	std::cout << "Do you want to play again (y/n)?";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');

}
