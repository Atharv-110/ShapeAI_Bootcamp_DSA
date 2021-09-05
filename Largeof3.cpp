//Write a program to find the largest number among three numbers entered by the user.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 numbers : ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << a << " is Greater" << endl;
    }
    else if (b > a && b > c)
    {
        cout << b << " is Greater" << endl;
    }
    else
    {
        cout << c << " is Greater" << endl;
    }

    return 0;
}