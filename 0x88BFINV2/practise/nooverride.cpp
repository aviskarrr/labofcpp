#include<iostream>
using namespace std;
class base{
    public:
        virtual void hi ()final{
            cout<<"base";
        }
};
class derived:public base{
    public:
    //void hi(){//cant write cuz we cant override this now
       // cout<<"derived";
   // }
};
int main(){
    derived d1;
    d1.hi();
    return 0;
}