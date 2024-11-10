#include <iostream>
using namespace std;

// Function template to calculate the sum of two values
template <typename T>
T sum(T a, T b) {
    return a + b;
}

// Function template to calculate the sum of three values (overloaded version)
template <typename T>
T sum(T a, T b, T c) {
    return a + b + c;
}

// Function template to calculate the sum of four values (overloaded version)
template <typename T>
T sum(T a, T b, T c, T d) {
    return a + b + c + d;
}

int main() {
    // Test with integer values
    int intResult = sum(10, 20);          // Calls sum(int, int)
    cout << "Sum of two integers: " << intResult << endl;

    int intResult3 = sum(10, 20, 30);     // Calls sum(int, int, int)
    cout << "Sum of three integers: " << intResult3 << endl;

    int intResult4 = sum(10, 20, 30, 40); // Calls sum(int, int, int, int)
    cout << "Sum of four integers: " << intResult4 << endl;

    // Test with double values
    double doubleResult = sum(1.5, 2.5);          // Calls sum(double, double)
    cout << "Sum of two doubles: " << doubleResult << endl;

    double doubleResult3 = sum(1.1, 2.2, 3.3);    // Calls sum(double, double, double)
    cout << "Sum of three doubles: " << doubleResult3 << endl;

    double doubleResult4 = sum(1.5, 2.5, 3.5, 4.5); // Calls sum(double, double, double, double)
    cout << "Sum of four doubles: " << doubleResult4 << endl;

    return 0;
}
