#include <iostream>
using namespace std;
void display(){
    cerr<<"errorrrrrrr";
    exit(0);
}
void myFunction() throw(int) {  // Exception specification: can only throw int
    try {
        throw 3.14;  // Throwing a double
    } catch (int e) {
        cout << "Caught int: " << e << endl;
    }
}

int main() {
    set_unexpected(display);
    set_terminate(display);
    try {
        myFunction();
    } catch (...) {
        cout << "Caught an unexpected exception!" << endl;
    }
    set_unexpected(display);
    set_terminate(display);
    return 0;
}


//output
//terminate called after throwing an instance of 'double'