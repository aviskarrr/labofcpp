#include<iostream>
using namespace std;
int cck = 4;
class hi{
    static int count;
    public:
        static void inc(){
            count++;
            cck++;//can access gloabl vars too
            //but cant access non static data members inside a class
        }
        static void getc(){
            cout<<count<<cck;
        }

};

int hi::count=7;
int main(){
    hi h;
    h.inc();
    h.getc();
    hi::getc();
    return 0;
}