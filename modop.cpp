// % operator
#include<stdio.h>

int main()
{
	int days;
	int month;
	
	printf("Enter days:  ");
	scanf("%d",&days);
	
	month = days/30;
	days = days %30;
	
	printf("\n Months = %d \n Days = %d",month,days);
	return 0;
}
