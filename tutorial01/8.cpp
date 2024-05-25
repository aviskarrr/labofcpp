// Create a class called carport that has int member data for car id, int member data for
// charge/hour and float member data for time. Set the data and show the charges and parked
// hours of corresponding car id. Make two members for setting and showing the data.
// Member function should be called from other functions.

#include<iostream>
class Carport{

    int carId,chrgPerHr;
    float time;
    public:
        Carport(){
            carId=0;
            chrgPerHr=0;
            time=0;
        }
        void setData(int a,int b ,int c){
            carId=a;
            chrgPerHr=b;
            time=c;
        }
        void showData(){
            std::cout<<carId<<std::endl;
            std::cout<<"charge per hour:"<<chrgPerHr<<std::endl;
            std::cout<<"parked time:"<<time<<std::endl;
            std::cout<<"total charge:Rs."<<(chrgPerHr*time)<<std::endl;
        }
};

void Setting(Carport& C, int a,int b,int c){
    C.setData(a,b,c);
    C.showData();
}
int main(){
    Carport C;
    Setting(C,2,3,4);
    return 0;
}