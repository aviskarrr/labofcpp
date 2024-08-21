#include<iostream>
class Math{
    private:
        int x; int y;
    public:
        Math()=default;
        void getThingsDone(int, int);
        void displayItems();

};

void Math::getThingsDone(int a, int b){
    x =a;
    y=b;
    int c =x+y;
    x=c=y;
    
}

void Math::displayItems(){
    std::cout<<x<<std::endl<<y<<std::endl;
}
int main(){
    Math hi;
    hi.getThingsDone(20,30);
    hi.displayItems();
    return 0;
}