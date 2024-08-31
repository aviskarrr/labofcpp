#include<iostream>

class Base {
public:
    // Virtual destructor
    virtual ~Base() {
        std::cout << "Base class destructor called" << std::endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        std::cout << "Derived class destructor called" << std::endl;
    }
};

int main() {
    Base* ptr = new Derived();
    delete ptr; // This will correctly call the destructor of Derived, followed by Base

    return 0;
}


// A virtual destructor is used in C++ when you have a base class with a destructor that might be overridden by derived 
//classes. If you delete an object of a derived class through a pointer of the base class type, the destructor of
// the base class should be virtual to ensure that the destructor of the derived class is called properly.