#include<iostream>
using namespace std;
class Comp{
    protected:
    float r;
    float i;
    public:
        void getdata(){
            cin>>r>>i;
        }

};

class Der1:public Comp{
    float rr, ii;
    float nr,ni;
    public:
        void addition(){
            nr=rr+r;
            ni=i+ii;
        }

    friend class f01;
};

class f01{
    float re,im;
    float value1,value2;
    public:
        void sub(Der1 &o1){
            value1=re-o1.r;
            value2=im-o1.i;
        }
};
int main(){
    //aoihf
}
