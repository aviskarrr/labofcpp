//shop sells books and video tapes
// class media which has title and price which it stores 
// 2 derivved classes :
// one for storing the numebr of pages in a book 
// and another for storing the playing time of the tape
#include<iostream>
using namespace std;
class media{
    protected:
        char title[30];
        int price;
        // int noofpages;
        // int playtime;
    public:
        void getdata(){
            cin>>title;
            cin>>price;
        }
        void showdata(){
            cout<<title<<endl;
            cout<<price<<endl;
        }
};
class page:public media{
    int noofpages;
    public:
        void pag(){
            media::getdata();
            cin>>noofpages;
        }
        void showpag(){
            media::showdata();
            cout<<noofpages;

        }
};
class tape:public media{
    int playtime;
    public:
        void tap(){
            media::getdata();
            cin>>playtime;
        }
        void showtap(){
            media::showdata();
            cout<<playtime<<endl;
        }
};

int main(){
    page p;
    tape t;
    cout<<"enter a book:\n";
    p.pag();
    cout<<"enter a movie:\n";
    t.tap();
    cout<<"showing data:\n";
    p.showpag();
    t.showtap();
    return 0;
}
