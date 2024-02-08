#include <stdio.h>
#include <conio.h>

float main()
{
    float e=1.0,current=1.0,previous=1.0,difference=0.1,count=2.0;

    while(difference>=0.00001)
    {
        e=e+current;
        previous=current;
        current=current/count;
        count=count+1.0;
        difference=previous-current;
    }
    printf("%f",e);
    return e;
}
