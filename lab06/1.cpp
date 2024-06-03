// WAP to convert hour into object of a class Time which has minute and second
// as members.
#include<iostream>
class Time{
    int min,sec;
    public:
        Time()=default;
        Time(float hour){
            int second = static_cast<int>(hour*3600);
            min = second/60;
            sec=second%60;
        }
        void display(){
            std::cout<<min<<" : "<<sec;
        }
};
int main(){
    float hour = 3.36;
    Time t=hour;
    t.display();
    return 0;
}