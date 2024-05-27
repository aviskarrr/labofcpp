// WAP to overload plus operator to add two complex number using friend
// function and without using friend function.

#include <iostream>

class Complex {
    int real;
    int imag;
    public:
        Complex() : real(0), imag(0) {}
        Complex(int r, int i) : real(r), imag(i) {}


        friend Complex operator+(Complex c1, Complex c2);

        void display() const {
            std::cout << real << " + " << imag << "i" << std::endl;
        }
};


Complex operator+(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
