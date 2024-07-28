//You are given 3 numbers as input from the user. You have to display whether the first input lies in the range of second input and third input. 
//For eg- If you are given the inputs 2, 0, 10. Then you have to check whether 2 lies in the range 0-10(Both inclusive).
//You have to output "The number is in the given range." or "The number is outside the given range." based on the inputs.
#include <iostream>
using namespace std;
void check_number(int n,int l,int u)
{
  //write your code here
  if(n>=l && n<=u){
    cout<<"The number is in the given range.";
  }
  else{
    cout<<"The number is outside the given range.";
  }
}
int main()
{
  int lower_limit,upper_limit,number;
  cin>>number>>lower_limit>>upper_limit;
  check_number(number,lower_limit,upper_limit);
  return 0;
}
