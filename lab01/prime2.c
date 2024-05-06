#include<stdio.h>
#include<conio.h>
int main (){
    int a,b;
    printf("enter any two numebrs ");
    scanf("%d%d",&a,&b);
    int i,j;

    for (i =a; i<=b;i++){
        int count=0;
        for (j =1; j<=i;j++ ){
            if (i%j==0){
                count++;
            }
        }
        if (count==2){
            printf("%d\n",i);
        }
    }
    }