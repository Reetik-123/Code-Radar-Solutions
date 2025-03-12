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
        if(arr[i+1]>arr[i] && arr[i+1]>arr[i+2]){
            printf("%d",arr[i+1]);
            return 0;
        }
        
    }
    printf("%d",arr[a]);
    return 0;
    
}