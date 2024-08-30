#include<iostream>
using namespace std;
class ad{
    int a,b;
    public:
        ad()=default;
        ad(int c, int d):a(c),b(d){}
        ad add(ad,ad);
        void display(){
            cout<<a<<b;
        }
};
ad ad::add(ad a1,ad a2){
    ad temp;
    temp.a=a1.a+a2.a;
    temp.b=a1.b+a2.b;
    return temp;
}
int main(){
    ad a1(2,3),a2(5,6),a3;
    ad a4 = a3.add(a1,a2);
    a4.display();
    return 0;
}
