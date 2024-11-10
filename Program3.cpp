#include <iostream>
#include <string>
using namespace std;

// Forward declaration of the friend function
class Student; // Declare Student class for friend function

// Student class definition
class Student {
private:
    string name;
    int age;
    string department;
    string course;

public:
    // Constructor to initialize the student details
    Student(string n, int a, string dep, string c) : name(n), age(a), department(dep), course(c) {}

    // Declare the function displayStudentDetails as a friend
    friend void displayStudentDetails(const Student& student);
};

// Friend function definition
void displayStudentDetails(const Student& student) {
    // Accessing private members of Student class
    cout << "Student Details:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Department: " << student.department << endl;
    cout << "Course: " << student.course << endl;
}

int main() {
    // Create a Student object with some details
    Student student1("John Doe", 21, "Computer Science", "Software Engineering");

    // Call the friend function to display student details
    displayStudentDetails(student1);

    return 0;
}
