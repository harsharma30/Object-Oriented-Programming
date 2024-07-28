//Define a function to return factorial of a number entered by the user.
#include <iostream>
using namespace std;
int find_fact(int x)
{
  //write your code here
  int fact=1;
  while(x>0){
    fact=fact*x;
    x=x-1;
  }
  return fact;
}
int main()
{
  int num;
  cin>>num;
  cout<<find_fact(num)<<endl;
  return 0;
}
