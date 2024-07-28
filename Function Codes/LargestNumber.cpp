//Write a function to print the largest of three numbers entered by the user.
#include <iostream>
using namespace std;
void largest(int x,int y,int z)
{
  //write your code here
  if(x>y && x>z){
    cout<<x;
  }
  else if(y>x && y>z){
    cout<<y;
  }
  else{
    cout<<z;
  }
}
int main()
{
  int num1,num2,num3;
  cin>>num1>>num2>>num3;
  largest(num1,num2,num3);
  return 0;
}
