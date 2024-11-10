#include <iostream>
#include <string>
using namespace std;

// Template class definition
template <typename T, typename U>
class Student {
private:
    T name;        // Name of the student (can be any type like string, const char*, etc.)
    int age;       // Age of the student (integer type)
    U course;      // Course the student is enrolled in (can be any type like string, etc.)
    string department; // Department of the student (string type)

public:
    // Constructor to initialize the student's data
    Student(T n, int a, U c, string dep) : name(n), age(a), course(c), department(dep) {}

    // Function to display the student details
    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    // Creating a Student object with string for name and course
    Student<string, string> student1("John Doe", 20, "Computer Science", "Engineering");

    // Display student1 details
    cout << "Student 1 Details:" << endl;
    student1.display();
    cout << endl;

    // Creating a Student object with const char* for name and course
    Student<const char*, const char*> student2("Alice Smith", 22, "Electrical Engineering", "Engineering");

    // Display student2 details
    cout << "Student 2 Details:" << endl;
    student2.display();
    cout << endl;

    return 0;
}
