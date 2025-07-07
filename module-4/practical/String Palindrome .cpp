// 3. String Palindrome Check
// o Write a C++ program to check if a given string is a palindrome (reads the same
// forwards and backwards).
// o Objective: Practice string operations.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string newStr = "";

    // Start from last index str.length() - 1
    for (int i = str.length() - 1; i >= 0; i--)
    {
        newStr += str[i];
    }

    cout << "Reversed string: " << newStr << endl;

    if (str == newStr)
    {
        cout << "This is a palindrome string." << endl;
    }
    else
    {
        cout << "This is not a palindrome string." << endl;
    }
}