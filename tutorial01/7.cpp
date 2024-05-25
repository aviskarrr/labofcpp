// Write a program to create a class that takes 10 data from user. Create two sets of objects
// from the class. Use a friend function that compares data from both the objects and display
// the list of the largest ones.
#include<iostream>

class Collector
{
    int*a=new int[10];
    public:
        Collector(){
            for(int i=0;i<10;i++){
                std::cout<<"ENTER:"<<std::endl;
                std::cin>>a[i];
            }
        }
        ~Collector(){
            delete[] a;//can be also done in main function using delete[] c1.a and delete[] c2.a
        }
        friend void compare(Collector,Collector);
        

};

void compare(Collector C1,Collector C2){
    int setC1=0;
    int setC2=0;
    for(int i=0;i<10;i++){
        setC1+=C1.a[i];
        setC2+=C2.a[i];
    }

    if(setC1 > setC2){
        std::cout << "Object 1 has the largest set of data." << std::endl;
    } else if(setC2 > setC1){
        std::cout << "Object 2 has the largest set of data." << std::endl;
    } else {
        std::cout << "Both objects have the same set of data." << std::endl;
    }
}
int main(){
    Collector C1,C2;
    compare(C1,C2);
    return 0;
}