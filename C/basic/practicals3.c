#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
/*
    char result[5];
    //cannot store string afterward. string can be stored in this array only at declaration
    // time, otherwise we have to initialize each element by character seperately

    result[0]='F';
    result[1]='A';
    result[2]='I';
    result[3]='L';
    printf("%s",result);
*/
/*
    //finding factorial of number num, fact can only store values upto 2,147,483,647
    unsigned long int num,i,fact=1;
    printf("enter number of which you want the factorial:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("%ld",fact);
*/
/*
    int position,term,previous=1,previous2=0;

    printf("enter the position in fibonacci sequence and know what number it holds:");
    scanf("%d",&position);
    
    printf("position   term");
    printf("\n1 1\n");
    for(int i=2;i<=position;i++)
    {
        term=previous+previous2;
        previous2=previous;
        previous=term;
        printf("%d %d\n",i,term);
    }
*/

    int lines=20;

 	for(int j=1;j<=lines;j++)
 	{
 		for(int i=1;i<=j;i++)
		{
 		    printf("%d ",i);
        }
	    printf("\n");
    }








}