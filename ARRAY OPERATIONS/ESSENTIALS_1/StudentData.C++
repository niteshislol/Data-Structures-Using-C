#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string rollNumber;
    float marks;

public:
    // Constructor to initialize student data
    Student(string studentName, int studentAge, string studentRollNumber, float studentMarks) {
        name = studentName;
        age = studentAge;
        rollNumber = studentRollNumber;
        marks = studentMarks;
    }

    // Method to set student data
    void setStudentData(string studentName, int studentAge, string studentRollNumber, float studentMarks) {
        name = studentName;
        age = studentAge;
        rollNumber = studentRollNumber;
        marks = studentMarks;
    }

    // Method to display student data
    void displayStudentData() const {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }

    // Method to calculate grade based on marks
    char calculateGrade() const {
        if (marks >= 90) return 'A';
        else if (marks >= 75) return 'B';
        else if (marks >= 50) return 'C';
        else return 'F';
    }
};

int main() {
    // Creating a student object
    Student student1("John Doe", 20, "R12345", 85.5);

    // Displaying student data
    cout << "Student Details:" << endl;
    student1.displayStudentData();

    // Displaying grade
    cout << "Grade: " << student1.calculateGrade() << endl;

    return 0;
}