// Write a program to find square of a number
// Write a program to find cube of a number
#include<stdio.h>
#include<conio.h>

int main()
{
	int n, c;
	printf("Please! Enter a number:  ");
	scanf("%d",&n);
	c = n*n*n;
	printf("The cube of %d = %d",n,c);
	getch();
	return 0;	
}
