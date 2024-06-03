//not so much complete
//left to refine :)

#include<iostream>

class Fahrenheit {
public:

    Fahrenheit() = default;
    int data = 24;

    Fahrenheit(int fah_data) {
        data = fah_data;
    }

    void display() {
        std::cout << "Fahrenheit: "<<data ;
    }
};
class Centigrade {
    int data=24;
public:
    Centigrade() = default;
    Centigrade(int cel_data) {
        data = cel_data;
    }

    operator Fahrenheit() {
        int fah_data = (data * 9 / 5) + 32;
        return Fahrenheit(fah_data);
    }

    void display() {
        std::cout << "Centigrade: " << data;
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
