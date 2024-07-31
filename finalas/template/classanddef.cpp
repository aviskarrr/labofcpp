#include<iostream>
using namespace std;
template<class T=int>
class A{
    T a;
    public:
        void getdata(T b){
            cout<<b;
        }
};

int main(){
    A<>a1;
    a1.getdata(35);//prints 35
    a1.getdata(4556.777);//only prints ipto 4556 as its integer
    A<float>a2;
    a2.getdata(45.66);//45.66
    return 0;
}