// Your code here...
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=n;i++){
        for(int j=1;j<i+1;j++){
            printf("%d",j);

        }
        for(int j=i-1;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}