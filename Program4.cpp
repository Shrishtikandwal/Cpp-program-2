#include <iostream>
using namespace std;

// Forward declarations of classes
class A;
class B;
class C;

// Friend class declaration
class FriendClass {
public:
    // Function to access private and protected data members of class A
    void displayA(const A& objA);

    // Function to access private and protected data members of class B
    void displayB(const B& objB);

    // Function to access private and protected data members of class C
    void displayC(const C& objC);
};

// Class A with private and protected data members
class A {
private:
    int privateA;

protected:
    int protectedA;

public:
    // Constructor to initialize the private and protected members
    A(int pA, int prA) : privateA(pA), protectedA(prA) {}

    // Friend class declaration
    friend class FriendClass;
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

    // Friend class declaration
    friend class FriendClass;
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

    // Friend class declaration
    friend class FriendClass;
};

// FriendClass function definitions
void FriendClass::displayA(const A& objA) {
    cout << "Class A - Private: " << objA.privateA << ", Protected: " << objA.protectedA << endl;
}

void FriendClass::displayB(const B& objB) {
    cout << "Class B - Private: " << objB.privateB << ", Protected: " << objB.protectedB << endl;
}

void FriendClass::displayC(const C& objC) {
    cout << "Class C - Private: " << objC.privateC << ", Protected: " << objC.protectedC << endl;
}

int main() {
    // Create objects of classes A, B, and C
    A objA(10, 20);
    B objB(30, 40);
    C objC(50, 60);

    // Create an object of FriendClass
    FriendClass friendObj;

    // Display private and protected members using FriendClass functions
    friendObj.displayA(objA);
    friendObj.displayB(objB);
    friendObj.displayC(objC);

    return 0;
}
