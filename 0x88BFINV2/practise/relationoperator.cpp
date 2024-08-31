#include<iostream>
class A{
    float m;
    public:
        A()=default;
        A(float a):m(a){}
        friend bool operator >(A,A);
        friend bool operator ==(A,A);
    
};

bool operator >(A a1, A a2){
    if(a1.m>a2.m){
        return true;
    }
    else{
        return false;
    }
    
}

bool operator ==(A a1,A a2){
    if(a1.m==a2.m){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    A a1(5),a2(6),a3(5);
    if(a1>a2){
        std::cout<<"this shouldnot be printed";
    }
    if(a1==a3){
        std::cout<<"1. this should be printed";
    }
    if(a2>a3){
        std::cout<<"2. this should be printed";
    }
    return 0;

}