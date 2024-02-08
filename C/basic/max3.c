#include <stdio.h>
#include <conio.h>

void main()
{
    int a,b,c;

    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    printf("Enter c :");
    scanf("%d",&c);

    if(a>b&&a>c)
    {
        printf("a is max\n");
    }
    if(b>a&&b>c)
    {
        printf("b is max\n");
    }
    if(c>a&&c>b)
    {
        printf("c is max\n");
    }



    if(a>b&&a>c)
    {
        printf("a is max");
    }
    else
    {
        if(b>a&&b>c)
        {
            printf("b is max");
        }
        else
        {
            printf("c is max");
        }
    }



    int max;
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("\n\n%d",max);

    char maxc;
    maxc=(a>b)?((a>c)?'a':'c'):((b>c)?'b':'c');
    printf("\n\n%c",maxc);

    printf("\n\nhere it is assumed that in a,b,c any two of them or all of them are not equal");
    getch();
}
