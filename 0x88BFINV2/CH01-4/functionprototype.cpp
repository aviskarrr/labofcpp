#include<iostream>
void print(int a, int b);//function prototype
int main(){
    int a = 10, b = 20;
    print(a,b);
    return 0;
}

void print(int a, int b){
    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Value of b: " << b << std::endl;
}