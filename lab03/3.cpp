//employee have to pay 10% tax to governmnet. Ask users to enter the employee salary using inline function to display net payment to the employee by company
#include<iostream>
using namespace std;
class taxCut{
    int salary;
    float netsal;
    public:
    void getdata(int a){
        salary = a;

    }
    inline void tax();

}; 


inline void taxCut::tax(){
    netsal = salary - 0.10*salary;
    cout<<netsal;
}

int main (){
    taxCut tc1;
    int sal;
    cout<<"Enter your salary";
    cin>>sal;
    tc1.getdata(sal);
    tc1.tax();
    return 0;

}