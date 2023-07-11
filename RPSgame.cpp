#include <iostream>
#include <random>
#include <ostream>
#include <time.h>
#include <windows.h>


char User_Move();
char Computer_Move();
void Show_The_Input(char c);
void Who_Is_The_Winner(char a, char b);

int main(){

  char user_choice; 
  char machine_choice;
  char cont;
  do
  {

  user_choice = User_Move();
  machine_choice = Computer_Move();



  std::cout << "\nYour choice : ";
  Show_The_Input(user_choice);

  std::cout << "\tComputer choice : ";
  Show_The_Input(machine_choice);

  std::cout << "\n\n    <<<<<<<<<<<  >>>>>>>>>>>\n";
  Who_Is_The_Winner(user_choice, machine_choice);
  
  std::cout << "\n\n Wanna try again ?(y/n) : ";
  std::cin >> cont;
  
  } while (cont=='y');

}

char User_Move()
{
  char choice;
  
  do{
  std::cout << "\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
  std::cout << "\xB2\xB2 ROCK - PAPER - SCISSORS \xB2\xB2" << std::endl;
  std::cout << "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
  std::cout << "(Choose from the list below)\n" << std::endl;
  std::cout << " 'r' - ROCK \n" << std::endl;
  std::cout << " 'p' - PAPER \n" << std::endl;
  std::cout << " 's' - SCISSORS" << std::endl;
  std::cout << "\nCHOOSE ONE : ";
  
  std::cin >> choice;
   
  }while (choice != 'r' && choice != 's' && choice != 'p' );
  
  return choice;

}

char Computer_Move()
{

 //<<<<<<<< random number generator seed  
  std::mt19937 gen(time(0)); //< Mersenne Twister pseudo-random generator engine>

  //<<<<<<<<<<< RANGE
  std::uniform_int_distribution<int> dist(0,2);

  int choice = dist(gen);

  char computerMove;

    switch (choice) {
        case 0:
            computerMove = 'r'; // Rock
            break;
        case 1:
            computerMove = 'p'; // Paper
            break;
        case 2:
            computerMove = 's'; // Scissors
            break;
        
    }

   return computerMove;
}

void Show_The_Input( char c)
{
  switch (c)
  {
      case 'r':  std::cout << "ROCK";
              break;
      case 'p':  std::cout << "PAPER";
              break;
      case 's':  std::cout << "SCISSORS";
              break;
  
  }

}

void Who_Is_The_Winner(char a, char b)
{
   switch (a)
   {
   case 'r':
        if (b=='p')
           std::cout << "\t\033[1;31mYOU LOSE (>_<)";
        else if(b=='s')
           std::cout << "\t\033[1;36mYOU WIN (^_^)";
        else
          std::cout << "\t\033[1;35mIT's a TIE (0_o)";
    break;
    
    case 'p':
        if (b=='s')
           std::cout << "\t\033[1;31mYOU LOSE (>_<)";
        else if(b=='r')
           std::cout << "\t\033[1;32mYOU WIN (^_^)";
        else
          std::cout << "\t\033[1;35mIT's a TIE (0_o)";
    break;

    case 's':
        if (b=='r')
           std::cout << "\t\033[1;31mYOU LOSE (>_<)";
        else if(b=='p')
           std::cout << "\t\033[1;32mYOU WIN (^_^)";
        else
          std::cout << "\t\033[1;35mIT's a TIE (0_o)";
    break;
   
   }

}
