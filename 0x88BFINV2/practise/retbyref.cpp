#include<iostream>
using namespace std;
int& sum(int &a){
    return a;
}
int main(){
    int a=10;
    int b;
    b=sum(a);
    cout<<b;
    sum(a)=100;
    b= sum(a);
    cout<<b;
    return 0;
}