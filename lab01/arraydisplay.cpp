#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int i,j;
    int sum;
    for (i=0;i<10;i++){
        cout<<"Enter term "<<i+1<<": ";
        cin>>arr[i];
    }
    sum=0;
    for(j=0;j<10;j++){
        sum+=arr[j];
    }
    cout<<"Sum of the given numbers is "<< sum;
    return 0;
}