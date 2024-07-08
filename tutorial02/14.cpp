#include<iostream>
class shape{
    protected:
        int rad;
    public:
        shape(int r=0):rad(r){}
        virtual float area(){
            return 0;
        }

};

class circle:public shape{
    public:
        circle(int r) : shape(r) {}

        float area(){
            float a;
            return(a=3.14159*shape::rad*shape::rad);

        }
};

class sphere:public shape{
    public:
        sphere(int r) : shape(r) {}

        float area(){
            float a;
            return(a=4.0 * 3.14159 * shape::rad*shape::rad);

        }
};

int main(){
    circle c(3); sphere s(3);
    // shape(3);
    std::cout<<c.area();
    std::cout<<s.area();
    return 0;
}