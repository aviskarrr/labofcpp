// Write a program to illustrate single, multiple, multilevel, hierarchial
// inheritance.
#include<iostream>
using namespace std;
class ddbase
{
    // int ma;
    public:
        void display(){
            cout<<"hello";
        }
};

class chora_1:public ddbase{
    public:
        void chora(){
            cout<<"multiple level";
        }

};

class chora_2:public ddbase{
    public:
};




class chorakochora_1:public chora_1{
    public:
};

int main(){
    chora_1 c;
    c.display();//single
    chora_2 c2;
    c2.display();//multi
    chorakochora_1 cc1;
    cc1.display();//multiple

    c.display();c2.display();//hirerchial

    return 0;
}