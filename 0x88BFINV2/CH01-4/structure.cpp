#include<iostream>
struct student
{
    char name[30];
    int roll;
};

int main(){
    struct student s={"kiran", 30};
    std::cout<<s.name<<s.roll;
    return 0;

}
