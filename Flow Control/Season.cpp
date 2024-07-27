//Create a program that reads a month and day from the user. The user will enter the name of the month as a string(First character uppercase, rest lowercase) followed by the day as an integer. Then your program should display the season associated with the date that was entered.

//Season	First day
//Spring	March 20
//Summer	June 21
//Fall	September 22
//Winter	December 21
//Your program should display "Winter Season", "Summer Season", "Fall Season" or "Spring Season" based on the input
#include <iostream>
#include <string>

using namespace std;

int main() {
    string month;
    int day;


    cin >> month;
    cin >> day;

    if ((month == "March" && day >= 20) || (month == "April") || (month == "May") || 
        (month == "June" && day < 21)) {
        cout << "Spring Season" << endl;
    } 
    else if ((month == "June" && day >= 21) || (month == "July") || (month == "August") || 
             (month == "September" && day < 22)) {
        cout << "Summer Season" << endl;
    } 
    else if ((month == "September" && day >= 22) || (month == "October") || 
             (month == "November") || (month == "December" && day < 21)) {
        cout << "Fall Season" << endl;
    } 
    else if ((month == "December" && day >= 21) || (month == "January") || 
             (month == "February") || (month == "March" && day < 20)) {
        cout << "Winter Season" << endl;
    } 
    else {
        cout << "Invalid date entered." << endl;
    }

    return 0;
}
