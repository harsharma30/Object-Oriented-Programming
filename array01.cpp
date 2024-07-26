#include <iostream> 
using namespace std;
int main () 
{ 
  //write your code here
  int N;
  cin>>N;
  int array[4][3] = {{14, N, 98}, {36, 78, 25}, {25, 66, 78},{78,34,81}};
  for(int i = 0; i<4;i++){
    for(int j = 0; j<3; j++){
      cout<<array[i][j]<<" ";
    }
    cout<<endl;
  }
  
} 
