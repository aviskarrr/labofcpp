#include<iostream>
class add
{
    int a;
    public:
    add(){
        a=2;
    }
    friend add operator ++(add);
    friend add operator ++(add,int);
    void display(){
        std::cout<<a;
    }
};

add operator ++(add a1){
    add a2;
    a2.a=++a1.a;
}
add operator ++(add a1,int){
    add a2;
    a2.a=a1.a++;
}

int main(){
    add a1,a2,a3,a4;
    a3=++a1;
    a4=a2++;
    a3.display();
    a4.display();
    return 0;
}