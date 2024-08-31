#include<iostream>
using namespace std;
class base1{
    public:
    void showdata(){
        cout<<"base1";
    }
};
class base2{
    public:
    void showdata(){
        cout<<"base2";
    }
};
class derived1:public base1, public base2{
    public:
    void showdata(){
        cout<<"derived1";
    }
};

int main(){
    derived1 d;
    d.base2::showdata();
    return 0;
}