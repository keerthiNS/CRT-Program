#include <stdio.h>

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(n>0)
    {
        printf("/n positve");
    }
    else if(n<0)
    {
        printf("/n negative");
    }
    else
    {
        printf("zero");
    }
    return 0;
}

