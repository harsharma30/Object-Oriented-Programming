/*
Write a program to print the number of days in a month if a month number is given.

Input: For January, give input as integer 1, for February 2 and so on.

You have to output "31 Days" for months having 31 days, "30 Days" for months having 30 days and "28 or 29 Days" for February
  */

#include <iostream>
using namespace std;
int main()
{
  int m;
  cin>>m;

  //write your code here
  if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
    cout<<"31 Days";
  }
  else if(m==2){
    cout<<"28 or 29 Days";
  }
  else{
    cout<<"30 Days";
  }

}
