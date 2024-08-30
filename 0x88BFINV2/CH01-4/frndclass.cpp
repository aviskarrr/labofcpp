#include<iostream>
class varsum;
class var{
    int a;
    int b;
    int sum;
    public:
        var()=default;
        var(int d, int c):a(d),b(c){}
        friend class varsum;//varsum can access var but var cant access varsum until we declare frined in that class 
        friend int main();
};
class varsum{
    public:
    var summ(var v){
        var temp;
        temp.sum=v.a+v.b;
        return temp;
    }
};

int main(){
    var v1(20,30);
    varsum  v2;
    var v3;
    v3=v2.summ(v1);
    std::cout<<v3.sum;
    return 0;

}