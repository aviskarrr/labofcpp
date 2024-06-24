// Write a program to overload += operator. (You can overload this operator using
// Distance class as d1 += d2)
#include<iostream>
class Dis
{
    float meter;
    public:
        Dis()=default;
        Dis(float a):meter(a){}
        Dis& operator +=(Dis d2){
            this->meter+=d2.meter;
            return *this;//used for easeness in chaining
        }
        void display(){
            std::cout<<"distance: "<<meter<<std::endl;
        }

};


int main(){
    Dis d1(3.4), d2(4.78);
    d1+=d2; //as we have return by refrence, we can chain this part too, like d1+=d2+=d3, the final value is stored in d1
    d1.display();
    return 0;
}