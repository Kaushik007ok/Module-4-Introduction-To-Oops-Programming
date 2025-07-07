// 1. Grade Calculator
// o Write a C++ program that takes a student’s marks as input and calculates the grade
// based on if-else conditions.

#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter student marks: ";
    cin >> marks;

    if (marks > 80 && marks <= 100)
    {
        cout << "Grade A";
    }
    else if (marks > 60 && marks <= 79)
    {
        cout << "Grade B";
    }
    else if (marks > 40 && marks <= 50)
    {
        cout << "Grade c";
    }
    else
    {
        cout << "Grade D";
    }
}
