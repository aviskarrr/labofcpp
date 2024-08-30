#include<iostream>
using namespace std;
class c1{
    int a;
    public:
        c1(int b):a(b){
            // cout<<"assigned through constant";
        }
        void getdata(){
            cin>>a;
        }
        void showdata()const{
            cout<<a<<endl;
        }
};
int main(){
    c1 c(2);
    c.getdata();
    c.showdata();
    const c1 aaaa(3);
    // aaaa.getdata();//cant do this

    aaaa.showdata();
    return 0;
}