#include <iostream>
using namespace std;

// Define a class with public members
class Student {
public:
    // Public data members
    string name;
    int age;

    // Public member function
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create an object of Student
    Student s1;

    // Accessing public members directly
    s1.name = "Alice";
    s1.age = 20;

    // Calling public function
    s1.displayInfo();

    return 0;
}
