#include<stdio.h>
void primeornot();

int main (){
    primeornot();
}

void primeornot(){
    int a;
    int count=0;
    printf("enter numebr ");
    scanf("%d",&a);
    int i;

    for (i =2; i<=a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==1){
        printf("num is prime");
    }
    else{
        printf("not prime");
    }
}
    