#include<iostream>
class compNum{
    int r,img;
    public:
        compNum(int a=0, int b=0):r(a),img(b){}
        friend compNum operator +(compNum,compNum); 
        void display(){
            std::cout<<r<<"+"<<img<<"j"<<std::endl;
        }
};

compNum operator +(compNum c, compNum c2){
    return compNum(c.r+c2.r, c.img+c2.img);

}

int main(){
    compNum c1(1,2), c2 (3,4);
    compNum c3;
    c3 = c1+c2;
    c3.display();
    return 0;
}