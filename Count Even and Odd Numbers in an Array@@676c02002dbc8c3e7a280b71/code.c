// Your code here...
#include <stdio.h>

int main()
{
    int a;
    int cnte=0;
    int cnto=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        if(arr[i]%2==0){
            cnte+=1;
        }
        else{
            cnto+=1;
        }

    }
    printf("%d %d",cnte,cnto);
    return 0;
}