// WAP to overload plus operator to add two complex number
//  without using friend function.

#include <iostream>

class Complex {
    int real;
    int imag;
    public:
        Complex() : real(0), imag(0) {}
        Complex(int r, int i) : real(r), imag(i) {}


        Complex operator+(Complex c1) {
            return Complex(c1.real + real, c1.imag + imag);
        }

        void display() {
            std::cout << real << " + " << imag << "i" << std::endl;
        }
};




int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
