#include<iostream>
class A{
    public:
        void display(){
            std::cout<<"Class A"<<std::endl;
        }
};

class B{
    public:
        void display(){
            std::cout<<"Class B"<<std::endl;
        }
};

class C:public A,public B{
    public:
        void display(){ //basically this overrides the function and we cannot call the above two 
        // functions using the object of c so we can either call within this using scope resulation 
        // operator or we can also do what i did in the main function below
            std::cout<<"Class C"<<std::endl;
        }
};

int main(){
    C c;
//    c.display();//ambiguous
    c.A::display();
    c.B::display();
    return 0;
}