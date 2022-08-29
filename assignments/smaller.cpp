#include <iostream>

using namespace std;

int main() 
{
  int firstNum;
  int secondNum;
  
  cout << "Enter the first number: \n";
  cin >> firstNum;
  cout << "Enter the second number: \n";
  cin >> secondNum;
  
  if(firstNum > secondNum) {
    cout << "The smaller of the two is " << secondNum;
  } else {
    cout << "The smaller of the two is " << firstNum;
  }
  
  return 0;
}