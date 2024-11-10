#include <iostream>
using namespace std;

// Define the Student class
class Student {
public:
    int num1, num2;  // Two integers to hold the numbers

    // Constructor to initialize num1 and num2
    Student(int a, int b) {
        num1 = a;
        num2 = b;
    }

    // Inline function to calculate and display the sum of num1 and num2
    inline void displaySum() {
        cout << "Sum of " << num1 << " and " << num2 << " is: " << (num1 + num2) << endl;
    }
};

int main() {
    // Create a Student object with two numbers
    Student student(5, 10);

    // Call the inline function to display the sum
    student.displaySum();

    return 0;
}
