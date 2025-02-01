#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    for (int i=0;i<n;i++){
        for (int j=n;j>i;j--){
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}