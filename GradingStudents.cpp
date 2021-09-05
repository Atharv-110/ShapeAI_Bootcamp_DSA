//https://www.hackerrank.com/challenges/grading/problem
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter no. of students : ";
    cin >> size;
    int stud[size], round;
    cout << "Enter grades of " << size << " students : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> stud[i];
    }
    cout << "ORIGINAL MARKS : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << stud[i] << endl;
    }
    cout << "ROUNDED MARKS : " << endl;
    for (int i = 0; i < size; i++)
    {
        if (stud[i] < 38)
        {
            cout << stud[i] << endl;
            continue;
        }
        else if (stud[i] % 10 == 9 || stud[i] % 10 == 4)
        {
            stud[i] += 1;
        }
        else if (stud[i] % 10 == 8 || stud[i] % 10 == 3)
        {
            stud[i] += 2;
        }
        cout << stud[i] << endl;
    }

    return 0;
}