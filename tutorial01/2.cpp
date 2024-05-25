// Write a program to find smallest and largest number from an array using DMA with new
// and delete operator.
#include<iostream>
int main(){
    int*p=new int[10];
    for(int i=0;i<10;i++){
        std::cin>>p[i];
    }
    int smallest=p[0];
    int largest=p[0];
    for(int i=0;i<10;i++){
        if(p[i]<smallest){
            smallest=p[i];
        }
        if(p[i]>largest){
            largest=p[i];
        }
    }

    std::cout<<"smallest is "<<smallest<<"\nlargest is "<<largest<<std::endl;
    delete[] p;
    return 0;
}