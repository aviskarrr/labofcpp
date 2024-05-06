#include<iostream>
void prime(int,int);
using namespace std;

int main(){
    int a,b;
    cout<<"enter any two number\n";
    cin>>a>>b;
    prime(a,b);
}
void prime(int a,int b){
    int i,j;
    int count;
    for(int i=a;i<=b;i++){
        count =0;
        for(j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            cout<<i<<"\n";
        }
    }
}