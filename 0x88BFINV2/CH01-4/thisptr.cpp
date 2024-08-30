#include<iostream>
class thi{
    int ball;
    int pen;
    public:
        thi()=default;
        thi(int a, int b):ball(a),pen(b){}
        thi t(thi);
        void display(){
            std::cout<<ball<<pen;
        }
};

thi thi::t(thi aa){ 
    this->ball=aa.ball;
    this->pen=aa.pen;
    return *this;

}

int main(){
    thi t1(2,3);
    thi t2;
    t2.t(t1);
    t2.display();
    return 0;
}