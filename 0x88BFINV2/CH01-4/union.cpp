#include<iostream>
union student
{
    char student[30];
    int roll;
};

int main(){
    union student s;
    std::cin>>s.student>>s.roll;
    std::cout<<s.student<<s.roll;//error cant print and input at same time 
    //so it will just print latest data i.e roll
    //right approach is to :
    // ->Enter data
    // ->Display data
    // ->enter
    // ->display 
    // ->enter 
    // ->display
    return 0;
    
}
