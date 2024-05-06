#include<stdio.h>
#include<conio.h>
int main(){
    int arr[10];
    int i,j;
    int sum;
    for (i=0;i<10;i++){
        printf("Enter term:");
        scanf("%d",&arr[i]);
    }
    sum=0;
    for(j=0;j<10;j++){
        sum+=arr[j];
    }
    printf("sum=%d",sum);
    return 0;
}