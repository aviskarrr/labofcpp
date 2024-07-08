#include <iostream>
using namespace std;

// Base class: Base
class Base {
protected:
    int baseData;

public:
    Base(int data) : baseData(data) {}

    // Function to increase baseData
    void increaseData(int increment) {
        baseData += increment;
    }

    // Virtual function that can be overridden
    virtual void printData() {
        cout << "Base Data: " << baseData << endl;
    }
};

// Derived class: Derived
class Derived : public Base {
private:
    int derivedData;

public:
    Derived(int base, int derived) : Base(base), derivedData(derived) {}

    // Override function to increase derivedData and baseData
    void increaseData(int baseIncrement, int derivedIncrement) {
        Base::increaseData(baseIncrement); // Call base class function
        derivedData += derivedIncrement;   // Increase derivedData
    }

    // Override printData to include derivedData
    void printData() override {
        cout << "Base Data: " << baseData << ", Derived Data: " << derivedData << endl;
    }
};

int main() {
    // Create objects of Base and Derived classes
    Base b(10);
    Derived d(20, 30);

    // Increase data using overridden functions
    b.increaseData(5);
    d.increaseData(5, 10);

    // Print data using overridden printData functions
    cout << "After increasing data:" << endl;
    b.printData();
    d.printData();

    return 0;
}
