#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
  week today;
  today = Wednesday;
  int n;
  cin>>n;
  cout << today+n;
  return 0;
}
