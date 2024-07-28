//Write a function to check if the entered number is odd or even and print 'Odd' or 'Even' based on the input.
#include <iostream>
using namespace std;
string odd_or_even(int x)
{
  //write your code here
  if(x%2==0){
    return "Even";
  }
  else{
    return "Odd";
  }
}
int main()
{
  int num;
  cin>>num;
  cout<<odd_or_even(num);
  return 0;
}
