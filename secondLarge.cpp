//Write a program that takes n elements from the user and displays the second largest element of an array.
#include <iostream>
using namespace std;
int main()
{
    int n;

    //takes size of array
    cout << "enter number of elements : ";
    cin >> n;

    // allocating memeory dynamacally
    float *arr = new float[n];

    // exits program if memory is not allocated
    if (!arr)
    {
        cout << "failed to allocate memory in heap .." << endl;
        return 0;
    }
    //takes elements in array
    cout << "Enter numbers : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    float max, max2;
    max = max2 = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max2 = max;
            max = arr[i];
        }
        else if (max2 < arr[i])
        {
            max2 = arr[i];
        }
    }
    cout << "\nSecond largest number is : " << max2;
    // de-allocating memory
    delete arr;
    return 0;
}