#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < 2*n-1; i++)
    {
        int rownum;
        if(i>=n) rownum = (2*n-2)-i;
        else rownum  = i;
        for (int j = 0; j < n-rownum; j++)
        {
            printf(" ");
        }
        
        for (int j = 0; j < 2*rownum+1; j++)
        {
            printf("*");
        }
        printf("\n");
        
        
    }
 
    return 0;
}