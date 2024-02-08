//conditional operator/ternary operator practice

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    float p=5.5 , q=6.6 , r=7.7 , a=1 ;
    printf(" %f \n %f \n", a?p:r , a?q:r);

    a=0;
    printf(" %f \n", a?p:r);

    printf(" %f ", a==0?p:r);
    getch();
    return 0;
}
