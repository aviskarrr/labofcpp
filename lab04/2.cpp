#include<iostream>
class checkForConstructor
{
    int hr,min,sec;
    public:
        checkForConstructor(){
            hr=min=sec=0;
        }
        checkForConstructor(int a,int b,int c){
            hr=a;
            min=b;
            sec=c;
        }
        void add(checkForConstructor A1, checkForConstructor A2){
                int a;
                this->hr = A1.hr+A2.hr;
                this->min=A1.min+A2.min;
                this->sec=A1.sec+A2.sec;
                if(this->sec>=60){
                    this->min+=this->sec/60;
                    this->sec%=60;
                }
                if(this->min>=60){
                    this->hr+=this->min/60;
                    this->min%=60;
                }
                std::cout<<this->hr<<":"<<this->min<<":"<<this->sec<<std::endl;
        }



};
int main(){
    checkForConstructor C3;
    checkForConstructor C1(11,12,13);
    checkForConstructor C2(12,13,14);
    C3.add(C1,C2);
    return 0;
}
