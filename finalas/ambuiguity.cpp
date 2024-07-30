#include<iostream>
class A
{

public:
    void hi(){
        std::cout<<"hi from a";
    }
};

class B
{

public:
    void hi(){
        std::cout<<"hi from B";
    }
};


class C:public A,B
{

public:

    void hi(){
        B::hi();
    }
    // void hi(){
    //     std::cout<<"hi from a";
    // }
};

int main(){
    C c1;
    //c1.hi();//abmuiguity
    c1.A::hi();//one way
    c1.hi();
    //or we can define a function in class C like:
    // hi(){
    //     A::hi();
    // }
}

