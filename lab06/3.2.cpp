//PART TWO
// Create a class named Centigrade and another class name Fahrenheit. Write a
// program to convert object of Centigrade class into object of another class
// Fahrenheit.
// i. Define the conversion routine in source class.
// ii. Define the conversion routine in destination class
// (For centigrade
//cel to fah

#include<iostream>

class Fahrenheit {
public:
    int data;

    Fahrenheit() : data(24) {}

    Fahrenheit(int fah_data) : data(fah_data) {}

    void display() {
        std::cout << "Fahrenheit: " << data << std::endl;
    }
};

class Centigrade {
    int data;
public:
    Centigrade() : data(24) {}

    Centigrade(int cel_data) : data(cel_data) {}

    operator Fahrenheit() {
        int fah_data = (data * 9 / 5) + 32;
        return Fahrenheit(fah_data);
    }

    void display() {
        std::cout << "Centigrade: " << data << std::endl;
    }
};

int main() {
    Centigrade c1; 
    Fahrenheit f1; 

    f1.display();
    c1.display();

    f1 = c1;      
    f1.display();

    return 0;
}
