/*  Prompts user:
      Rock; Paper; Scissors; Lizard; Spock;
    Get a computer random pick;
    Compare picks and choose winner;
      Scissors > Paper; Paper > Rock; Rock > Lizard; Lizard > Spock;  Spock > Scissors; Scissors > Lizard; Lizard > Paper; Paper > Spock; Spock > Rock; Rock > Scissors;
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void  match(int player, int computer) 
{
  if (player == 1 && computer != 1)
  {
    if (computer == 3 || computer == 4)
      cout << "The Player Wins!\n";
    else
      cout << "The Computer Wins!\n";
  }
  else if (player == 2 && computer != 2)
  {
    if (computer == 1 || computer == 5)
      cout << "The Player Wins!\n";
    else
      cout << "The Computer Wins!\n";
  }
  else if (player == 3 && computer != 3)
  {
    if (computer == 2 || computer == 4)
      cout << "The Player Wins!\n";
    else
      cout << "The Computer Wins!\n";
  }
  else if (player == 4 && computer != 4)
  {
    if (computer == 2 || computer == 5)
      cout << "The Player Wins!\n";
    else
      cout << "The Computer Wins!\n";
  }
  else if (player == 5 && computer != 5)
  {
    if (computer == 1 || computer == 3)
      cout << "The Player Wins!\n";
    else
      cout << "The Computer Wins!\n";
  }
  else
    cout << "Its a Draw...\n";
}
  
void  print_input(int player) 
{
  switch (player)
  {
    case 1:
      cout << "🪨\n";
      break;
    case 2:
      cout << "🧾\n";
      break;
    case 3:
      cout << "✂️\n";
      break;
    case 4:
      cout << "🦎\n";
      break;
    case 5:
      cout << "🖖\n";
      break;
  } 
}

void  print_intro() 
{
  cout << "*********************************\n";
  cout << "Rock Paper Scissors Lizard Spock!\n";
  cout << "*********************************\n";

  cout << " 1)🪨    2)🧾   3)✂️   4)🦎   5)🖖\n";  
 }

int generate_random_number() 
{
  int number;
  srand (time(NULL));
  number = rand() % 5 + 1;
  return (number);
}

int main() 
{
  int player;
  int computer;

  print_intro();
  cin >> player;
  computer = generate_random_number();
  cout << "player: ";
  print_input(player);
  cout << "computer: ";
  print_input(computer);
  match(player, computer);
  return (0);
}
