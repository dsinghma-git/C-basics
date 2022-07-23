// write a program to input two numbers and print
// their sum, difference, product, quotient and remainder.
#include<stdio.h>

int main()
{
	int a,b,s, d,p, q, r;
	printf("\n Enter two numbers: ");
	scanf("%d%d",&a,&b);
	
	s = a + b;
	d = a - b;
	p = a * b;
	q = a / b;
	r = a % b;
	
	printf("\n Sum = %d", s);
	printf("\n Difference = %d",d);
	printf("\n Product = %d",p);
	printf("\n quotient = %d",q);
	printf("\n Remainder = %d",r);
	return 0;	
}
