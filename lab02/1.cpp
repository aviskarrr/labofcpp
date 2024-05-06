#include<iostream>
using namespace std;


class dus{
    int l,b,h;
    public:
        void getdata(int x,int y,int z){
            l=x;
            b=y;
            h=z;
        }
        void volume(){
            int v;
            v= l*b*h;
            cout<<"volume is "<<v;
        }

};
int main (){
    dus d1;
    int a,b,c;
    cout<<"enter length,breadth and height";
    cin>>a>>b>>c;
    d1.getdata(a,b,c);
    d1.volume();
    return 0;
}