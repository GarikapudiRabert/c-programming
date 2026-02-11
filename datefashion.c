#include<stdio.h>
int main()
{
    int you,date;
    printf("enter the rating of you and date \n");
    scanf("%d%d",&you,&date);
    if(you<=2||date<=2)
    {
        printf("0");
    }
    else if(you=8||date>=8)
    {
        printf("2");
    }
    else
    {
        printf("1");
    }
    return 0;
}
output
enter the rating of you and date 
856
567
2