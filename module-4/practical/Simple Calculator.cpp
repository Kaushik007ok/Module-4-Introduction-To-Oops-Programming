// 1. Simple Calculator Using Functions
// o Write a C++ program that defines functions for basic arithmetic operations (add,
// subtract, multiply, divide). The main function should call these based on user input.
// o Objective: Practice defining and using functions in C++.

#include <iostream>
using namespace std;

float Addition(float num1, float num2);
float Subtraction(float num1, float num2);
float Multiply(float num1, float num2);
float Divide(float num1, float num2);

float Addition(float num1, float num2)
{
    float result = num1 + num2;
    cout << "Result: " << result;
}
float Subtraction(float num1, float num2)
{
    float result = num1 - num2;
    cout << "Result: " << result;
}
float Multiply(float num1, float num2)
{
    float result = num1 * num2;
    cout << "Result: " << result;
}
float Divide(float num1, float num2)
{
    if (num2 == 0)
    {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
    float result = num1 / num2;
    cout << "Result: " << result;
}

int main()
{
    float num1, num2;
    int choice;

    cout << "Basic calculator\n";
    cout << "1)Addition\n";
    cout << "2)Subtraction\n";
    cout << "3)Multiply\n";
    cout << "4)Divide\n"
         << endl;

    cout << "Enter Your choice: ";
    cin >> choice;

    if (choice < 1 || choice > 4)
    {
        cout << "Invalid choice\n";
    }

    else
    {

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;

        if (choice == 1)
        {
            Addition(num1, num2);
        }
        else if (choice == 2)
        {
            Subtraction(num1, num2);
        }
        else if (choice == 3)
        {
            Multiply(num1, num2);
        }
        else if (choice == 4)
        {
            Divide(num1, num2);
        }
        else
        {
            cout << "Inavlid choice";
        }
    }
}