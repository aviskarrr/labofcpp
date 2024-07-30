#include<iostream>
class shape
{
    protected:
        int w,h;
    public:
        void read(int a,int b){
            w=a;h=b;
        }
};

class rect:public shape{
    public:
        int add(){
            return w*h;
        }

        void function2();
};

class triangle:public rect{
    public:
        int ar(){
            return w*h*2;
        }

        // void function2(){
        //     std::cout<<"hi";
        // }
};


// void triangle::function2(){

// }

void rect::function2(){
    std::cout<<"hello";
}


int main(){
    rect r;
    // triangle t;
    // t.function2();
    r.read(2,3);
    r.function2();
    int b =r.add();
    std::cout<<b;
    return 0;
}