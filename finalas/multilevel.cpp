#include<iostream>
class A
{
    public:
        void displayA(){
            std::cout<<"hi from A\n";
        }
};
class B:public A
{
    public:
        void displayB(){
            displayA();
            std::cout<<"hi from B\n";
        }
};
class C:public B
{
    public:
        void displayC(){
            displayB();
            std::cout<<"hi from C\n";
        }
};

int main(){
    C c1;
    c1.displayA();
    c1.displayB();
    c1.displayC();
    return 0;
}