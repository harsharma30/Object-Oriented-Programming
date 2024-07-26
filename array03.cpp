//Given an array num = {6, 7, 3, 8, 1, 5, 16, 13, 11, 19, 2, 4, 12, 9, 17, 10}

//1. Print 8th and 12th element of the array separated by a space.

//2. Replace the second element of array with 'a', where 'a' is a keyboard input.

//3. Print the sum of second, third and sixth elements of the array in a separate line.

//code:-
#include <iostream>
using namespace std;
int main()
{
  int num[] = {6, 7, 3, 8, 1, 5, 16, 13, 11, 19, 2, 4, 12, 9, 17, 10}; 

  //write your code here
  cout<<num[7]<<" "<<num[11]<<endl;
  
  int a;
  cin>>a;
  num[1]=a;
  
  cout<<(num[1]+num[2]+num[5]);

}
