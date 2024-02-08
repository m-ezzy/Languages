//3 position(p1,p2,p3) ; 3 possible inputs(a,b,c) ; entered characters are to be displayed. using loop

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main()
{
    char parr[3] = {'p1','p2','p3'};
    char arr[3] = {'a','b','c'};
    char p1,p2,p3;

    printf("Enter the character at p1:\n");
    scanf("%c",&parr[0]);
    printf("Enter the character at p2:\n");
    scanf("%c",&parr[1]);
    printf("Enter the character at p3:\n");
    scanf("%c",&parr[2]);

    for(int y=0;y<3;y++)
    {
        char s=parr[y];
    for(int x=0;x<3;x++)
    {
        if(s==arr[x])
        {
            alpha(s);
        }
    }

    }

    getch();
}

void alpha(char z)
{
    if(z=='a')
    {
        printf(" ____\n|    |\n|____|\n|    |\n|    |");
    }
    if(z=='b')
    {
        printf(" ____\n|    |\n|____|\n|    |\n|____|");
    }
    if(z=='c')
    {
        printf(" ____\n|    \n|    \n|    \n|____");
    }
}
