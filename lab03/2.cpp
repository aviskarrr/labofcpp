#include<iostream>
using namespace std;

class api{
    int m;
    public:
        void default_arg_test(int m, char c='*'){
            int i;
            for(i=0;i<m;i++){
                cout<<c;
            }
        }
};

int main(){
    api A1;
    A1.default_arg_test(5,'!');
    return 0;
}

