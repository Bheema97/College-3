#include <iostream>
using namespace std;

// Function to add two integers
int operate(int a, int b) {
    return a + b;
}

// Function to add two floats
float operate(float a, float b) {
    return a + b;
}

// Function to add two doubles
double operate(double a, double b) {
    return a + b;
}

// Function to multiply two integers
int operate(int a, int b, char operation) {
    return a * b;
}

// Function to multiply two floats
float operate(float a, float b, char operation) {
    return a * b;
}

// Function to multiply two doubles
double operate(double a, double b, char operation) {
    return a * b;
}

// Function to subtract two integers
int operate(int a, int b, int operation) {
    return a - b;
}

// Function to subtract two floats
float operate(float a, float b, float operation) {
    return a - b;
}

// Function to subtract two doubles
double operate(double a, double b, double operation) {
    return a - b;
}

int main() {
    int int1 = 10, int2 = 5;
    float float1 = 10.5f, float2 = 5.5f;
    double double1 = 10.75, double2 = 5.25;

    // Addition
    cout << "Addition:" << endl;
    cout << "Int: " << operate(int1, int2) << endl;
    cout << "Float: " << operate(float1, float2) << endl;
    cout << "Double: " << operate(double1, double2) << endl;

    // Multiplication
    cout << "Multiplication:" << endl;
    cout << "Int: " << operate(int1, int2, 'm') << endl;
    cout << "Float: " << operate(float1, float2, 'm') << endl;
    cout << "Double: " << operate(double1, double2, 'm') << endl;

    // Subtraction
    cout << "Subtraction:" << endl;
    cout << "Int: " << operate(int1, int2, 0) << endl;
    cout << "Float: " << operate(float1, float2, 0.0f) << endl;
    cout << "Double: " << operate(double1, double2, 0.0) << endl;

    return 0;
}
