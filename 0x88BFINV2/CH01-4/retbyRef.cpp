#include<iostream>
int &grt(int &x, int &y){
    if(x>y)
        return x;
    else
        return y;
}

int main(){
    int a = 2;int b=3;
    int x=grt(a,b);
    std::cout<<x;
    //modifying refrence value
    grt(a,b)=30;
    std::cout<<grt(a,b);//prints 30 now instead of three
    return 0;
}