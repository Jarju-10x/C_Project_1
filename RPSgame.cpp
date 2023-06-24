#include <iostream>
#include <random>
#include <ostream>


char User_Move();
char Computer_Move();
void Show_The_Input(char c);
void Who_Is_The_Winner();

int main(){

  char user_choice; 
  char machine_choice;
  
  
  user_choice= User_Move();

  std::cout << "\nYour choice : ";
  Show_The_Input(user_choice);

}

char User_Move()
{
  char choice;
  
  do{
  std::cout << "\n---------------------------\n";
  std::cout << "  ROCK - PAPER - SCISSORS" << std::endl;
  std::cout << "---------------------------\n";
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
   return 0;
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

void Who_Is_The_Winner()
{
  
}
