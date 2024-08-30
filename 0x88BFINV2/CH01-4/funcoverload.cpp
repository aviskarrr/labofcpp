#include<iostream>
using namespace std;
void area(int a){
    cout<<"Area of square is: "<<a*a<<endl;
}
void area(int a, int b){
    cout<<"Area of rectangle is: "<<a*b<<endl;
}
int main(){
    int a;int b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    area(a);
    area(a,b);
    return 0;
}