#include<iostream>
using namespace std;
class stud{
    char name[20];
    public:
        void getdata(){
            cin>>name;
        }
        void showdata(){
            cout<<name;
        }
};

class test:public stud{
    char subject[30];
    int fullmarks;
    public:
        void getr(){
            stud::getdata();
            cin>>subject;
            cin>>fullmarks;
        }
        void showdar(){
            stud::showdata();
            cout<<subject;
            cout<<fullmarks;
        }
};

class result:public test{
    int obtained;
    public:
        void gettt(){
            test::getr();
            cin>>obtained;
        }
        void showww(){
            test::showdar();
            cout<<obtained;
        }
};
int main(){
    result r;
    r.gettt();
    r.showww();
    return 0;
}