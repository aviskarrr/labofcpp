#include<iostream>
int main(){
    int a=35.0;
    int *b=&a;
    float *c = reinterpret_cast<float*>(b);
    std::cout<<*c;
    return 0;
}