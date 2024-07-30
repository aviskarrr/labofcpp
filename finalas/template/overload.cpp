#include <iostream>
using namespace std;

template <class T = float>
class hi {
    T t1;
public:
    // Constructor
    hi(T a) : t1(a) {}

    // Display function
    void display() {
        cout << t1 << endl;
    }
};

int main() {
    hi<> h(5.5); // Default template type is float
    hi<int> h1(2); // Explicitly using int as template type

    h.display();  // Outputs: 5.5
    h1.display(); // Outputs: 2

    return 0;
}
