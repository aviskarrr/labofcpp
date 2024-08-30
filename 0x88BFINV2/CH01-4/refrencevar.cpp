// Reference variable or alias variable are the special types of variables which 
// provides an alternative name for previously defined variable.

#include<iostream>
int main (){
    int a = 20;
    int &b = a;
    std::cout<<b<<a<<std::endl;
    return 0;
}