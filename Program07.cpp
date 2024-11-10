#include <iostream>
using namespace std;

// Base class
class Base {
public:
    // Virtual function to calculate the sum of three numbers
    virtual int sum(int a, int b, int c) {
        return a + b + c;
    }
};

// Derived class
class Derived : public Base {
public:
    // Overriding the sum function in the derived class
    int sum(int a, int b, int c) override {
        return a + b + c + 10; // Adding an extra value to the sum
    }
};

int main() {
    // Create objects of base and derived classes
    Base* basePtr;
    Derived derivedObj;

    // Display sum using base class object (direct call)
    Base baseObj;
    cout << "Sum using base class object: " << baseObj.sum(5, 10, 15) << endl;

    // Display sum using derived class object (overridden function)
    basePtr = &derivedObj;
    cout << "Sum using derived class object: " << basePtr->sum(5, 10, 15) << endl;

    // Display sum using base class pointer pointing to derived class object (polymorphism)
    cout << "Sum using base class pointer pointing to derived class object: " << basePtr->sum(5, 10, 15) << endl;

    // Display sum using derived class object (direct call)
    cout << "Sum using derived class object directly: " << derivedObj.sum(5, 10, 15) << endl;

    return 0;
}
