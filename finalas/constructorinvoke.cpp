#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"this is a";
    }
};

class B{
    public:
    B(){
        cout<<"this is b";
    }
};

class C:public B, public A{
    public:
    C(){
        cout<<"this is c";
    }
};

int main(){
    C c1;
    return 0;
}