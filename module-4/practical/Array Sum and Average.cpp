// 1. Array Sum and Average
// o Write a C++ program that accepts an array of integers, calculates the sum and
// average, and displays the results.
// o Objective: Understand basic array manipulation.

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    float average = (float)sum / size;

    cout << "Sum of array is: " << sum << endl;
    cout << "Average of numbers is: " << average << endl;

    return 0;
}