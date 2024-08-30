#include<iostream>
using namespace std;
class stud{
    int roll;
    public:
        void getdata(){
            cin>>roll;
        }
        void showdata(){
            cout<<roll;
        }
};
int main(){
    stud *p;
    p=new stud[3];
    for(int i=0;i<3;i++){
        p[i].getdata();
        p[i].showdata();
    }
    delete p;
    return 0;
}