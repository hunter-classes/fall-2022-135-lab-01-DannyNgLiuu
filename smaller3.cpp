#include <iostream>

int main() {
  int firstNum;
  int secondNum;
  int thirdNum;

  std::cout << "Enter the first number: \n";
  std::cin >> firstNum;
  std::cout << "Enter the second number: \n";
  std::cin >> secondNum;
  std::cout << "Enter the third number: \n";
  std::cin >> thirdNum;

  if (firstNum > secondNum) {
    if (secondNum > thirdNum) {
      std::cout << "The smaller of the three is " << thirdNum;
    } else {
      std::cout << "The smaller of the three is " << secondNum;
    }
  } else if (firstNum < thirdNum) {
    std::cout << "The smaller of the three is " << firstNum;
  }
  return 0;
}