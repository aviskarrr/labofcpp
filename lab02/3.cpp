//read 2 numbers from user and print largest among them
#include<iostream>
using namespace std;
class largest{
    int large;
    int a,b;
    public:
        void getdata(){
            cout<<"enter two numbers\n";
            cin>>a>>b;
        }
        void calc(){
            large=(a > b) ? a : b;
            cout<<"largest number is: "<<large;
        }
};

int main(){
    largest l1;
    l1.getdata();
    l1.calc();
}