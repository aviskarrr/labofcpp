#include<iostream>
using namespace std;
void thr(){
    throw(1.1);

}
void rethr(){
    try
    {
        thr();
    }
    catch(double)
    {
        throw 1;//rethrow
    }
}

int main(){
    try
    {
        rethr();
    }
    catch(int)
    {
        cout<<"catched rethrown error";
    }
    return 0;

}