#include<iostream>
inline void si(float p, float r, float t);//function prototype //we can do this here too
inline void si(float p, float r ,float t){
    float s = (p*r*t)/100;
    std::cout<<"Simple Interest is: "<<s<<std::endl;
}
int main(){
    float a = 20; float b = 200; float c = 200;
    si(a,b,c);
    return 0;
}