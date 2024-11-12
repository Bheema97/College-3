#include <iostream>
using namespace std;

// Function to find the maximum of two integers
int maxValue(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find the maximum of two floats
float maxValue(float a, float b) {
    return (a > b) ? a : b;
}

// Function to find the maximum of two doubles
double maxValue(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    int int1 = 10, int2 = 20;
    float float1 = 10.5f, float2 = 5.5f;
    double double1 = 10.75, double2 = 15.25;

    // Finding maximum values
    cout << "Maximum Values:" << endl;
    cout << "Int: " << maxValue(int1, int2) << endl;
    cout << "Float: " << maxValue(float1, float2) << endl;
    cout << "Double: " << maxValue(double1, double2) << endl;

    return 0;
}
