#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file;
    file.open("boar/1.txt", ios::out|ios::app|ios::binary|ios::in);
    if(!file){
        cout<<"File not found";
    }
    else{
        cout<<"File found";
    }
    char ch;
    while(file){
        file.get(ch);
        cout<<ch;
    }
    file.close();
    return 0;
}