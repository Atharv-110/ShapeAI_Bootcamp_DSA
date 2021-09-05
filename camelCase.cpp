//https://www.hackerrank.com/challenges/camelcase/problem
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string str;
    int i, count = 1;
    cout << "Enter a string in Camel Case : ";
    getline(cin, str);
    cout << "Entered String is : " << str << endl;
    for (i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            count++;
        }
    }
    cout << "No. of Words are : " << count << endl;
    return 0;
}