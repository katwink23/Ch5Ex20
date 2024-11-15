/* File Name: Ch5Ex20.cpp
  Programmer: Katlyn Winkelhake
  Date: Nov 11 2024
  Requirements: Write a program that generates a random number and asks the user to guess what the number is.

  If the user’s guess is higher than the random number, the program should display “Too high, try again.”

  If the user’s guess is lower than the random number, the program should display “Too low, try again.”

  The program should use a loop that repeats until the user correctly guesses the random number.
  */



#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void NumberGen();
void Guess();

double numGuess;
double theNum;


int main()
{

NumberGen();
Guess();
  
}

void NumberGen(){
unsigned seed = time(0);
  srand(seed);
  theNum = rand() % 100 + 1;

 
}


void Guess(){
  
  cout << "RANDOM NUMBER GUESSING GAME!" << endl
    << "---------------------------" << endl
    << "Please enter your guess: (1-100)" << endl;
  cin >> numGuess;

 while (numGuess != theNum){

    if (numGuess > theNum)
      cout << "Too high!" << endl;

    else if (numGuess < theNum)
      cout << "Too low!" << endl;

   cout << "Try again: \t";
   cin >> numGuess;
 }

  cout << "You win! The number was " << theNum << endl;
}