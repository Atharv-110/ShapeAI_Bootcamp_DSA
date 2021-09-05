//Write a program to Swap to two numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter values for a & b : ";
    cin >> a >> b;
    cout << "Before Swap : " << a << "    " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After Swap : " << a << "    " << b << endl;
    return 0;
}