#include<stdio.h>
#include<conio.h>

void main()
{
    char arr[]="123456789";
    int count;

    for(int i=0;i<5;i++)//rows loop
    {
        for(int p=0;p<5-i;p++)
        {
            printf(" ");
        }
        count=i;

        for(int j=i;j<2*i-1+i;j++)//space loop
        {
            if(j>i)
            {
                printf("%c ",arr[count+1]);
                count--;

            }
            else
            {
                printf("%c ",arr[j]);
            }
        }
        printf("\n");
    }
	getch();
}