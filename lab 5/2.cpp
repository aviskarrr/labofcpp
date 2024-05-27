// Write a simple program that convert the temperature in degree centigrade to
// degree Fah/5renheit and vice-versa using the basic concept of classes and
// objects. Make separate class for centigrade and Fahrenheit which have the
// private member to hold the values and add conversion function in each class
// from centigrade to Fahrenheit.

#include<iostream>
class Fahrenheit;
class Centigrade
{
    int data;
    public:
        Centigrade(int a):data(a){}
        // Centigrade(int a){
        //     data =a;
        // }
        friend void Converter(Centigrade,Fahrenheit);



};

class Fahrenheit
{
    int data;
    public:
        Fahrenheit(int a):data(a){}
        friend void Converter(Centigrade,Fahrenheit);

};
void Converter(Centigrade C1, Fahrenheit F1){
    float faToCen;
    faToCen=(5.0/9.0)*(F1.data-32);
    float cenToFa;
    cenToFa = (C1.data * 9.0 / 5.0) + 32;
    std::cout<<"fa to cen"<<faToCen<<std::endl;
    std::cout<<"cen to fa"<<cenToFa<<std::endl;

}
int main(){
    int a=30,b=50;
    Centigrade A(a);
    Fahrenheit B(b);
    Converter(A,B);
}
