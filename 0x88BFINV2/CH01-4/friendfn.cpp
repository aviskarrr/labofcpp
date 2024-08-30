#include<iostream>
using namespace std;
class bye;
class hi{
    int a;
    public:
        friend void aaa(hi &h, bye &b);
        friend int main();
        void display(){
            cout<<a;
        }
};

class bye{
    int b;
    public:
        friend void aaa(hi &h, bye &b);
        friend int main();
        void display(){
            cout<<b;
        }
};

void aaa(hi &h, bye &b){
    int sum =20;
    h.a=20;
    b.b=20;
}

int main(){
    hi h1;bye b1;
    aaa(h1,b1);
    h1.display();
    b1.display();
    return 0;
}
