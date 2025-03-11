// Your code here...
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int k=0;k<n;k++){
        scanf("%d",&arr[k]);
    }
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i+1]< arr[i]){
            continue;
        }
        else{
            printf("Not Sorted");
        }
        
    }
    return "sorted";

}