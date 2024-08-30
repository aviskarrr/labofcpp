#include<iostream>
using namespace std;
float simpleinterest(float p=100, float t=1, float r = 10)
{
    return (p*t*r)/100;
}
int main()
{
    cout<<"Simple interest with default values"<<endl;
    cout<<simpleinterest()<<endl;
    cout<<"Simple interest with p=200,t=1 and r=10"<<endl;
    cout<<simpleinterest(200)<<endl;
    cout<<"Simple interest with p=200,t=2 and r=15"<<endl;
    cout<<simpleinterest(200,2,15)<<endl;
    return 0;
}
