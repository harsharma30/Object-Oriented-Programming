//Write a program that takes a number(1 to 7) as input from the user and prints its corresponding week day.

//You have to output "Sunday" for 1, "Monday" for 2 and so on.
#include <iostream>
using namespace std;
int main()
{
  int num;
  cin>>num;

  //write your code here
  switch (num){
    case 1:
      cout<<"Sunday";
      break;
    
    case 2:
      cout<<"Monday";
      break;
      
    case 3:
      cout<<"Tuesday";
      break;
      
    case 4:
      cout<<"Wednesday";
      break;
      
    case 5:
      cout<<"Thursday";
      break;
      
    case 6:
      cout<<"Friday";
      break;
      
    case 7:
      cout<<"Saturday";
      
  }
  

}
