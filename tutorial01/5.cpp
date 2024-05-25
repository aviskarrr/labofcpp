// Create a class mdistance to store the values in meter and centimeter and class edistance to
// store values in feet and inches. Perform addition of object of mdistance and object of
// edistance by using friend function.

#include <iostream>

class edistance; // Forward declaration

class mdistance {
    int m, cm;
    public:
        mdistance(int a, int b){
            m=a; cm=b; 
        }

        friend void add(mdistance, edistance);
};

class edistance {
    int ft, inch;
    public:
        edistance(int a, int b){
            ft=a; inch=b; 
        }

        friend void add(mdistance, edistance);
};

void add(mdistance a, edistance b) {
    int fttom = b.ft * 0.3048;
    int inchtocm = b.inch * 2.54;
    
    int total_m = a.m + fttom;
    int total_cm = a.cm + inchtocm;
    if (total_cm >= 100) {
        total_m += total_cm / 100;
        total_cm %= 100;
    }

    std::cout << "Total distance: " << total_m << " meters " << total_cm << " centimeters" << std::endl;
}

int main() {
    mdistance m_obj(2, 30);
    edistance e_obj(3, 12);
    add(m_obj, e_obj);
    return 0;
}
