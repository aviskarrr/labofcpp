#include<iostream>
using namespace std;
class sto{
    int id;
    char name;
    public:
        sto()=default;
        sto(int a, const char*c):id(a),name(*c){
            cout<<"constructor made";
        }
        ~sto(){
            cout<<"Object goes out of the scope";
        }
};

int main(){
    {sto s1(23,"kathmandu");}
    cout<<"byebye";
    return 0;
}