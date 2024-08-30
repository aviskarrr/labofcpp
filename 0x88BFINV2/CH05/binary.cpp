#include<iostream>
class complex{
    double re,im;
    public:
    complex():re{0},im{0}{}
    complex(double r,double i):re{r},im{i}{}
    friend complex operator+(complex&, complex &);
    void display(){
        std::cout<<re<<"+j"<<im<<std::endl;
    }
};

complex operator+(complex &c1, complex &c2){
    complex temp;
    temp.re=c1.re+c2.re;
    temp.im=c1.im+c2.im;
    return temp;
}
int main(){
    complex c1(1,2),c2(3,4);
    complex c3=c1+c2;
    c3.display();
    return 0;
}