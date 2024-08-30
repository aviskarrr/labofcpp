#include<iostream>
int swap(int *p, int *q){
    int temp;
    temp =*p;
    *p = *q;
    *q = temp;
}
int main(){
    int a = 20; int b = 30;
    std::cout<<"Before swapping: "<<a<<b<<std::endl;
    swap(&a,&b);
    std::cout<<"After swapping: "<<a<<b<<std::endl;
    return 0;
}