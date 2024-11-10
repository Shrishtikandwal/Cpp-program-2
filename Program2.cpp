#include <iostream>
#include <cmath>
using namespace std;

// Forward declaration of the friend class
class PrimeChecker;

class Number {
private:
    int num;

public:
    // Constructor to initialize num
    Number(int n) : num(n) {}

    // Function to get the value of num (for internal use)
    int getNum() const {
        return num;
    }

    // Declare PrimeChecker as a friend class
    friend class PrimeChecker;
};

// Friend class that checks if the number is prime
class PrimeChecker {
public:
    // Function to check if the number is prime
    bool isPrime(const Number& number) {
        int n = number.getNum();  // Accessing private data of Number class
        
        if (n <= 1) {
            return false; // Numbers less than or equal to 1 are not prime
        }

        // Check divisibility from 2 to sqrt(n)
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                return false;  // Not a prime number
            }
        }
        return true;  // Prime number
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Create an object of Number class
    Number number(num);

    // Create an object of PrimeChecker class
    PrimeChecker checker;

    // Check if the number is prime
    if (checker.isPrime(number)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
