/*
You can have as many else if statements as you want. You can also leave off the else block if you don’t need one and just have if-else if statements.

Question: Write a program that takes the marks of a student as input and displays a message based on the following data:-

Total marks	Message
Greater than 80	Outstanding
Between 61-80 	Excellent
Between 41-60 	Good
Less than or equal to 40       	Not qualified
*/
#include <iostream>
using namespace std;
int main()
{
  int marks;
  cin>>marks;

  //write your code here
  if(marks>80){
    cout<<"Outstanding";
  }
  else if(marks<=80 && marks>=61){
    cout<<"Excellent";
  }
  else if(marks<=60 && marks>=41){
    cout<<"Good";
  }
  else if(marks<=40){
    cout<<"Not qualified";
  }

}
