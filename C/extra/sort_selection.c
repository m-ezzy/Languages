#include <stdio.h>
#include <conio.h>

void main(void)
{
    int array[10]={2,9,10,1,5,7,6,4,3,8},temp;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9-i;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
        }
    }
    for(int k=0;k<10;k++)
    {
        printf("\n %d",array[k]);
    }
    getch();
}