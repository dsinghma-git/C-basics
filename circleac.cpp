// write a program to find area and circumference of a circle
#include<stdio.h>
#define PI 3.14

int main()
{
	float r,a,c;
	printf("\n Enter radius:  ");
	scanf("%f",&r);
	
	a = PI * r * r;
	c= 2 * PI * r;
	
	printf("\n Area = %f",a);
	printf("\n Circumference = %f",c);
	return 0;	
}
