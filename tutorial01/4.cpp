// Write a program that uses pass by reference to change meter to centimeter using pass by
// reference along with the namespace
#include<iostream>
namespace Converter
{
    void convert(float &a){
        a*=100;
    }
} // namespace Converter

int main(){
    float meter;
    std::cin>>meter;
    Converter::convert(meter);
    std::cout<<meter<<std::endl;
    return 0;

}