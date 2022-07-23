// Write  a program to input hours and convert into minutes.
#include<stdio.h>
#include<conio.h>

int main()
{
	int hours, minutes;
	printf("Enter hours:  ");
	scanf("%d",&hours);
	minutes = hours * 60;
	printf("Minutes = %d",minutes);
	return 0;
}
