#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
/*
    //chapter 6 example 6.6 page no=169
    int count=0;
    float x,sum=0.0,powerx=1.0,accuracy=0.0001;

    printf("enter x:");
    scanf("%f",&x);

    while(powerx>accuracy && count<=1000)
    {
        sum=sum+powerx;
        powerx=powerx*x;
        count++;
    }
    printf("%f , number of times the loop was executed = %d",sum,count);
*/

    //example 6.7
    int num,pos=0,neg=0;

    for(int count=1;count<=100;count++)
    {
        printf("\n\nenter 9999 to exit\nenter number to find it's squareroot:");
        scanf("%d",&num);
        
        if(num==9999)
        {
            break;
        }
        else if(num<0)
        {
            printf("number is negative");
            neg++;
        }
        else if(num>0)
        {
            printf("number is positive");
            pos++;
            printf("\nsquareroot of %d = %f",num,sqrt(num));
        }
    }
    printf("\n%d positive number and %d negative numbers encountered",pos,neg);












}