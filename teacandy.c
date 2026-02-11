#include<stdio.h>
int main()
{
    int tea,candy;
    printf("enter the tea and candy\n:");
    scanf("%d%d",&tea,&candy);
    if(tea<=5||candy<=5)
    {
        printf("0");
    }
    else if("tea>=2||candy>=2")
    {
        printf("1");
    }
    else
    {
        printf("2");
    }
    return 0;
}
