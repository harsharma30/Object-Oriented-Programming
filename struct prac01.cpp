#include <iostream>
#include <string>
using namespace std;

struct personal {
    string firstName;
    string dateOfJoining;
    string month;
    int year;
    float salary;
};

int main() {
    personal person;
    
    cin >> person.firstName;
    cin >> person.dateOfJoining;
  	cin >> person.month;
  	cin >> person.year;
    cin >> person.salary;

    cout << person.firstName<<" ";
    cout << person.dateOfJoining<<" ";
  	cout << person.month<<" ";
  	cout << person.year<<" ";
    cout << person.salary<<" ";

    return 0;
}
