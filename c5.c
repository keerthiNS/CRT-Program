#include <stdio.h>

int main()
{
    int a,b;
    printf("the the value of a:");
    scanf("%d",&a);
    printf("the the value of b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n after swapping the value of a is:%d",a);
    printf("\n after swapping the value of b is:%d",b);
    return(0);
}
