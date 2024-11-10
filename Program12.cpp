#include <iostream>
#include <string>
using namespace std;

// Structure template to store student data
template <typename T, typename U>
struct Student {
    T name;        // Name of the student (could be string, const char*, etc.)
    int age;       // Age of the student (integer type)
    U course;      // Course the student is enrolled in (could be string, const char*, etc.)
    string department; // Department (string type)

    // Constructor to initialize the student data
    Student(T n, int a, U c, string dep) : name(n), age(a), course(c), department(dep) {}

    // Function to display student details
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    // Create a Student object with string for name and course
    Student<string, string> student1("John Doe", 20, "Computer Science", "Engineering");

    // Display student1 details
    cout << "Student 1 Details:" << endl;
    student1.display();
    cout << endl;

    // Create a Student object with const char* for name and course
    Student<const char*, const char*> student2("Alice Smith", 22, "Electrical Engineering", "Engineering");

    // Display student2 details
    cout << "Student 2 Details:" << endl;
    student2.display();
    cout << endl;

    return 0;
}
