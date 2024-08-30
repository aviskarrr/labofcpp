#include<iostream>
using namespace std;
class hello
{
    float r;
    float i;
    static int count;
    public:
        void getdata(){
            cin>>r>>i;
            count++;
        }
        void showdata(){
            cout<<r<<i<<"i"<<endl;
            cout<<"count"<<count<<endl;
        }

};
int hello::count;
int main(){
    hello h1,h2,h3;
    h1.getdata();
    h1.showdata();
    h2.getdata();
    h2.showdata();
    h3.getdata();
    h3.showdata();
    return 0;
}