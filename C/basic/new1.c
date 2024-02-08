//this program will do some calculations

#include <stdlib.h>
#include <stdio.h>
//#include <conio.h>

void main()
{
	//clrscr();
	int a=100,b=3,c;

	c=a+b;
	printf("a+b is equal to %d \n",c);

	c=a-b;
	printf("a-b is equal to %d \n",c);

	printf("a*b is equal to %d \n",a*b);

	c=a/b;
	printf("a/b is equal to %d \n",c);

	c=a%b;
	printf("a%b is equal to %d \n",c);

	getch();
	//return 0;
}
