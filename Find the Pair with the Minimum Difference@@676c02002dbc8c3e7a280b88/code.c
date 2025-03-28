// Your code here...
#include<stdio.h>
int main(){
    int out1=0;
    int out2=0;
    int min=100;
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if((arr[i]>arr[j])){
                if(arr[i]-arr[j]<min){
                    out1=arr[j];
                    out2=arr[i];
                }
                else continue;

            }
            else if(arr[j]>arr[i]){
                if(arr[j]-arr[i]<min){
                    out1=arr[i];
                    out2=arr[j];
                }
                else continue;    
            }
        }
    }
    printf("%d %d",out1,out2);
    return 0;

}