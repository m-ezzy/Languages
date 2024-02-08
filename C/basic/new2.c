//to see how pointer and == , != , ! operators works

#include <stdlib.h>
#include <stdio.h>
//#include <conio.h>

int main()
{
    int x=5, y=5, a, b;
    int *xptr = &x, *yptr = &y;

    a = xptr==yptr;
    printf("result = %d \n",a);

    b = *xptr == *yptr;
    printf("result = %d \n",b);

    printf("result = %d \n",xptr == yptr);
    printf("result = %d \n",*xptr == *yptr);



    a = xptr!=yptr;
    printf("result = %d \n",a);

    b = *xptr != *yptr;
    printf("result = %d \n",b);

    printf("result = %d \n",xptr != yptr);
    printf("result = %d \n",*xptr != *yptr);


    int c = !x;
    printf("result = %d \n",c);

    printf("result = %d \n",!x);

    int e = x==0;
    printf("result = %d \n",e);

    printf("result = %d \n",x==0);

    getch();
    return a;
}
