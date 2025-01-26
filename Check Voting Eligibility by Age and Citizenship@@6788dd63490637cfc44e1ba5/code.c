#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (b==1 || b==0){
        if (a>=18){
        printf("Eligible");

    }
    else{
        printf("Not Eligible");
    }
    }
    else{
        printf("");
    }
    
    return 0;
}