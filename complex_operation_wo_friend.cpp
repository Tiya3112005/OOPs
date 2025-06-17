#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Default constructor
    Complex() {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    // Copy constructor
    Complex(const Complex &c) {
        real = c.real;
        imag = c.imag;
    }

    // Function to input complex number
    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Function to display complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    // Function for addition
    Complex add(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Function for subtraction
    Complex subtract(const Complex &c) {
        return Complex(real - c.real, imag - c.imag);
    }

    // Function for multiplication
    Complex multiply(const Complex &c) {
        float r = (real * c.real) - (imag * c.imag);
        float i = (real * c.imag) + (imag * c.real);
        return Complex(r, i);
    }

    // Function for division
    Complex divide(const Complex &c) {
        float denominator = c.real * c.real + c.imag * c.imag;
        float r = (real * c.real + imag * c.imag) / denominator;
        float i = (imag * c.real - real * c.imag) / denominator;
        return Complex(r, i);
    }
};

int main() {
    Complex c1, c2;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "Enter second complex number:\n";
    c2.input();

    Complex sum = c1.add(c2);
    Complex diff = c1.subtract(c2);
    Complex prod = c1.multiply(c2);
    Complex quot = c1.divide(c2);

    cout << "\nAddition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    cout << "Multiplication: ";
    prod.display();

    cout << "Division: ";
    quot.display();

    return 0;
}

