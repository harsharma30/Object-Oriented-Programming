//Write a program that takes 3 integers as input and then display the smallest number among them.
#include <iostream>
using namespace std;
int main()
{
  int first,second,third;
  cin>>first>>second>>third;

  //write your code here
  if(first<second && first<third){
    cout<<first;
  }
  else if(second<first && second<third){
    cout<<second;
  }
  else{
    cout<<third;
  }

}
