//Write a program that takes an input from user(user enters 1 for addition and 2 for subtraction). Then the user enters two numbers. You have to then output the result (number1 + number2) or (number1 - number2) based on the user input.

#include <iostream>
using namespace std;
int main() 
{
  int op;
  int firstNumber, secondNumber;
  cin >> op;
  cin >> firstNumber >> secondNumber;

  //write your code here
  switch (op){
    case 1:
      cout<<firstNumber+secondNumber;
      break;
      
    case 2:
      cout<<firstNumber-secondNumber;
      break;
  }

}