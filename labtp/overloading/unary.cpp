#include<iostream>
class comp
{
    int r, img;
    public:
        comp(int a=0, int b=0):r(a),img(b){}
        friend comp operator -(comp);
        void display(){
            std::cout<<r<<img;
        }
};

comp operator -(comp c1){
    c1.r=-c1.r;
    c1.img=-c1.img;
    return c1;
}
int main(){
    comp c(5,13);
    comp c2;
    c2=-c; //operator(c)=c3;
    c2.display();
}