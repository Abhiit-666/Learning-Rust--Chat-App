#include <iostream>
#include <random>

// Returns a random choice for the computer player
std::string getComputerChoice() {
  // Generate a random number between 0 and 2
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(0, 2);

  // Use the random number to determine the computer's choice
  switch (dis(gen)) {
    case 0:
      return "rock";
    case 1:
      return "paper";
    case 2:
      return "scissors";
  }
}

// Determines the winner of a rock, paper, scissors game
std::string getWinner(std::string player1, std::string player2) {
  if (player1 == player2) {
    return "Tie";
  } else if (player1 == "rock") {
    if (player2 == "scissors") {
      return "Player 1";
    } else {
      return "Player 2";
    }
  } else if (player1 == "paper") {
    if (player2 == "rock") {
      return "Player 1";
    } else {
      return "Player 2";
    }
  } else if (player1 == "scissors") {
    if (player2 == "paper") {
      return "Player 1";
    } else {
      return "Player 2";
    }
  }
}

int main() {
  std::cout << "Let's play rock, paper, scissors!\n";

  std::string player1, player2;

  // Get player 1's choice
  std::cout << "Player 1, enter your choice: ";
  std::cin >> player1;

  // Get player 2's choice (or generate a random choice for the computer)
  std::cout << "Player 2, enter your choice: ";
  std::cin >> player2;

  // Determine the winner
  std::string winner = getWinner(player1, player2);
  std::cout << "The winner is " << winner << "!\n";

  return 0;
}
