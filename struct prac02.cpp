//Write a program to store the roll no, name and age of a student. Make roll no = 1 and take user input for name and age and then print the details of the student using structure.
//Details should be displayed in the format provided in expected output.
#include <iostream>
using namespace std;
  struct student
  {
    int roll_no;
    char name[30];
    int age;
  };
int main(){
  //write your code here
  student std1;
  std1.roll_no = 1;
  cin>>std1.name;
  cin>>std1.age;
  
  cout<<"Roll no: "<<std1.roll_no<<endl;
  cout<<"Name: "<<std1.name<<endl;
  cout<<"Age: "<<std1.age<<endl;

}
