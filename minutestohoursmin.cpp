//Write a program to input minutes and convert into 
// hours and minutes 
 //eg. input = 150 minutes  output = 2hours 30 minutes
 #include<stdio.h>
 #include<conio.h>
 
 int main()
 {
 	int minutes,hours;
 	printf("Enter minutes: ");
 	scanf("%d",&minutes);
 	
 	hours = minutes/60;
 	minutes = minutes%60;
 	
 	printf("\nHours = %d",hours);
 	printf("\nMinutes = %d",minutes);
 	return 0;	
 }
