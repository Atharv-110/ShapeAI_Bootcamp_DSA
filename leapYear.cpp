//Write a program to check whether a year entered by a user is Leap year or not.
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter year : ";
    cin >> year;
    if ((year % 4 == 0 && year != 100)||year % 400 == 0)
    {
        cout << year << " is a Leap Year" << endl;
    }
    else
    {
        cout << year << " is not a Leap Year" << endl;
    }

    return 0;
}