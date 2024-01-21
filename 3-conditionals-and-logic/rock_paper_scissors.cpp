#include <iostream>
#include <stdlib.h>

int main() {

  srand (time(NULL));

  int computer = rand() % 5 + 1;
  int user = 0;

  std::cout << "=====================\n";
  std::cout << "rock paper scissors\n";
  std::cout << "=====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) lizard\n";
  std::cout << "5) Spock\n";

  std::cout << "shoot! ";

  std::cin >> user;

  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;

  /* 
  rock > scissors
  scissors > paper
  paper > rock
  lizard > spock
  spock > scissors
  scissors > lizard
  lizard > paper
  paper > spock
  spock > rock
  rock > lizard
  */

  if(user == scissors && computer == paper) {
    std::cout << "you win!\n";
  } else if (user == paper && computer == rock) {
    std::cout << "you win!\n";
  } else if (user == rock && computer == lizard) {
    std::cout << "you win!\n";
  } else if (user == lizard && computer == spock) {
    std::cout << "you win!\n";
  } else if (user == spock && computer == scissors) {
    std::cout << "you win!\n";
  } else if (user == scissors && computer == lizard) {
    std::cout << "you win!\n";
  } else if (user == lizard && computer == paper) {
    std::cout << "you win!\n";
  } else if (user == paper && computer == spock) {
    std::cout << "you win!\n";
  } else if (user == spock && computer == rock) {
    std::cout << "you win!\n";
  } else if (user == rock && computer == scissors) {
    std::cout << "you win!\n";
  } else {
    std::cout << "you lose!\n";
  }

}
