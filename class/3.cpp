#include<iostream>
class complex{
    int r;
    
    public:
        complex(){
            std::cin>>r;
        }
        bool operator <(complex c){
            return(r<c.r?true:false);
        }
};
int main()
{
    complex c1,c2;
    if(c1<c2){
        std::cout<<"bet";
    }

    return 0;
}
