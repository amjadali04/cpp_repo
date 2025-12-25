#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    // Swapping without using a third variable
    // Step 1: Store the sum of both numbers in 'a'
    a = a + b;

    // Step 2: Calculate the new value of 'b' (original value of 'a')
    b = a - b;

    // Step 3: Calculate the new value of 'a' (original value of 'b')
    a = a - b;

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

