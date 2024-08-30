#include<iostream>
enum en{
    sunday, monday, tuesday, wednesdat
};
int main(){
    enum en e;
    e = sunday;
    std::cout<<e;//prints 0
    return 0;
}