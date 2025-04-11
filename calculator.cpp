#include <iostream>
#include <cmath>
using namespace std;

pair<double, double> get_input() {
    double a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    return {a, b};
}

// Function placeholders for team members to implement (8 functions only)
void add(double a, double b) {
    // To be implemented by a team member
}

void subtract(double a, double b) {
    // To be implemented by a team member
}

void multiply(double a, double b) {
    // To be implemented by a team member
}

void divide(double a, double b) {
    // To be implemented by a team member
}

void mod(double a, double b) {
    // To be implemented by a team member
}

void factorial(double a) {
    // To be implemented by a team member
}

void logarithm(double a, double b) {
    // To be implemented by a team member
}

void absolute(double a) {
    // To be implemented by a team member
}

void calculator() {
    cout << "\n Calculator Program" << endl;
    auto [a, b] = get_input();
    cout << "Values received: a = " << a << ", b = " << b << endl;

    add(a, b);
    subtract(a, b);
    multiply(a, b);
    divide(a, b);
    mod(a, b);
    factorial(a);
    logarithm(a, b);
    absolute(a);
}

int main() {
    calculator();
    return 0;
}
