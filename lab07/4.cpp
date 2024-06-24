// Write a program to show the use of virtual base class and pure virtual
// function.

//pure virtual function


#include<iostream>
using namespace std;
class car{
    public:
        virtual void shawn()=0;
};
class honda:public car{
    public:
        void shawn(){
            cout<<"honda";
        }
};
class suzuki:public car{
    public:
        void shawn(){
            cout<<"suzuki";
        }
};
int main(){
    car *c[2];
    c[0]=new honda; 
    c[1]=new suzuki;
    c[0]->shawn();
    c[1]->shawn();
    delete c[0];delete c[1];
    return 0;
}