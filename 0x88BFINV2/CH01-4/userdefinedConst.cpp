#include<iostream>
int main(){
    const int x = 10;
  //  x = 20;//error: assignment of read-only variable 'x'
    std::cout << "Value of x: " << x << std::endl;
    return 0;
}