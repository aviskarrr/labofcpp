#include<iostream>
template<class T>
class Base{
    T a;
public:
    Base()=default;
    Base(T x):a(x){}
    void display(){
        std::cout<<"member of a: "<<a<<std::endl;
    }
    
};
template<class T1>
class Derived:public Base<int>{
    T1 d;
    public:
    Derived()=default;
    Derived(T1 x, int y):d(x),Base<int>(y){
    }
    void display(){
        Base<int>::display();
        std::cout<<"member of d: "<<d<<std::endl;

    }
};

int main(){
    Derived<char> d('A', 10);
    d.display();
    return 0;
}