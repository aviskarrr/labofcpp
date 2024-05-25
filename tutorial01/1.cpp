// Write a program to calculate and display the cube of integer, float and double
// number using function overloading (passing single argument to function).
#include<iostream>
void cube(int a){
    int b=a*a*a;
    std::cout<<"cube is " <<b<<std::endl;
}
void cube(float a){
    float b=a*a*a;
    std::cout<<"cube is " <<b<<std::endl;
}
void cube(double a){
    double b=a*a*a;
    std::cout<<"cube is " <<b<<std::endl;
}
int main(){
    int l=3;
    float m=5.5;
    double n=7999.23;
    cube(l);
    cube(m);
    cube(n);
    return 0; 
}