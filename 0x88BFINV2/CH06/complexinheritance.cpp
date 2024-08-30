#include<iostream>
class f1;
class base{
    protected:
        int a = 10;
};
class derived:public base{
    public:
        int b = 20;
        int c;
        void add(){
            c=a+b; 
        }
    friend class f1;
};

class f1{
    derived d;
    public:
        void calcDiff(){
            int diff=d.a-d.b;
            std::cout<<"Difference is: "<<diff<<std::endl;
        }
};

int main()
{
    f1 f;
    f.calcDiff();
    return 0;
}


