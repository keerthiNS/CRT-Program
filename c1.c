#include <stdio.h>
// explicit conversion
int main()
{
    
	int a,b,c,total;
	float avg;
	printf("Enter marks of maths,physics,chemistry");
	scanf("%d%d%d",&a,&b,&c);
	total=a+b+c;
	avg=(float)total/3;
	printf("\n the total marks:%d",total);
	printf("\n the avg marks:%f",avg);

    return 0;
}
