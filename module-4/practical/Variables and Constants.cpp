// 1. Variables and Constants
// o Write a C++ program that demonstrates the use of variables and constants. Create
// variables of different data types and perform operations on them.

#include <iostream>
using namespace std;

int main()
{

    int age = 19;
    float height = 5.9;
    int marks = 98;
    char name[] = "Mitesh";
    bool isStudent = true;

    const float PI = 3.14;

    int newAge = age + 5;
    float circleArea = PI * (2 * 2);

    cout << "Name:" << name << endl;
    cout << "Height:" << height << endl;
    cout << "Marks:" << marks << endl;
    cout << "Is student:" << isStudent << endl;

    cout << "New Age after 5 years: " << newAge << endl;
    cout << "Area of circle:" << circleArea << endl;
}
