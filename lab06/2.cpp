// WAP to convert Time expressed in minute and second into single value hour.
#include<iostream>
class Time
{
    int min,sec;
    public:
        Time(){
            min=sec=0;
        }
        Time(int a,int b){
            min =a;
            sec = b;
        }
        operator float(){
            float hour = static_cast<float>(((min*60)+sec)/3600.0f);
            return hour;
        }
        // void display(){
        //     std::cout<<"Hour: "<<hour;
        // }

};
int main(){
    int min =201;int sec =35;
    Time t(min,sec);
    float hour = t;
    std::cout<<hour;
    return 0;


}