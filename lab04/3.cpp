#include<iostream>
class distanceMeasurement
{
    int ft,inches;
    public:
    distanceMeasurement(){
        ft=inches=0;
    }
        distanceMeasurement(int a,int b){
            ft=a;
            inches=b;
        }

    distanceMeasurement add(distanceMeasurement a1,distanceMeasurement a2){
        distanceMeasurement a3;
        a3.ft=a1.ft+a2.ft;
        a3.inches=a1.inches+a2.inches;
        if (a3.inches >= 12) {
            a3.ft += a3.inches / 12;
            a3.inches %= 12;
        }
        return a3;
    }
    void display() {
        std::cout << ft << " feet, " << inches << " inches" << std::endl;
    }
};
int main(){
    distanceMeasurement d1(5,10);
    distanceMeasurement d2(5,6);
    distanceMeasurement d3;
    d3=d3.add(d1,d2);
    d3.display();
    return 0;
}