#include<iostream>
using namespace std;
// template<class T=int\\>
void example01(int a, int b){
    if(b==0){
        throw 01;
    }
    if(b<0){
        throw 1.1;
    }
    if(a==0&&b==0){
        throw "both";
    }
}

int main(){
    try{
        example01(5,0);
        example01(0,0);
        example01(1,-1);
    }
    catch(int){
        cout<<"b=0";
    }

    try{
        example01(0,0);
    }
    catch(...){
        cout<<"either both 0 or b less than 0"; 
    }
    return 0;
}