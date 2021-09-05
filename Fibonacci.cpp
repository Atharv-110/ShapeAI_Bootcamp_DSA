//Write a program to display Fibonacci Series upto nth term. (Using loops)
#include <iostream>
using namespace std;
int main()
{
    int range, n1 = 0, n2 = 1, i, nextT;
    cout << "Enter range : ";
    cin >> range;
    cout << "Fibonacii Series : " << endl;
    for (i = 0; i < range; i++)
    {
        cout << n1 << "\t";
        nextT = n1 + n2;
        n1 = n2;
        n2 = nextT;
    }

    return 0;
}