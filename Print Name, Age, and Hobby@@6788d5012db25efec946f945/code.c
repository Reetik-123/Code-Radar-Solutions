#include <stdio.h>

int main()
{
    int age;
    char name[100],hobby[100];
    scanf("%d %99s %99s",&age,&name,&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s",hobby);
    return 0;
}