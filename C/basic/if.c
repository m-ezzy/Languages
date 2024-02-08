#include <stdio.h>
#include <conio.h>

void main()
{
    signed int no;
    printf("Enter the number :");
    scanf("%d",&no);
    if(no>0)
    {
        printf("number is positive");
    }
    if(no==0)
    {
        printf("number is zero");
    }
    if(no<0)
    {
        printf("number is negative");
    }
    getch();
}

/*
void main()
{
    signed int no;
    printf("Enter the number :");
    scanf("%d",&no);
    if(no>=0)
    {
        if(no>0)
        {
            printf("number is positive");
        }
        else
        {
            printf("number is zero");
        }
    }
    else
    {
        printf("number is negative");
    }
    getch();
}
*/

/*
void main()
{
    signed int no;
    char x;
    printf("Enter the number :");
    scanf("%d",&no);

    x=(no>=0)?((no>0)?'p':'z'):'n';
    printf("\nthe entered number is %c \n\np=positive\nn=negative\nz=zero\n",x);

    getch();
}
*/
