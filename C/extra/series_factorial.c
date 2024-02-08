#include "must1.h"

float calculate(int i);
float x,y,term;
int z;

void main()
{
    y=0.0;
    p("enter x: ant enter no of terms");
    s(" %f %d",&x,&z);
    for(int j=1;j<=z;j++)
    {
        term=x;
        y=y+calculate(z*2-1);
        p("\n%f",y);
    }
    p("\ny is %f",y);
}

float calculate(int i)
{
    if(i==0)
    {
        return(1);
    }
    else
    {
        i=i-1;
        term=(term/((float)i+1.0))*calculate(i);
        return(term);
    }
}