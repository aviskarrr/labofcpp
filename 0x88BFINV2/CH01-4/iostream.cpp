#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    char A[20]= "kathmandu";
    cout << A << std::endl;
    cout<<A<<setw(20)<<A<<endl;
    cout<<setw(15)<<setfill('*')<<A<<endl;
    return 0;   

}