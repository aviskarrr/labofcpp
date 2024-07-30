#include<iostream>
using namespace std;
template <class T>
T add(T a, T b){
    return a+b;
}

int main(){
    cout<<add(3,4)<<endl;
    cout<<add(5.2,4.5);
    return 0;
}