// 2. Type Conversion
// o Write a C++ program that performs both implicit and explicit type conversions and
// prints the results.

#include <iostream>
using namespace std;

int main()
{
    // Implicit Type Conversion
    int intValue = 10;
    float floatValue = intValue;
    cout << "Implicit Conversion (int to float): " << floatValue << endl;

    float floatValue = 5.75;
    int convertedInt = floatValue;
    cout << "Implicit Conversion (float to int): " << convertedInt << endl;

    // Explicit Type Conversion
    float num1 = 9.99;
    int num2 = (int)num1; // c-style
    cout << "Explicit Conversion (float to int using C-style): " << num2 << endl;

    float num3 = 7.5;
    int num4 = static_cast<int>(num3); // Modern C++ style casting
    cout << "Explicit Conversion (float to int using static_cast): " << num4 << endl;

    // Another example of explicit conversion
    int a = 5;
    int b = 2;
    float result = (float)a / b; // Without casting, result would be integer division
    cout << "Explicit Conversion (int division to float): " << result << endl;

    return 0;
}
