#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor called" << endl;
    }
    
    // Virtual destructor
    virtual ~Base() {
        cout << "Base class destructor called" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called" << endl;
    }

    ~Derived() {
        cout << "Derived class destructor called" << endl;
    }
};

int main() {
    // Create a Derived object but delete it using a Base pointer
    Base* obj = new Derived();
    delete obj;  // Properly calls Derived's destructor followed by Base's destructor
    
    return 0;
}
