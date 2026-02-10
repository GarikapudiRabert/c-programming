 // Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the value in A:");
    scanf("%d",&a);
    printf("enter the value in B:");
    scanf("%d",&b);
    printf("enter the value in C:");
    scanf("%d",&c);
    if(a==2 && b==2 && c==2)
    {
        printf("10");
    }
    else if(a==b && b==c && c==a)
    {
        printf("5");
    }
    else if(b!=a && c!=a)
    {
        printf("1");
    }
    return 0;
}
 output
enter the value in A:1
enter the value in B:0
enter the value in C:2
1       
        

    
    