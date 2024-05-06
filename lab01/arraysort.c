#include<stdio.h>
int main(){
    int arr[10];
    int i,j;
    for (i=0;i<10;i++){
        printf("Enter term:");
        scanf("%d",&arr[i]);
    }
    int n=10;
    int a;
     for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (arr[i] > arr[j]) 
                {
 
                    a =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
 
                }
 
            }
        }
        for(i = 0; i < n; ++i){
            printf("%d\n",arr[i]);
        } 
        
}