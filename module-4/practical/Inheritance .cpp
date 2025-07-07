// 3. Inheritance Example
// o Write a program that implements inheritance using a base class Person and derived
// classes Student and Teacher. Demonstrate reusability through inheritance.
// o Objective: Learn the concept of inheritance.

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void getDetails()
    {
        cout << "Enter name: ";
        cin.ignore();       // handle newline
        getline(cin, name); // Accept full name
        cout << "Enter age: ";
        cin >> age;
    }

    void showDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
public:
    string studentID;
    void getStudentDetails()
    {
        getDetails();
        cout << "Enter Student ID: ";
        cin >> studentID;
    }

    void showStudentDetails()
    {
        showDetails();
        cout << "Student ID: " << studentID << endl;
    }
};

class Teacher : public Person
{
public:
    string subject;
    void getTeacherDetails()
    {
        getDetails();
        cout << "Enter Subject: ";
        cin >> subject;
    }

    void showTeacherDetails()
    {
        showDetails();
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    Student s;
    Teacher t;

    cout << "\nEnter Student Details" << endl;
    s.getStudentDetails();

    cout << "\n";

    cout
        << "\nEnter Teacher Details" << endl;
    t.getTeacherDetails();

    cout << "\n";

    cout << "\nStudent Details " << endl;
    s.showStudentDetails();

    cout << "\n";

    cout << "\nTeacher Details " << endl;
    t.showTeacherDetails();
}