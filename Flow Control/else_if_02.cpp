//Question: Write a program that prints "It's a holiday" if the day given by the user is Sunday or Saturday, otherwise it prints "Not a holiday".
#include <iostream>
using namespace std;
int main()
{
  string day;
  cin>>day;

  //write your code here
  if(day == "Sunday" || day == "Saturday"){
    cout<<"It's a holiday";
  }
  else{
    cout<<"Not a holiday";
  }

}
