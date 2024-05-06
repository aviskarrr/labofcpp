//make a class named shape and make its object as rectangle and find its area and volume
#include<iostream>
using namespace std;


class shape{
    int l,b,h;
    public:
        void getdata(int x,int y,int z){
            l=x;
            b=y;
            h=z;
        }
        void area(){
            int area;
            area= l*b;
            cout<<"\narea is "<<area;
        }

        void volume(){
            int v;
            v= l*b*h;
            cout<<"volume is "<<v;
        }

};
int main (){
    shape cuboid;
    int a,b,c;
    cout<<"enter length,breadth and height";
    cin>>a>>b>>c;
    cuboid.getdata(a,b,c);
    cuboid.volume();
    cuboid.area();
    return 0;
}