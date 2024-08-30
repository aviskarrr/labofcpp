#include<iostream>
using namespace std;
class comp{
    private:
        int real;
        int im;
    public:
        comp():real(0),im(0){
            cout<<"you're inside default one\n";
        }
        comp(int a, int b):real(a),im(b){
            cout<<"you're inside param one\n";
        }
        comp(comp &c){
            real = c.real;
            im = c.im;
            cout<<"youre inside copy one\n";
        }
        ~comp(){
            cout<<"oh no! its being destroyed\n";
        }

        void showdata();
};

void comp::showdata(){
    cout<<real<<"+"<<im<<"i"<<endl;
}

int main(){
    // {
        comp c1;
        c1.showdata();
        comp c2(2,3);
        comp c3(c1);
        c2.showdata();
        c3.showdata();
    // }
    return 0;
}