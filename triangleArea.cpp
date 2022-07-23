// area of triangle
#include<stdio.h>

int main()
{
	float b, h,a;
	printf("Enter b and h");
	scanf("%f%f",&b,&h);
	
	a = (float)1/2* b * h;
	printf("\n Area = %f",a);
	return 0;
	
}
