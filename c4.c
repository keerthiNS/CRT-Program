#include <stdio.h>

int main()
{
    int a,b,c;
    printf("the the value of a:");
    scanf("%d",&a);
    printf("the the value of b:");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("\n after swapping the value of a is:%d",a);
    printf("\n after swapping the value of b is:%d",b);
    return(0);
}
