// 3. Variable Scope
// o Write a program that demonstrates the difference between local and global
// variables in C++. Use functions to show scope.
// o Objective: Reinforce the concept of variable scope

#include <iostream>
using namespace std;

int x = 5; // Global variable

int gloablVariable(int x);
int ModifygloablVariable(int x);

int gloablVariable(int x)
{
    cout << "global variable in function: " << x << endl;
}

int ModifygloablVariable(int x)
{
    x = x + 5;
    cout << "modifyed global variable in function: " << x << endl;
}

int main()
{
    int y = 8; // Local variable

    cout << "Global variable: " << x << endl;
    cout << "Local variable: " << y << endl;

    gloablVariable(x);

    ModifygloablVariable(x);
}