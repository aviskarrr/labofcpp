#include<iostream>
using namespace std;

int &replacement(int &a,int &b){
            if(a>b){

                return a;
            }
            else{

                return b;
            }
}

int main(){
    int t1,t2;
    cout<<"enter two temperatures";
    cin >> t1 >> t2;
    replacement(t1, t2)=100;
    cout<<t1<<t2;
    return 0;
}