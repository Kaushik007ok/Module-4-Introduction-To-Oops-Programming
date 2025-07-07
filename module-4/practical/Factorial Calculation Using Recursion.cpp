// 2. Factorial Calculation Using Recursion
// o Write a C++ program that calculates the factorial of a number using recursion.
// o Objective: Understand recursion in functions

#include <iostream>
using namespace std;

int factorial(int n);

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int num, fac;
    cout << "Enter a number: ";
    cin >> num;

    fac = factorial(num);
    cout << "The factorial is: " << fac;
}