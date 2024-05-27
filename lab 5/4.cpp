// WAP to overload an increment operator (++) in prefix notation.
//WAP to overload unary minus operator and return type complex.
#include<iostream>
class data{
    int r;
    public:
        data()= default;
        data(int a):r(a){}
        data operator ++(){
            ++r;
            return *this;
        }
        void display(){
            std::cout<<r;
        }
};

int main(){
    data c1(5);
    ++c1;
    c1.display();
    return 0;
}