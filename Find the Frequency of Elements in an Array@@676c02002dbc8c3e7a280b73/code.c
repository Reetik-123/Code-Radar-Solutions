#include<stdio.h>
int main()
{
    int a;
    scanf("%d",%a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int cnt=0;
        int alcnt=0;
        for(int k=0;k<i;k++){
            if(arr[i]==arr[k]){
                alcnt=1;
                break;
            }

        }
        if(alcnt) continue;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        printf("%d %d\n",arr[i],cnt);
    }
}
