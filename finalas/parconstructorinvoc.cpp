#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"helo im A\n";
        cout<<"helo im A but paramaterized\n";
    }

    A(int a){
        cout<<"helo im A but paramaterized\n";
    }
};

class B:public A{
    public:
    B(){
        cout<<"helo im B\n";
    }

    B(int a):A(a){//first invokes paramaterized of a and then b
        cout<<"helo im B but paramaterized\n";
    }
};

int main(){
    B b1;
    B b2(2);
    return 0;
}