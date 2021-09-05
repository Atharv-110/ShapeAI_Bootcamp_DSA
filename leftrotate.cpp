//https://www.hackerrank.com/challenges/array-left-rotation/problem
#include <iostream>
using namespace std;
int main()
{
    int temp, size, j, d;
    cout << "Enter size : ";
    cin >> size;
    cout << "Enter times of rotation : ";
    cin >> d;
    int *a = new int[size];
    if (!a)
    {
        cout << "Memory allocation Failed..!!" << endl;
    }
    cout << "Enter array  elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> *(a + i);
    }
    cout << "Elements before rotation : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(a + i) << "\t";
    }
    for (int i = 1; i <= d; i++)
    {
        temp = a[0];
        for (j = 0; j < size; j++)
        {
            a[j] = a[j + 1];
        }
        a[size - 1] = temp;
    }
    cout << endl
         << "After " << d << " times rotation array will be : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(a + i) << "\t";
    }
    delete a;
    return 0;
}