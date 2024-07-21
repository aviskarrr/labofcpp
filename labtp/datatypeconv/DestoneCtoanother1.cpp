//destination i.e fah
//constructor
#include<iostream>
class fah;
class cen{
    float c;
    public:
        cen(int a):c(a){}
        void display(){
            std::cout<<c;
        }
        float get_cen(){
            return c;
        }
};

class fah{
    float f;
    public:
        fah(int a=0):f(a){}
        void display(){
            std::cout<<f;
        }
        fah (cen c){
        float ct=c.get_cen();
        f=(9.0*ct/5.0)+ 32;

        }
};

int main(){
    cen c1(100);
    fah f1;
    f1=c1;
    f1.display();
    return 0;

}