//insert 5 values in an array and display them using oop
#include<iostream>
using namespace std;
class arre{
    int arr[10];
    int i;
    public:
        void getdata(){
            for (i=0;i<10;i++){
            cout<<"Enter term "<<i+1<<": ";
            cin>>arr[i];
            }
        }
        void display(){
            for (i=0;i<10;i++){
            cout<<arr[i];
            }
        }

};
int main(){
    arre a1;
    a1.getdata();
    a1.display();
    return 0;
    
}