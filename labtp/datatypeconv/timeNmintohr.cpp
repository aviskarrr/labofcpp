//conversion of class type to basic type
// we should use following :

//**************************** */
// operator data_type(){
//     conversion
// }
// inside class
/******************************/
#include<iostream>

class minAndSec
{
    int min, sec;
    public:
        minAndSec(int a=0, int b=0):min(a), sec(b){}
        operator int(){
            int total_seconds = (min * 60) + sec;
            int hr = total_seconds / 3600;
            return hr;
        }
};

int main()
{
    minAndSec m1(70,30);
    int hour;
    hour = m1;
    std::cout<<hour;
    return 0;
}
