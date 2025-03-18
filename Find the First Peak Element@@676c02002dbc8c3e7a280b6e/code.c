// Your code here..
#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a-1;i++){
        if(arr[i+1]>arr[i] && arr[i-1]<arr[i]){
            printf("%d",arr[i]);
            return 0;
        }
        
    }
    
    return 0;
    
}