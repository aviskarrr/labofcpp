//centrigrade to fahrenheit
//define operator in source
#include<iostream>
class fah;
class cen{
    float c;
    public:
        cen(float a):c(a){}
        void display(){
            std::cout<<c;
        }
        
        operator fah() const;
};

class fah{
    float f;
    public:
        fah(float a=0):f(a){}
        void display(){
            std::cout<<f;
        }

};

cen::operator fah() const{  //hamile source 1'st mai declare gareko chha ra fah ma kunai constructor navayeko le(compiling time ma); class mai define garda it will give error
            float f;
            f=((c*9.0)/5.0)+32;
            return fah(f);
}
int main(){

    cen c1(100);
    fah f1;
    f1=c1;
    f1.display();
    return 0;



}
