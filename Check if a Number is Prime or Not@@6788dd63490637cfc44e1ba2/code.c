#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    for (int i=2;i<a;i++){
        if (a%i==0){
            printf("Not Prime");
            return 0;
        }
    }
    else{
        printf("prime");
    }
    return 0;
}