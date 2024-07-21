// this is basic type to class type.
// we use the following for this:
// contstuctor(datatype of value (eg: float temp)){
//     conversion
// }

#include<iostream>
class celsius{
    int temp;
    public:
        celsius()=default;
        celsius(float tf){
            temp = (5.0/9.0)*(tf-32);
        }
        void display(){
            std::cout<<temp;
        }

};

int main(){
    float f;
    f = 102.32;
    celsius c1;
    c1=f;
    c1.display();
    return 0;
}