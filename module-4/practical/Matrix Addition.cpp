// 2. Matrix Addition
// o Write a C++ program to perform matrix addition on two 2x2 matrices.
// o Objective: Practice multi-dimensional arrays.

#include <iostream>
using namespace std;
int main()
{
    int arr[2][2] = {
        {1, 2},
        {2, 4}};
    int sum = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum = arr[i][j] + sum;
        }
    }

    cout << "Addition of two array is: " << sum;
}