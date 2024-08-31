#include<iostream>
int b=2;
class A{
    static int hi;
    int h;
    public:
        A(){

        }
        static void stat(){
            std::cout<<hi<<b;
            ++hi;++b;
        }
};

int A::hi=3;

int main(){
    A a;
    a.stat();
    a.stat();
    return 0;
}