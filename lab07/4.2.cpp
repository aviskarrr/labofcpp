#include <iostream>
using namespace std;


class Vehicle {
public:
    virtual void display() const = 0; 
};


class Car : virtual public Vehicle {
public:
    void display() const override {
        cout << "Car" << endl;
    }
};


class Truck : virtual public Vehicle {
public:
    void display() const override {
        cout << "Truck" << endl;
    }
};


class Bus : public Car, public Truck {
public:
    void display() const override {
        cout << "Bus" << endl;
    }
};

int main() {
    Car car;
    Truck truck;
    Bus bus;

    car.display();   // Car
    truck.display(); // Truck
    bus.display();   // Bus

    return 0;
}
