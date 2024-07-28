//You are given an array {4, 5, 6, 3, 7, 9}. Define a function that displays the sum of this array.
#include <iostream>
using namespace std;
void find_sum(int num[],int n)
{
  //write your code here
  int sum=0;
  for(int i=0;i<n;i++){
    sum=sum+num[i];
  }
  cout<<sum;
}
int main()
{
  int num[]={4, 5, 6, 3, 7, 9};
  int n = 6;
  find_sum(num,n);
  return 0;
}
