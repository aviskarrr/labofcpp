#include<iostream>
void swap (int &a, int &b){
    int temp = a;
    a = b;
    b=temp;
}

int& returns_sum(int&a,int&b ){
    return a;
    
}
int main(){
    int a = 10,b=20;
    swap(a,b);
    std::cout<<a<<b;
    int c = returns_sum(a,b);
    returns_sum(a,b)= 300;
    std::cout<<returns_sum(a,b);

}