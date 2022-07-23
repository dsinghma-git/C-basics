// distance between two points
#include<stdio.h>
#include<math.h>

int main()
{
	float x1,y1,x2,y2,d;
	printf("Enter first point (x1,y1): ");
	scanf("%f%f",&x1,&x2);
	printf("\n Enter second point (x2,y2): ");
	scanf("%f%f",&x2,&y2);
	
	d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	printf("\n distance between given points = %f",d);
	return 0;	
}
