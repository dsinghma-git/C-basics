#include <stdio.h>
#include <conio.h>
// ASCII Codes 
// 0 -> 48  to 9 ->57
// A ->65 to Z->90
//a ->97 to z->122

int main()
{
  	char c = 0;
  	while(c<=122){
   	printf("\nAscii code= %d \t Character = %c",c,c);
  	c=c+1;
  }
  	
	getch();
} 
