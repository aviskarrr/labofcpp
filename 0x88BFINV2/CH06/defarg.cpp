#include<iostream>
void defa(int n = 5, char c ='x'){
    for(int i=0;i<n;i++){
        std::cout<<c;
    }
}

int main(){
    defa();
    defa(6,'y');
}