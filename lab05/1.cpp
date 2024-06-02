// Create a class first with data member data1 and another class second with data
// member data2. Display the largest number. Use friend function.
#include<iostream>
using namespace std;
class B;
class A{

    int data1;
    public:
        A(){
            cin>>data1;
        }
        friend void hello(A,B);
};
class B{
    int data2;
    public:
        B(){
            cin>>data2;
        }
        friend void hello(A,B);
};
 
void hello(A a1, B b1){
    if(a1.data1>b1.data2){
        cout<<a1.data1;
    }
    else if(a1.data1<b1.data2){
        cout<<b1.data2;
    }
    else{
        cout<<"same";
    }

}
int main(){
    A a;
    B b;
    hello(a,b);
    return 0;
}