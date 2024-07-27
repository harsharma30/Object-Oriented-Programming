//Write a program that begins by reading the denomination of a banknote from the user. Then your program should print the name of the individual that appears on the banknote of the entered amount. An appropriate error message("Invalid Entry") should be displayed if no such note with entered denomination exists.

               
/*
Individual                         Amount              

George Washington         $1 

Thomas Jefferson             $2 

Abraham Lincoln               $5 

Alexander Hamilton        $10 

Andrew Jackson               $20 

Ulysses S. Grant              $50 

Benjamin Franklin          $100
*/


#include <iostream>
using namespace std;
int main()
{
  int denom;
  cin>>denom;

  //write your code here
  switch (denom){
    case 1:
      cout<<"George Washington";
      break;
    case 2:
      cout<<"Thomas Jefferson";
      break;
    case 5:
      cout<<"Abraham Lincoln";
      break;
    case 10:
      cout<<"Alexander Hamilton";
      break;
    case 20:
      cout<<"Andrew Jackson";
      break;
    case 50:
      cout<<"Ulysses S. Grant";
      break;
    case 100:
      cout<<"Benjamin Franklin";
      break;
    default:
      cout<<"Invalid Entry";
      
  }

}

        
