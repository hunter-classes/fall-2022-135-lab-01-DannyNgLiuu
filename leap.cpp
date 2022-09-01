#include <iostream>

int main() 
{
  int year;
  
  std::cout << "pick a year: ";
  std::cin >> year;

  if((year % 4) != 0) {
    std::cout << "common year \n";
  } else if((year % 100) != 0) {
    std::cout << "leap year \n";
  } else if((year % 400) != 0) {
    std::cout << "common year \n";
  } else {
    std::cout << "leap year \n";
  }
  return 0;
}