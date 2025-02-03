#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    for (int i=0;i<ni;i++){
        if (i%2==1){
            for (int j=0;j<=i+1;j++){
                if(j%2==1){
                    printf("1");

                }
                else{
                    printf("0");
                }
            }
        }
        else{
            if (i%2==1){
            for (int j=0;j<=i+1;j++){
                if(j%2==1){
                    printf("0");

                }
                else{
                    printf("1");
                }
            }
        }

        }
    }
    return 0;
}