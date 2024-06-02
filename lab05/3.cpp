//WAP to overload unary minus operator and return type complex.
#include<iostream>
class complex{
    int r,i;
    public:
        complex()= default;
        complex(int a,int b):r(a),i(b){}
        complex operator -(){
            r=-r;
            i=-i;
            return *this;
        }
        void display(){
            std::cout<<r<<"+i"<<i;
        }
};

int main(){
    complex c1(5,6),c2;
    c2=-c1;
    c2.display();
    return 0;
}