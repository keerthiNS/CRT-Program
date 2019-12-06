#include <stdio.h>

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf(n%2==0 ? "even" : "odd");
}

