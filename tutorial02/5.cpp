// 5.	Create a class named City that will have two member variables CityName (char[2O]) and DistFromKtm (float). 
// Add member functions to set and retrieve the CityName and DistFromKtm separetely. Add operator overloading to find 
// the distance between the cities (just find the difference of DistFromKtm) and sum of distance of those cities from 
// Kathmandu. In the main function, initialise three city objects. Set the first and second city to be Pokhara and Dhangadi.
//  Display the surn of DistFromKtm of Pokhara and Dhangadi and distance between Pokhara and Dhangadi.


#include<iostream>
#include<cstring>
class City{
    char CityName[20];
    float DisFromKtm;
    float DistanceBtwn;
    public:
        void setname(const char name[20]){
            strncpy(CityName,name,sizeof(CityName) - 1);
            CityName[sizeof(CityName) - 1] = '\0'; // Ensures null termination

        }
        void setdistance(float dis){
            DisFromKtm=dis;
        }
        friend City operator -(City,City);
        friend City operator +(City,City);
        void display(){
            std::cout<<CityName<<std::endl;
            std::cout<<DisFromKtm<<std::endl;
            std::cout<<DistanceBtwn<<std::endl;
        }
};

City operator -(City C1, City C2){
    City C3;
    C3.DistanceBtwn=C1.DisFromKtm-C2.DisFromKtm;
    return C3;
}

City operator +(City C1, City C2){
    City C3;
    C3.DisFromKtm=C1.DisFromKtm+C2.DisFromKtm;
    return C3;
}

int main(){
    City pokhara;City dhangadi; City temp;
    pokhara.setname("POKHARA");
    dhangadi.setname("DHANGADI");
    temp.setname("dis");
    pokhara.setdistance(140.0);
    dhangadi.setdistance(500.0);
    temp=dhangadi+pokhara;
    temp=dhangadi-pokhara;
    pokhara.display();
    temp.display();
    return 0;
}
