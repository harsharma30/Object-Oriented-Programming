//Write a program that takes a number n as input. Define a function that returns the following value:-
//f(n) = f(n-1) + 100, where f(0)=0
#include <iostream>
using namespace std;
int calculate(int n)
{
  //write your code here
  if(n==0){
    return 0;
  }
  else{
    return calculate(n-1)+100;
  }
}
int main()
{
  int num;
  cin>>num;
  cout<<calculate(num)<<endl;
  return 0;
}
