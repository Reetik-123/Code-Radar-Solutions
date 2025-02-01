#include <stdio.h>

int main()
{
    int n;
    int a=1;
    scanf("%d", &n);
    for (int i=1;i<n+1;i++){
        for (int j=1;j<i+1;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
