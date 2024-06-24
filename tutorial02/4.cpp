// Write a program to overload + operator to concatenate two strings.
#include<iostream>
#include<string.h>
class sabda{
    char a[20];
    public:
        sabda()=default;
        sabda(char b[]){
            strcpy(a,b);
        }

        sabda operator +(sabda s2){
            strcat(a,s2.a);
            return *this;
        }
        void display(){
            std::cout<<a;
        }
};
int main(){
    char s11[]="k cha"; char s22 []= " nth";
    sabda s1(s11), s2(s22), s3;
    s3=s1+s2;
    s3.display();
    return 0;  
}