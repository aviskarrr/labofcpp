#include<iostream>
#include<typeinfo>
class hello{

};
int main(){
    hello h;
    float a;
    std::cout<<typeid(h).name();
}