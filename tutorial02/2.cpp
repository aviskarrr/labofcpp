// Create a class called Length that has data members meter and centimeter.
// Overload + operator to add two objects of class Length. (For example L3 = L1 +
// L2). Also facilitate the operations like L4 = L1 + 5 and L5 = 5 + L4 where L1,
// L2, L3, L4 and L5 are objects of class Length. Use constructors and member
// functions to initialize and display values

#include<iostream>
#include<cmath>
class Length
{
    float meter, centi;
    public:
        Length()=default;
        Length(float a, float b):meter(a),centi(b){}
        friend Length operator +(Length ,Length);
        void display(){
            std::cout<<"meter: "<<meter<<std::endl<<"centi: "<< centi;
        }
};

Length operator +(Length l1, Length l2){
    Length l3;
    l3.meter=l1.meter+l2.meter;
    l3.centi=l1.centi+l2.centi;
    if (l3.centi>=100.0f) {
            l3.meter+=static_cast<int>(l3.centi / 100);
            l3.centi=fmod(l3.centi, 100.0f);
        }
    return l3;
}

int main(int argc, char const *argv[])
{
    Length l1(4.4,5.6);
    Length l2(30.4,99.8), l3;
    l3=l1+l2;
    l3.display();

    return 0;
}

