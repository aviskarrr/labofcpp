#include <iostream>

class A {
public:
    A(int a) {
        std::cout << a << std::endl;
    }
    ~A() {
        std::cout << "A destroyed" << std::endl;
    }
};

class B : public A {
public:
    B(int a) : A(a) {
        std::cout << "constructor of B" << std::endl;
    }
    ~B() {
        std::cout << "B destroyed" << std::endl;
    }
};

int main() {
    B b1(10);
    return 0;
}



/*
************************************************************************************************************
::NOTE::
Member initializer list is the only way to initialize objects having constant or reference members. e.g, 
class elx {const int data1; 
    int &data2; 
    public: 
        elx(int a, int &b): data1(a),data2(b) {} //parameter constructor 
        elx(int a, int &b) //error 
        {data1=a; data2=b;} //this will not work for constant data member or reference members. 
}; 
************************************************************************************************************
*/

