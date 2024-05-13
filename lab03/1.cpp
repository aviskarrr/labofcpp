//volume of cube, cylinder and rectangular box using function overloadinig
#include<iostream>
using namespace std;
class Calculator{
    public:
        // int l,b,h,r;
        // void getdata(){
        //     cout<<"enter";
        //     cin>>l>>b>>h>>r;

        // }
        void volume(int l, int b,int h){
            int vol;
            vol = l*b*h;
            cout<<vol;
        }


        void volume(int l){
            int vol2;
            vol2 = l*l*l;
            cout<<vol2;
        }
        void volume(int r, int h){
            float vol3;
            vol3 = 3.14*r*r*h;
            cout<<vol3;
        }
};
int main(){
    Calculator C1;
    // int m,n,o,p
    cout<<"Volume of Cuboid:\n";
    C1.volume(2);
    cout<<"Volume of Cylinder:\n";
    C1.volume(2,3);
    cout<<"Volume of Rectangular Box:\n";
    C1.volume(2,3,4);
    return 0;
}