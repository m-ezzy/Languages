#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
/*
    float a,b,c,dis,r1,r2;
    scanf("%f  %f  %f",&a,&b,&c);
    
    dis=b*b-4*a*c;
    if(dis<0)
    {
        printf("roots are imaginary");
    }
    else
    {
        r1 = (-b+sqrt(dis))/(2*a);
        r2 = (-b-sqrt(dis))/(2*a);
        printf("equation is %fx^2 + %fx + %f = 0\nroot1 is %f\nroot2 is %f",a,b,c,r1,r2);
    }
*/
/*
    int a;
    float b;
    a=1/3+1/3+1/3;
    b=1.0/3.0+1.0/3.0+1.0/3.0;
    b=(1.0/3.0)*3.0;
    b=1.0/3.0 + 2.0/3.0;
    a=15.0/10.0+3/2;
    printf("%d",a);
    printf("\n%f",b);
*/
/*
    float a=165489.2356;
    int x;
    x=a;
    x=x%10;
    printf("%d",x);
*/
/*
    float a=165489.2356;
    int x;
    x=a;
    x=x%100;
    printf("%d",x);
*/
/*
    long int x=1554331999;
    printf("%ld \n",x);
    while(x>10)
    {
        x=x/10;
        printf("%ld \n",x);
    }
*/

//3.5 could not be solved...try it sometime later

/*
    float s,u=2.0,a=1.0,t=10.5;
    s=u*t + a*((t*t)/2);
    printf("%f",s);
*/

    int rdr,num=5522222,sum=0;
    while(num>0)
    {
        rdr=num%10;
        sum=sum+rdr;
        num=num/10;
    }
    printf("%d",sum);



}