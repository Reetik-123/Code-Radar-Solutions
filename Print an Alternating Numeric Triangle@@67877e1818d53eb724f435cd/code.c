#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    for (int i=1;i<a+1;i++){
        if (i%2==1){
            for (int j=1;j<=i;j++){
                if(j%2==1){
                    printf("1 ");

                }
                else{
                    printf("0 ");
                }
            }
            printf("\n");
        }
        else{
            for (int j=1;j<=i;j++){
                if(j%2==1){
                    printf("0 ");

                }
                else{
                    printf("1 ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}