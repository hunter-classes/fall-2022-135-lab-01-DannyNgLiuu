#include <iostream>

int main() 
{
  int firstNum;
  int secondNum;
  
  std::cout << "Enter the first number: \n";
  std::cin >> firstNum;
  std::cout << "Enter the second number: \n";
  std::cin >> secondNum;
  
  if(firstNum > secondNum) {
    std::cout << "The smaller of the two is " << secondNum << "\n";
  } else {
    std::cout << "The smaller of the two is " << firstNum << "\n";
  }
  
  return 0;
}