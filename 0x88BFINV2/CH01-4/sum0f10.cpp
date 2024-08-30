#include<iostream>
using namespace std;
int main(){
    float *p;
    p = new float[10];
    for(int i=0;i<5;i++){
        cout<<"Enter the value of p["<<i<<"]:";
        cin>>p[i];
    }
    float sum =0;
    for(int i=0;i<5;i++){
        sum += p[i];
    }
    float avg=sum/5;
    cout<<"Sum of 5 elements is: "<<sum<<endl;
    cout<<"Average of 5 elements is: "<<avg<<endl;
    return 0;

}