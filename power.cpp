//write a program to find x^n
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float x,n, y;
	
	printf("Enter x and n:  ");
	scanf("%f%f",&x, &n);
	y = pow(x,n);
	printf("%f to the power %f = %f",x,n,y);
	getch();
	return 0;	
}
