#include<iostream>
int main(){
    int *p;//for single variable
    p = new int;
    *p = 10;
    std::cout << *p << std::endl;
    int *ptr;
    ptr = new int[5]; //for array
    for(int i=0; i<5; i++){
        ptr[i] = i+1;
    }
    for(int i=0;i<5;i++){
        std::cout<<ptr[i]<<std::endl;
    }
    delete p;
    delete[] ptr;
    return 0;
}