// 1. Class for a Simple Calculator
// o Write a C++ program that defines a class Calculator with functions for addition,
// subtraction, multiplication, and division. Create objects to use these functions.
// o Objective: Introduce basic class structure

#include <iostream>
using namespace std;

class Calculator
{
public:
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
};

int main()
{
    Calculator calc;
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
            calc.Addition(num1, num2);
        }
        else if (choice == 2)
        {
            calc.Subtraction(num1, num2);
        }
        else if (choice == 3)
        {
            calc.Multiply(num1, num2);
        }
        else if (choice == 4)
        {
            calc.Divide(num1, num2);
        }
        else
        {
            cout << "Inavlid choice";
        }
    }
}