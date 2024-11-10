#include <iostream>
using namespace std;

// Forward declarations of classes
class A;
class B;
class C;

// Friend function declaration
void displayDetails(const A& objA, const B& objB, const C& objC);

// Class A with private and protected data members
class A {
private:
    int privateA;
protected:
    int protectedA;

public:
    // Constructor to initialize the private and protected members
    A(int pA, int prA) : privateA(pA), protectedA(prA) {}

    // Friend function declaration
    friend void displayDetails(const A& objA, const B& objB, const C& objC);
};

// Class B with private and protected data members
class B {
private:
    int privateB;
protected:
    int protectedB;

public:
    // Constructor to initialize the private and protected members
    B(int pB, int prB) : privateB(pB), protectedB(prB) {}

    // Friend function declaration
    friend void displayDetails(const A& objA, const B& objB, const C& objC);
};

// Class C with private and protected data members
class C {
private:
    int privateC;
protected:
    int protectedC;

public:
    // Constructor to initialize the private and protected members
    C(int pC, int prC) : privateC(pC), protectedC(prC) {}

    // Friend function declaration
    friend void displayDetails(const A& objA, const B& objB, const C& objC);
};

// Friend function definition
void displayDetails(const A& objA, const B& objB, const C& objC) {
    cout << "Class A - Private: " << objA.privateA << ", Protected: " << objA.protectedA << endl;
    cout << "Class B - Private: " << objB.privateB << ", Protected: " << objB.protectedB << endl;
    cout << "Class C - Private: " << objC.privateC << ", Protected: " << objC.protectedC << endl;
}

int main() {
    // Create objects of classes A, B, and C
    A objA(10, 20);
    B objB(30, 40);
    C objC(50, 60);

    // Call the friend function to display details
    displayDetails(objA, objB, objC);

    return 0;
}
