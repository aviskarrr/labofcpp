#include<iostream>
namespace hello{
    void say_hello(){
        std::cout << "Hello, World!" << std::endl;
    }       

    int roll;
    void set_roll(int r){
        roll = r;
    }
    void display_roll(){
        std::cout << "Roll: " << roll << std::endl;
    }
}


int main(){
    hello::say_hello();
    hello::set_roll(10);
    hello::display_roll();
    return 0;
}