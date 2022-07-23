// program to find sum and difference of two numbers
// Bim first semester
// 2022
#include<stdio.h>
#include<conio.h>

int a,b,s,d;

int main()
{
	
	printf("Enter two numbers ");
	scanf("%d%d",&a,&b);
	s= a + b;
	d = a - b;
	
	printf("\nSum = %d",s);
	printf("\nDifference = %d",d);
	getch();	
	return 0;
}
