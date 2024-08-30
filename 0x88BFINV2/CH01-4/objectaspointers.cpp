#include<iostream>
class prt{
    int roll;
    int egg;
    int ball;
    friend int main();
};

int main(){
    prt *p;
    prt s;
    p = &s;
    p->ball=20;
    p->egg=30;
    p->roll=40;
    std::cout<<p->ball<<p->egg<<p->roll;
    std::cout<<s.ball<<s.egg<<s.roll;
    
    return 0;
}
