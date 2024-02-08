#include<stdio.h>
#include<conio.h>

void main()
{
	int rows,current,temp=0;
    int arr[50]={0,1,0};

    printf("enter number of rows of pascal triangle:");
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++)//rows loop
    {
/*        for(int p=0;p<=10;p++)
        {
            printf("%d     ",arr[p]);
        }
*/
        for(int j=1;j<=rows-i;j++)//space loop
        {
            printf(" ");
        }

        for(int k=1;k<=i;k++)//loop for each character in row between two 1's
        {
            current=temp+arr[k];
            temp=arr[k];
            arr[k]=current;
            printf("%d  ",current);
        }

        printf("\n");
        temp=0;
    }
	getch();
}