// Write a program to input seconds and convert it into
// hours, minutes and seconds
#include<stdio.h>
#include<conio.h>

int main()
{
	int seconds, minutes, hours;
	printf("Enter seconds:  ");
	scanf("%d",&seconds);
	minutes = seconds/60;
	seconds = seconds%60;
	hours = minutes/60;
	minutes = minutes%60;
	printf("\nHours = %d",hours);
	printf("\nMinutes = %d",minutes);
	printf("\nSeconds =%d", seconds);
	return 0;	
}
