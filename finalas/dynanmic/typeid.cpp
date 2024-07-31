#include<iostream>
#include<typeinfo>
using namespace std;
template<class T=int>
class A{
    T a;
    public:
        void display(T a){
            cout<<a<<endl;
            cout<<typeid(a).name()<<endl;
        }
};

int main(){
    A<> t1;
    A<>*t3;
    A<float> t2;
    t1.display(35.55);
    t2.display(35.55);

    cout<<typeid(t3).name();
    return 0;
}
