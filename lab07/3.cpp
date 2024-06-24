// Write a program to find the area of a rectangle by passing length and breadth
// as arguments after creating member function in both derived and base class
// with the same name.
#include <iostream>
using namespace std;
class Shape {
    public:
        virtual void area(){
            cout<<"hi";
        }
};


class Rectangle:public Shape{
    float len, bre;
    public:
        Rectangle()=default;
        Rectangle(float a,float b):len(a),bre(b){}
        void area(){
            float ar=len*bre;
            cout<<ar;
        }
};

int main(){
    Shape s1;Rectangle r(3.4,77.8);
    r.area();
    return 0;
}