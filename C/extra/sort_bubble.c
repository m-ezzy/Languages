#include <stdio.h>
#include <conio.h>

void sort_bubble(int size,int array[])
{
    int temp;
    for(int j=0;j<size-1;j++)
    {
        for(int k=0;k<size-1-j;k++)
        {
            if(array[k]>array[k+1])
            {
                temp=array[k+1];
                array[k+1]=array[k];
                array[k]=temp;
            }
        }
    }
}