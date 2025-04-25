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
    cout<<"Addition:"<<a+b<<endl;
}

void subtract(double a, double b) {
    cout<<"Subraction:"<<a-b<<endl;
}

void multiply(double a, double b) {
    cout<<"Multiplication:"<<a*b<<endl;
}

void divide(double a, double b) {
    cout<<"division:"<<a/b<<endl;
}

void mod(double a, double b) {
    cout<<"Modulus:"<<a%b<<endl;
}

void factorial(double a) {
     if (a < 0 || floor(a) != a) {
        cout << "Error: Factorial is not defined for negative or non-integer values!" << endl;
        return;
    }
    double result = 1;
    for (int i = 1; i <= static_cast<int>(a); i++) {
        result *= i;
    }
    cout << "Factorial: " << result << endl;
}

void logarithm(double a, double b) {
    if (a > 0 && base > 0 && base != 1) {
        cout << "Logarithm base " << base << " of " << a << ": " << log(a) / log(base) << endl;
    } else {
        cout << "Error: Invalid input for logarithm!" << endl;
    }
}
void absolute(double a) {
   cout << "Absolute value: " << fabs(a) << endl;
}
//power
void power(double a, double b) {
    cout << a << " raised to the power " << b << ": " << pow(a, b) << endl;
}

//  Square Root
void square_root(double a) {
    if (a >= 0)
        cout << "Square root of " << a << ": " << sqrt(a) << endl;
    else
        cout << "Square root: Undefined (negative input)" << endl;
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
    power(a, b);
    square_root(a);
}

int main() {
    calculator();
    return 0;
}
