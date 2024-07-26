//For a given table of 2D array,

//  56	85	36
//  96	37	82
//  46	34	95
//  63	84	52
//write a program to print the elements at the following positions in separate lines.
//1. First element of the third row
//2. Third element of the second row
//3. First element of the first row

//code:-
#include <iostream>
using namespace std;
int main()
{
  int tab[4][3] = { 56, 85, 36, 96, 37, 82, 46, 34, 95, 63, 84, 52 };

  //write your code here
  cout<<tab[2][0]<<"\n"<<tab[1][2]<<"\n"<<tab[0][0]<<endl;
  

}
