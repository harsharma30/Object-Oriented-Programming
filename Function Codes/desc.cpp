//Write a program that takes two numbers as input from the user. Define a function that prints these values in descending order separated by a space.
#include <iostream>
using namespace std;
void arrange(int x,int y)
{
  //write your code here
  if(x>y){
    cout<<x<<" "<<y<<endl;
  }
  else{
    cout<<y<<" "<<x<<endl;
  }
}
int main()
{
  int num1,num2;
  cin>>num1>>num2;
  arrange(num1,num2);
  return 0;
}
