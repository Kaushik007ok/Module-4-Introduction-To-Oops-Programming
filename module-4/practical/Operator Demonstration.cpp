// 3. Operator Demonstration
// o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
// operators. Perform operations using each type of operator and display the results.

#include <iostream>
using namespace std;

int main()
{

    int a, b, c;
    a = 10;
    b = 20;

    // arithmetic:

    c = a + b;
    c = a - b;
    c = a * b;
    c = a / b;
    c = b / a;
    c = a % b;
    a++;
    a--;

    // relational :

    c = a > b;
    c = a < b;
    c = a >= b;
    c = a <= b;
    c = a != b;
    c = a == b;

    // Bitwise:

    c = a & b;
    c = a | b;
    c = a ^ b;
    c = a & b;

    // logical:

    c = (a < b && a >= b);
    c = (a < b || a >= b);
    c = !(a < b || a >= b);

    // assignment:

    a = a + 10;
    a += 10;
    a -= 10;
    a *= 10;
    a /= 10;
    a %= 10;

    // swapping:
    b = a + b;
    a = b - a;
    b = b - a;

    cout << "Your A value is: " << a;
    cout << "\nYour B value is: " << b;
    cout << "\nYour C value is: " << c;
}