#include<iostream>
class data
{
    int d;
    public:
        data(int a=0):d(a){}
        friend data operator ++(data&,int);
        friend data operator --(data&);
        void display(){
            std::cout<<d;
        }
};

data operator ++(data& d1,int){//post
    d1.d++;
    return d1;
}

data operator --(data& d2){//pre
    --d2.d;
    return d2;
}

int main(){
    data d3(5);
    --d3;
    d3.display();
    d3++;
    d3.display();
}