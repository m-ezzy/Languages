#include<stdio.h>
#include<conio.h>

void main(void)
{
    int a[5]={3,5,8,10,15},b[5]={4,7,9,12,18},c[10];
    int x=0,y=0;

    for(int i=0;i<10;i++)
    {
        if(a[x]<b[y])
        {
            c[i]=a[x];
            x++;
        }
        else
        {
            c[i]=b[y];
            y++;
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("\n %d",c[i]);
    }
}