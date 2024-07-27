//Write a program that takes an input from the user. If the input is between 100 and 500 or between 1000 and 2000 (both inclusive), print "Yes", otherwise print "No".

#include <iostream>
using namespace std;
int main()
{
  int money;
  cin>>money;

  //write your code here
  if(money>=100 && money<=500 || money>=1000 && money<=2000){
    cout<<"Yes";
  }
  else{
    cout<<"No";
  }
  
}
