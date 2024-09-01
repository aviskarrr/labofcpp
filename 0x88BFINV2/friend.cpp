#include<iostream>
class B;
class A{
    public:
        void showB(B&);
};
class B{
    private:
        int privatemem=30;
    public:
        friend void A::showB(B&);

};

void A::showB(B& c){
    std::cout<<c.privatemem;
}

int main(){
    A a;
    B b;
    a.showB(b);
    return 0;
}
