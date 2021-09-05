//Write a program to check whether a number is Prime or Not.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (num <= 1)
    {
        cout << "Prime numbers are greater than 1" << endl;
        return 0;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << num << " is not prime" << endl;
            return 0;
        }
    }
    cout << "Number is prime" << endl;

    return 0;
}