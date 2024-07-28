//Question: We have an array of numbers num = {16, 8, 12, 5, 7, 10, 11, 9, 13, 15}, write a program that asks user to input a number and if number is
//present in num, print numbers from 1 to the value of input in separate lines, otherwise print “Not found”
#include <iostream>
using namespace std;
int main()
{
  int num[] = {16, 8, 12, 5, 7, 10, 11, 9, 13, 15};
  int user_input;
  int i,j;
  cin>>user_input;
  for(i=0;i<10;i++)
  {
    if(user_input==num[i])
    {
      for(j=1;j<=user_input;j++)
      {
        cout<<j<<endl;
      }
      break;
    }
  }
  if(i==10) 
    cout<<"Not found"<<endl;

  return 0;
}
