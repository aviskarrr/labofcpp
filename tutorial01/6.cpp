// Write a program that can store Department ID and Departrnent name with constructor.
// Also write destructor in the same class and show that objects are destroyed in reverse
// order of creation with suitable message.

#include<iostream>
class DepartInfo
{

    int DepartmentId;
    char DepartmentName[20];
    public:
        DepartInfo(){
            std::cout<<"Enter Department Name:";
            std::cin>>DepartmentName;
            std::cout<<"Enter Department ID:";
            std::cin>>DepartmentId;
        }

        ~DepartInfo(){
            std::cout << "Department " << DepartmentName << " destroyed." << std::endl;
            std::cout << "Department " << DepartmentId << " destroyed." << std::endl;
        }
};
int main(){
    DepartInfo D1,D2;
    return 0;
}