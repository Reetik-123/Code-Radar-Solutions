// Your code here...
#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int ma=arr[0];
    int mi=arr[0];
    for(int i=0;i<a;i++){
        if(arr[i]>ma) ma=arr[i];
    }
    for(int i=0;i<a;i++){
        if(arr[i]<mi) mi=arr[i];
    }
    printf("%d %d",mi,ma);

    
}