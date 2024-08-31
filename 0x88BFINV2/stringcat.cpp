#include<iostream>
#include<string>
using namespace std;
class strrr{
    string a;
    public:
        void input(){
            cout<<"enter a string\n";
            cin>>a;
        }
        void display(){
            cout<<a;
        }

        strrr operator +(strrr);

};

strrr strrr::operator+(strrr s1){
    strrr temp;
    temp.a=a+s1.a;
    return temp;
}
int main(){
    strrr s1,  s2,  s3;
    s1.input();
    s2.input();
    s3=s2+s1;
    s3.display();
}