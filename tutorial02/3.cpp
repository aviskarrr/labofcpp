// Define a class to hold rectangular co-ordinates, i.e. x and y co-ordinates. Let P1
// and P2 be the objects of this class where P1 is initialized to (20, 30). Facilitate the
// operation P2 = P1++ in such a way that the value in P2 is (21, 31) afterward.

#include<iostream>
class Rect{
    float x,y;
    public:
        Rect()=default;
        Rect(float a,float b):x(a),y(b){}
        Rect& operator ++(int){
            this->x++;
            this->y++;
            return *this;
        }
        void display(){
            std::cout<<x<<"  "<<y;
        }
};

int main(){
    Rect r1(2,3),r2;
    r2=r1++;
    
    r2.display();
    return 0;

}