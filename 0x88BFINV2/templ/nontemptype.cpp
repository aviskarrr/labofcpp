#include<iostream>
using namespace std;
template <class T, int s>
class arr{
    T a[s];
    public:
        void getdata(){
            for(int i=0;i<s;i++){
                cin>>a[i];
            }
        }
        void sort(){
            for(int i=0;i<s;i++){
                for(int j=0;j<s-1;j++){
                    if(a[j]>a[j+1]){
                        T temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
            }
        }
        void display(){
            for(int i=0;i<s;i++){
                cout<<a[i]<<" ";
            }
        }
};

int main(){
    arr<int,10> obj;
    obj.getdata();
    cout<<"Before sorting: ";
    obj.display();
    obj.sort();
    cout<<"\nAfter sorting: ";
    obj.display();
    return 0;
}