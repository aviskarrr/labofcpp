// pure virtual,protected attributes name  as volume , find cube and sphere volume


#include<cmath>
#include<iostream>
using namespace std;
class shape{
    public:
    virtual void find_vol(){
        cout<<"shape";
    }

};

class cube:public shape{
    int side=3;
    public:
        void find_vol(){
            cout<<pow(side,3)<<endl;
        }
};
class sphere:public shape{
    int radius=5;
    public:
        void find_vol(){
            cout<<(4/3)*3.14*pow(radius,3)<<endl;
        }
};

int main(){
    shape *s[2];
    s[0] = new cube();
    s[1]= new sphere();
    s[0]->find_vol();
    s[1]->find_vol();
    delete s[0];
    delete s[1];
    return 0;

}