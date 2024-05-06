//calculate distance between two points using concept of oop
#include<iostream>
#include<math.h>
using namespace std;
class ddd{
    int x1,x2,y1,y2;
    public:
        void coord1(int a,int b){
            x1=a;
            y1=b;
        }
        void coord2(int c,int d){
            x2=c;
            y2=d;
        }
        void res(){
            float dis;
            dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
            cout<<"distance = "<<dis<<"\n";
        }
};

int main(){
    ddd d1;
    int a,b,c,d;
    cout<<"enter 1st point as (x1,y1)";
    cin>>a>>b;
    cout<<"enter 2nd point as (x2,y2)";
    cin>>c>>d;
    d1.coord1(a,b);
    d1.coord2(c,d);
    d1.res();
    return 0;
}