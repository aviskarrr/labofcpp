#include<iostream>
class arg{
    int a, b;
    public:
        char *m;
        arg()=default;
        arg(char *n){
            m=n;
        }
        void input(){
            std::cin>>a>>b;
        }
        void calc(){
            if(b==0){
                throw arg("divide by 0");
            }
            if(b<0){
                throw arg("negative b");
            }
            std::cout<<a/b;
        }

};

int main(){
    arg a;
    a.input();
    try
    {
        a.calc();
    }
    catch(arg AA)
    {
        std::cerr << AA.m << '\n';
    }
    return 0;   
}