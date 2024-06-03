// Create a class named Centigrade and another class name Fahrenheit. Write a
// program to convert object of Centigrade class into object of another class
// Fahrenheit.
// i. Define the conversion routine in source class.
// ii. Define the conversion routine in destination class
// (For centigrade
//cel to fah
#include<iostream>
class Centigrade{

    public:
        int data=37;


};

class Fahrenheit
{
    int data;
    public:
        Fahrenheit()=default;
        Fahrenheit(Centigrade c1){
            std::cout<<c1.data;
            data = (c1.data * 9 / 5) + 32;
        }
        void display(){
            std::cout<<data;
        }

};

int main(){
    Centigrade c1;
    Fahrenheit f1=c1;
    f1.display();
    return 0;
}