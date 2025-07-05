#include <iostream>
#include<string>
using namespace std;

// Class to store lecture details
class Lecture {
public:
    string lecturerName;
    string subjectName;
    string courseName;

    // Constructor to set default values
    Lecture() {
        lecturerName = "";
        subjectName = "";
        courseName = "";
    }

    // Function to add lecture details
    void addDetails(string name, string subject, string course) {
        lecturerName = name;
        subjectName = subject;
        courseName = course;
    }

    // Function to show lecture details
    void showDetails(int number) {
        cout << "\nLecture " << number << " Details:" << endl;
        cout << "Lecturer Name : " << lecturerName << endl;
        cout << "Subject Name  : " << subjectName << endl;
        cout << "Course Name   : " << courseName << endl;
    }
};

// Main program
int main() {
    // Create 5 lecture objects
    Lecture lecture1, lecture2, lecture3, lecture4, lecture5;

    // Add details (fixed/hardcoded values)
    lecture1.addDetails("Amit Sharma", "Maths", "B.Sc");
    lecture2.addDetails("Priya Patel", "Physics", "B.Sc");
    lecture3.addDetails("Ravi Mehta", "English", "B.A");
    lecture4.addDetails("Anjali Desai", "Chemistry", "B.Sc");
    lecture5.addDetails("Arjun Verma", "History", "B.A");

    // Show all lecture details
    cout << "===== Lecture Management System =====" << endl;
    lecture1.showDetails(1);
    lecture2.showDetails(2);
    lecture3.showDetails(3);
    lecture4.showDetails(4);
    lecture5.showDetails(5);
    cout << "\nAll lecture details shown successfully." << endl;
    cout << "=====================================" << endl;

    return 0;
}
